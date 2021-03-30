/* Bruno Paes
 * Prog II
 *
 * Modulo 2
 * Atividade 2
 *
 * Exercicio 1
 *
 */

#include <iostream>
#include <string>
#include <vector>


using std::string;
using namespace std;

class VeiculoAVenda {
private:
	string marca, modelo;
	int ano;
	float precoDeVenda;
public:
	VeiculoAVenda(string ma, string mo, int an, float pr) : marca(ma), modelo(mo), ano(an), precoDeVenda(pr) {};

	string getMarca() { return marca; }
	string getModelo() { return modelo; }
	int getAno() { return ano; }
	float getPreco() { return precoDeVenda; }

	void setMarca(string nMarca) { this->marca = nMarca; }
	void setModelo(string nModelo) { this->modelo = nModelo; }
	void setAno(int nAno) { this->ano = nAno; }
	void setPreco(float nPreco) { this->precoDeVenda = nPreco; }


	virtual void MostraDados() {
		cout << "Marca: " << getMarca() << endl;
		cout << "Modelo: " << getModelo() << endl;
		cout << "Ano: " << getAno() << endl;
		cout << "Preço de venda: R$ " << getPreco() << endl;
	}
};

class AutomovelAVenda : public VeiculoAVenda {
private:
	float potenciaDoMotor;
	bool cambio; // 0 = manual | 1 = automatico 
public:

	AutomovelAVenda(string ma, string mo, int an, float pr, float po, bool ca) :
		VeiculoAVenda(ma, mo, an, pr),
		potenciaDoMotor(po),
		cambio(ca) {}


	float getPotencia() { return potenciaDoMotor; }
	bool getCambio() { return cambio; }

	void setPotencia(float nPotencia) { this->potenciaDoMotor = nPotencia; }
	void setCambio(bool nCambio) { this->cambio = nCambio; }

	void MostraDados() override {
		cout << "Veiculo: Automovel" << endl;
		cout << "Marca: " << getMarca() << endl;
		cout << "Modelo: " << getModelo() << endl;
		cout << "Ano: " << getAno() << endl;
		cout << "Preço de venda: R$ " << getPreco() << endl;
		cout << "Motor: " << getPotencia() << endl;
		cout << "Cambio: ";
		if (getCambio() == 0) { cout << "manual" << endl; }
		else { cout << "automatico" << endl; }
	}
};

class MotocicletaAVenda : public VeiculoAVenda {
private:
	int cilindrada;
public:

	MotocicletaAVenda(string ma, string mo, int an, float pr, int ci) :
		VeiculoAVenda(ma, mo, an, pr),
		cilindrada(ci) {}


	int getCilindrada() { return cilindrada; }
	void setCilindrada(int nCilindrada) { this->cilindrada = nCilindrada; }


	void MostraDados() override {
		cout << "Veiculo: Motocicleta" << endl;
		cout << "Marca: " << getMarca() << endl;
		cout << "Modelo: " << getModelo() << endl;
		cout << "Ano: " << getAno() << endl;
		cout << "Preço de venda: R$ " << getPreco() << endl;
		cout << "Cilindrada: " << getCilindrada() << endl;

	}
};


int main() {

	AutomovelAVenda c1("Fiat", "Uno", 2012, 15100.00, 1.0, 0);
	AutomovelAVenda c2("volkswagen", "Gol", 2018, 57260.00, 1.6, 1);

	MotocicletaAVenda m1("Honda", "CG Titan", 2017, 7500.00, 150);
	MotocicletaAVenda m2("Honda", "CG Fan", 2018, 7000.00, 150);

	c1.MostraDados();
	cout << endl;
	c2.MostraDados();
	cout << endl;
	m1.MostraDados();
	cout << endl;
	m2.MostraDados();
	cout << endl;


	vector<VeiculoAVenda*> veiculos;
	double totalPreco = 0.0;
	veiculos.push_back(&c1);
	veiculos.push_back(&c2);
	veiculos.push_back(&m1);
	veiculos.push_back(&m2);

	for (auto v : veiculos)
		totalPreco += v->getPreco();

	cout << "Somatoria do preço de todos veiculos: R$" << totalPreco << endl;

	return 0;
}

