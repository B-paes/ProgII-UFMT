/* Bruno Paes
 * Prog II
 * Atividade 2
 * Ex 4
 *
 * Crie a classe Partida, tendo como atributos o nome do time
 * mandante, numero de gols do time mandante, pontuaçao do time
 * mandante, nome do time visitante, numero de gols do time
 * visitante e pontuaçao do time visitante. Crie um metodo
 * resultado(string home, int goalHome, string visitor, int goalVisitor)
 * que permita definir nome e numero de gols dos times; crie um
 * metodo calculaPontos() que define os pontos conquistados pelos
 * times depois do resultado consumado. Crie tambem um metodo
 * mostraResultado() que imprima na tela o resultado final como
 * no formato Visitante 4 x 2 Mandante. Instancie dois objetos
 * desta classe e teste seus metodos no programa principal.
 */

#include <iostream>
#include <string>

using std::string;
using namespace std;


class Partida {
public:
    string homeName;
    int homeGoal;
    int homePoints;

    string visitorName;
    int visitorGoal;
    int visitorPoints;


    void resultado(string home, int goalHome, string visitor, int goalVisitor) {
        homeName = home;
        homeGoal = goalHome;

        visitorName = visitor;
        visitorGoal = goalVisitor;
    }
    void calculaPontos() {
        homePoints = homeGoal - visitorGoal;
        visitorPoints = visitorGoal - homeGoal;
    }
    void mostraResultado() {
        cout << visitorName << " " << visitorGoal << " X " << homeGoal << " " << homeName << endl;


        cout << "Pontos\t|\tTime\n" << endl;
        if (homeGoal >= visitorGoal) {
            cout << homePoints << "\t|\t" << homeName << endl;
            cout << visitorPoints << "\t|\t" << visitorName << endl;
        }
        else {
            cout << visitorPoints << "\t|\t" << visitorName << endl;
            cout << homePoints << "\t|\t" << homeName << endl;
        }
        cout << "\n\n";
    }

};

int main() {

    Partida maracana, morumbi;

    maracana.resultado("Flamengo", 4, "Botafogo", 0);
    maracana.calculaPontos();
    maracana.mostraResultado();

    morumbi.resultado("São Paulo", 4, "Palmeiras", 2);
    morumbi.calculaPontos();
    morumbi.mostraResultado();


    return 0;
}

