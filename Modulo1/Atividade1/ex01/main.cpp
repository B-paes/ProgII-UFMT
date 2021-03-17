/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 1
 *
 * Escreva um programa para ler duas strings e informar
 * qual das duas são maiores ou se são iguais.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;

int main() {

  string um, dois;

  cout << "Escreva uma palavra\n";
  cin >> um;
  
  cout << "Escreva outra palavra\n";
  cin >> dois;

  string maior;

  if(um.size() == dois.size()){
    cout << "As duas palavras são do mesmo tamanho";
  }
  else{
    
    if(um.size() > dois.size()){
      maior = um;
    }else{
      maior = dois;
    }
    cout << "A maior palavra é: " << maior << "\n";
  }
  return 0;
}