/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 10
 *
 * Escreva uma função de nome incrementa que 
 * receba como argumento um inteiro e adicione 
 * mais um ao seu valor. Escreva um programa que 
 * imprima a variavel passada antes e depois da 
 * chamada da função.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;

void incrementa(int *nmr){
	*nmr += 1;
}

int main() {

	int numero;

	cout << "Escreva um numero pra ser incrementado: ";
	cin >> numero;

	cout << "\nVariavel antes de ser incrementado: " << numero;
	incrementa(&numero);
	cout << "\nVariavel após ser incrementado: " << numero << "\n";


  return 0;
}