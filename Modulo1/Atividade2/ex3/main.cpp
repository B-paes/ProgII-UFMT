/* Bruno Paes
 * Prog II
 * Atividade 2
 * Ex 3
 *
 * Crie a classe Empregado que contenha nome e salario.
 * Crie dois metodos para ela: aumento(float porcentagem)
 * que aumente seu salario de acordo com a porcentagem
 * passada no parametro e mostraDados() que imprime na
 * tela o nome e o salario do funcionario. Teste a classe
 * no programa principal, mostrando os dados do funcionario
 * antes e depois de um aumento concedido.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


class Funcionario {
public:
    string nome;
    double salario;

    void aumento(double porcentagem) {
        salario = (salario * porcentagem) / 100;
        cout << "Aumento efetuado de " << porcentagem << "%" << endl;
    }
    void mostraDados() {
        cout << "Funcionário: " << nome << endl;
        cout << "Salário: " << salario << endl;
    }
};

int main() {

    Funcionario func;

    func.nome = "Joao da Silva";
    func.salario = 1650.50;

    func.mostraDados();

    func.aumento(20);

    func.mostraDados();

    return 0;
}

