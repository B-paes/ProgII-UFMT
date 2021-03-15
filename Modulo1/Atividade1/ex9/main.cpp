/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 9
 *
 * Escreva uma função void que receba dois 
 * valores inteiros como parametro e troque-os 
 * entre eles. Escreva um programa que teste a 
 * função, exibindo os valores antes e depois de 
 * sua chamada.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;

void troca(int *um, int *dois){

	int placehold;
	placehold = *um;
	
	*um = *dois;
	*dois = placehold;
}

int main() {

	int nUm, nDois;

	cout << "Numero 1: ";
	cin >> nUm;
	cout << "\nNumero 2: ";
	cin >> nDois;

	cout << "\nAntes de chamar a função:\n";
	cout << "var 1 = " << nUm << "\nvar 2 = " << nDois;

	troca(&nUm, &nDois);

	cout << "\n\nDepois de chamar a função:\n";
	cout << "var 1 = " << nUm << "\nvar 2 = " << nDois << "\n";
	


  return 0;
}