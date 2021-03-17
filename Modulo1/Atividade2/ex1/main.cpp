/* Bruno Paes
 * Prog II
 * Atividade 2
 * Ex 1
 *
 * Crie a classe Triangulo, tendo como atributos sua base
 * e altura. Por enquanto, mantenha todo o conteudo da classe
 * como public e crie um metodo calculaArea() que, quando
 * invocado, imprima na tela a area do triangulo que o
 * invocou. No programa principal, instancie e inicialize
 * com valores digitados do teclado dois objetos desta
 * classe e invoque o metodo para ambos.


 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


class Triangulo {
public:
    double base;
    double altura;

    void calculaArea() {
        cout << ((base * altura) / 2) << endl;
    }
};

int main() {

    Triangulo t1, t2;

    cout << "Triangulo 1:\n\nTamanho base: ";
    cin >> t1.base;
    cout << "altura: ";
    cin >> t1.altura;

    cout << "\nTriangulo 2:\n\nTamanho base: ";
    cin >> t2.base;
    cout << "altura: ";
    cin >> t2.altura;


    cout << "\nArea triangulo 1:\n";
    t1.calculaArea();
    cout << "Area triangulo 2:\n";
    t2.calculaArea();


    return 0;
}

