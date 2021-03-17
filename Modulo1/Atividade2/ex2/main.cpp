/* Bruno Paes
 * Prog II
 * Atividade 2
 * Ex 2
 *
 * Reproduza o exemplo trabalhado durante a aula da 
 * classe Lampada exatamente como foi feito, adicionando 
 * a ela o metodo ehEconomica(). Este metodo retornar 
 * verdadeiro se a potencia da lampada for menor que 40 
 * e falso, caso contrario. Instancie um objeto e teste 
 * todos os metodos implementados
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


class Lampada {
public:
    bool ligada;
    string tipo;
    int potencia;
    int voltagem;

    void ligar() {
        ligada = true;
    }
    void desligar() {
        ligada = false;
    }
    void status() {
        cout << "A lampada está ";
        
        if(ligada == true) {
            cout << "ligada." << endl;
        }
        else {
            cout << "desligada." << endl;
        }
    }
    bool ehEconomica() {
        if (potencia < 40)
            return true;
        else
            return false;
    }
};

int main() {

    Lampada lamp;
    
    lamp.ligar();
    lamp.status();

    lamp.desligar();
    lamp.status();

    lamp.potencia = 30;

    if (lamp.ehEconomica()) {
        cout << "A lampada é economica." << endl;
    }
    else {
        cout << "A lampada não é economica." << endl;
    }
    
    
    return 0;
}

