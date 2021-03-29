/* Bruno Paes
 * Prog II
 *
 * Modulo 2
 * Ex de fixação
 *
 * Encapsulamento
 *
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


class ItemFatura {
private:
    int id;
    string nome;
    int qtd;
    float precoUnit;

public:

    ItemFatura() : id(0), nome("nulo"), qtd(0), precoUnit(0) {};
    ItemFatura(int i, string n, int q, float u) : id(i), nome(n), qtd(q), precoUnit(u) {};


    int getId() { return id; }
    string getNome() { return nome; }
    int getQtd() { return qtd; }
    float getPrecoUnit() { return precoUnit; }


    void setId(int a) { this->id = a; }
    void setNome(string b) { this->nome = b; }
    void setQtd(int c) { this->qtd = c; }
    void setPrecoUnit(float d) { this->precoUnit = d; }


    float totalItem() { return getQtd() * getPrecoUnit(); }


    void imprime() {
        cout << "id: " << id << endl;
        cout << "nome: " << nome << endl;
        cout << "quantidade: " << qtd << endl;
        cout << "preço: R$ " << precoUnit << endl << endl;
    }
};

int main() {

    ItemFatura pano(66, "pano de chão", 146, 7.99);
    ItemFatura leite;

    pano.imprime();
    leite.imprime();

    leite.setPrecoUnit(4.50);
    leite.setQtd(200);
    leite.setNome("leite");
    leite.setId(67);

    leite.imprime();

    cout << "preço total do item pano: R$ " << pano.totalItem() << endl;

    pano.setPrecoUnit(8.5);

    cout << "preço total do item pano: R$ " << pano.totalItem() << endl;



    return 0;
}

