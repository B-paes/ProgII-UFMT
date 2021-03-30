/* Bruno Paes
 * Prog II
 *
 * Modulo 2
 * Atividade 2
 *
 * Exercicio 2
 *
 */

#include <iostream>
#include <string>
#include <cmath>
#include <vector>


#define PI 3.141592

using std::string;
using namespace std;

class ObjetoGeometrico {
public:
	virtual void MostraDados() {}

	virtual float CalculaArea() {}

	virtual float CalculaPerimetro() {}
};

class Circulo : public ObjetoGeometrico {
public:
	float cordX, cordY, raio;


	Circulo(float x, float y, float r) : cordX(x), cordY(y), raio(r) {}



	float CalculaPerimetro() override {
		float perimetro = 2 * PI * raio;
		return perimetro;
	}

	float CalculaArea() override {
		float area = PI * powf(raio,2);
		return area;
	}

	void MostraDados() override {
		cout << "Ciruclo" << endl;
		cout << "Coordenada: (" << cordX << " , " << cordY << ")" << endl;
		cout << "Raio: " << raio << endl;
		cout << "Perimetro: " << CalculaPerimetro() << endl;
		cout << "Area: " << CalculaArea() << endl << endl;
	}
};

class Retangulo : public ObjetoGeometrico {
public:
	float base, altura;


	Retangulo(float l, float h) : base(l), altura(h) {}


	float CalculaPerimetro() override {
		float perimetro = (2 * base) + (2 * altura);
		return perimetro;
	}

	float CalculaArea() override {
		float area = base * altura;
		return area;
	}

	void MostraDados() override {
		cout << "Retangulo" << endl;
		cout << "Base: " << base << endl;
		cout << "Altura: " << altura << endl;
		cout << "Perimetro: " << CalculaPerimetro() << endl;
		cout << "Area: " << CalculaArea() << endl << endl;
	}
};

class Triangulo : public ObjetoGeometrico {
public:
	float ladoA, ladoB, ladoC;


	Triangulo(float a, float b, float c) : ladoA(a), ladoB(b), ladoC(c) {}


	float CalculaPerimetro() override {
		float perimetro = ladoA + ladoB + ladoC;
		return perimetro;
	}

	float CalculaArea() override {
		float perimetroMetade = CalculaPerimetro() / 2;
		float area = ((perimetroMetade - ladoA) * (perimetroMetade - ladoB) * (perimetroMetade - ladoC));
		area = sqrt(perimetroMetade * area);
		return area;
	}

	void MostraDados() override {
		cout << "Triangulo" << endl;
		cout << "Lado 1: " << ladoA << endl;
		cout << "Lado 2: " << ladoB << endl;
		cout << "Lado 3: " << ladoC << endl;
		cout << "Perimetro: " << CalculaPerimetro() << endl;
		cout << "Area: " << CalculaArea() << endl << endl;
	}
};


int main() {

	Circulo circulo(1, 0, 3);
	Retangulo retangulo(4, 2);
	Triangulo triangulo(3, 3, 3);

	vector<ObjetoGeometrico*> geometrias;
	geometrias.push_back(&circulo);
	geometrias.push_back(&retangulo);
	geometrias.push_back(&triangulo);

	//Calculo de Perimetro e Area relizados no metodo mostraDados
	for (auto g : geometrias)
		g->MostraDados();
	cout << endl;

	
}