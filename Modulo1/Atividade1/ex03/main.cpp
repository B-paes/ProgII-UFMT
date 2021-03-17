/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 3
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


  int contador = 0;
  bool wasLetter = false;

  for(auto &c : frase){
    
    if(isalnum(c)){
      
      if(wasLetter == false)
        contador++;

      wasLetter = true;
    }
    else{

      wasLetter = false;
    }
  }

  cout << contador << endl;

  return 0;
}