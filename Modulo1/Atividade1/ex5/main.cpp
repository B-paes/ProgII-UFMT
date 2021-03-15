/* Bruno Paes
 * Prog II
 * Atividade 1
 *
 * Escreva uma função para o cálculo da 
 * distância entre dois pontos no plano 
 * cartesiano. Os dois pontos passados 
 * na função como argumentos devem ser 
 * expressados na forma de uma struct. 
 * Crie um programa que leia as coordenadas 
 * x e y do teclado para ambos os pontos e
 * mostre na tela a distância resultante.
 */

#include <iostream>
#include <string>
#include <math.h>

using std::string;
using namespace std;

struct pontos{
	double x;
	double y;
};


double distancia(pontos a, pontos b){
	double xTotal = b.x - a.x;
	double yTotal = b.y - a.y;
	xTotal = pow(xTotal, 2);
	yTotal = pow(yTotal, 2);
	double distancia = xTotal + yTotal;
	return(sqrt(distancia));
}


int main() {

  double x, y;

	cout << "Escolha dois pontos.\nPonto A:\n";
  cout << "X: ";
  cin >> x;
  cout << "\nY: ";
	cin >> y;
	cout << "\n";
	
	pontos pontoA, pontoB; 
	pontoA.x = x;
	pontoA.y = y;

	cout << "Ponto B\n";
	cout << "X: ";
  cin >> x;
  cout << "\nY: ";
	cin >> y;
	cout << "\n";
	
	pontoB.x = x;
	pontoB.y = y;

	cout << "Distancia entre os dois pontos: " << distancia(pontoA, pontoB) << "\n";

  return 0;
}