/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 7
 *
 * Crie uma estrutura representando um triangulo, 
 * que contenha o tamanho de cada um de seus tres
 * lados. Crie um programa que leia os tres lados 
 * do triangulo de um objeto desta estrutura e 
 * informe se o triangulo é escaleno ou não.
 */

#include <iostream>
#include <string>
#include <math.h>

using std::string;
using namespace std;

struct TRIANGULO{
	double lado1, lado2, lado3;
	
};

string escaleno(TRIANGULO t){
	if(t.lado1 == t.lado2 || t.lado1 == t.lado3)
		return "não é escaleno.";

	else if(t.lado2 == t.lado3)
		return "não é escaleno.";

	else
		return "é escaleno";
}

int main() {

	TRIANGULO triangulo;

	cout << "Escreva o tamanho dos lados do triangulo.\n";

	cout << "Lado1: ";
	cin >> triangulo.lado1;
	cout << "\nLado2: ";
	cin >> triangulo.lado2;
	cout << "\nLado3: ";
	cin >> triangulo.lado3;
	cout << "\n";
	
	cout << "O triangulo " << escaleno(triangulo) << "\n";

  return 0;
}