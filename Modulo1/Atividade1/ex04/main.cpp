/* Bruno Paes
 * Prog II
 * Exercicio de fixação 1
 *
 * Escreva um programa para ler uma 
 * frase do teclado e imprimir na tela 
 * a quantidade de palavras que foram
 * digitadas.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;

int main() {

  string frase;

  cout << "Escreva uma frase\n";
  getline(cin, frase);


  for(auto &c : frase){
    
    if(!isspace(c)){
      
      cout << c;

    }
  }
  cout << endl;
  return 0;
}