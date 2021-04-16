/* Bruno Paes
 * Prog II
 *
 * Modulo 2
 * Trabalho 2
 *
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <math.h>


using std::string;
using namespace std;




class Funcionario {
private:
	string nome;
	int codigo;
	float salario = 1000;

public:
	Funcionario(string name, int code) :
		nome(name),
		codigo(code) {}


	float getSalario() { return salario; }
	void setSalario(float novoSalario) { this->salario = novoSalario; }

	float virtual rendaTotal() {}
};

class FuncionarioEnsinoBasico : public Funcionario {
private:
	string escolaFundamental;

public:

	FuncionarioEnsinoBasico(string name, int code, string fundamental) :
		Funcionario(name, code),
		escolaFundamental(fundamental) {}

	float rendaTotal() override {
		setSalario(getSalario() + ((getSalario() * 10) / 100));


		cout << getSalario() << endl;
		return getSalario();
	}

};

/*Nao derivei as proximas das classes anteriores pois
* nao seria possivel usar o override novamente na
* funçao de calcular a renda total
*/
class FuncionarioEnsinoMedio : public Funcionario {
private:
	string escolaFundamental;
	string escolaFormatura;

public:
	FuncionarioEnsinoMedio(string name, int code, string fundamental, string formatura) :
		Funcionario(name, code),
		escolaFundamental(fundamental),
		escolaFormatura(formatura) {}


	float rendaTotal() override {
		setSalario(getSalario() + ((getSalario() * 10) / 100));
		setSalario(getSalario() + ((getSalario() * 50) / 100));

		cout << getSalario() << endl;

		return getSalario();
	}
};

class FuncionarioEnsinoSuperior : public Funcionario {
private:
	string escolaFundamental;
	string escolaFormatura;
	string universidade;

public:
	FuncionarioEnsinoSuperior(string name, int code, string fundamental, string formatura, string faculdade) :
		Funcionario(name, code),
		escolaFundamental(fundamental),
		escolaFormatura(formatura),
		universidade(faculdade) {}


	float rendaTotal() override {
		setSalario(getSalario() + ((getSalario() * 10) / 100));
		setSalario(getSalario() + ((getSalario() * 50) / 100));
		setSalario(getSalario() + getSalario());

		cout << getSalario() << endl;

		return getSalario();
	}

};


int main() {

	FuncionarioEnsinoBasico joice("Joice", 1, "Escolinha do Prof Raimundo");
	FuncionarioEnsinoBasico jenifer("Jenifer", 2, "Escola Juscelino Kubitschek");
	FuncionarioEnsinoBasico joaquim("Joaquim", 3, "Escola Billy Gancho");
	FuncionarioEnsinoBasico jairo("Jairo", 4, "Escola Billy Gancho");

	FuncionarioEnsinoMedio jesse("Jessé", 5, "Escolinha do Prof Raimundo", "Escolinha do Prof Raimundo");
	FuncionarioEnsinoMedio jaqueline("Jaqueline", 6, "Escola Juscelino Kubitschek", "Escola Juscelino Kubitschek");
	FuncionarioEnsinoMedio jeremias("Jeremias", 7, "Escolinha do Prof Raimundo", "Escola Billy Gancho");
	FuncionarioEnsinoMedio josue("Josué", 8, "Escola Billy Gancho", "Hogwarts");

	FuncionarioEnsinoSuperior joao("Joao", 9, "Escola Billy Gancho", "Escola Juscelino Kubitschek", "UFMT");
	FuncionarioEnsinoSuperior julie("Julie", 10, "Escola Billy Gancho", "Escola Billy Gancho", "UFMG");

	vector<Funcionario*> funcionarios;
	funcionarios.push_back(&joice);
	funcionarios.push_back(&jenifer);
	funcionarios.push_back(&joaquim);
	funcionarios.push_back(&jairo);
	funcionarios.push_back(&jesse);
	funcionarios.push_back(&jaqueline);
	funcionarios.push_back(&jeremias);
	funcionarios.push_back(&josue);
	funcionarios.push_back(&joao);
	funcionarios.push_back(&julie);

	float total;
	for (auto f : funcionarios)
		total += f->rendaTotal();

	cout << "\nCusto total com funcionarios: " << total << endl;


	return 0;
}

