/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 6
 *
 * Crie uma estrutura representando um 
 * retângulo, que armazene sua altura 
 * e largura. Crie uma função que receba 
 * tal estrutura e retorne a área do 
 * retângulo passado como parâmetro
 */

#include <iostream>
#include <string>
#include <math.h>

using std::string;
using namespace std;

struct RETANGULO{
	double altura;
	double largura;
	double area;
};


int main() {

  RETANGULO ret;

	cout << "Informe tamanho do retângulo.\n";
  cout << "Altura: ";
  cin >> ret.altura;
  cout << "\nLargura: ";
	cin >> ret.largura;
	cout << "\n";

	ret.area = ret.largura * ret.altura;

	cout << "Área do retângulo: " << ret.area << "\n";

  return 0;
}