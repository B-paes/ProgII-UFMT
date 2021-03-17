/* Bruno Paes
 * Prog II
 * Atividade 1
 * Ex 2
 *
 * Escreva um programa que leia uma strings 
 * e gere outra com o conte´udo da primeira invertido.

 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


string invertida(string palavra){
  string nova;


  return nova;
}

int main() {

  string palavra;

  cout << "Escreva uma palavra\n";
  cin >> palavra;

  string invertida = palavra;
  int pos = palavra.size() - 1;
  
  for(auto &c : invertida){
    int contador = 0;

    for(auto ch : palavra){
      
      if (contador == pos){
        c = ch;
        pos--;
      }else{ 
        contador++;
      }
    }
  }

cout << "A palavra '"<< palavra << "' invertida é: " << invertida << "\n";
  
  return 0;
}

