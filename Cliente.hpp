#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

	private:

		string nome, endereco, cidade, estado, cep;
	
	public:

		Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep);

		Cliente();


		/** Retorna/Seta os respectivos dados encapsulados. */
		string getNome();

		string getEndereco();

		string getCidade();

		string getEstado();

		string getCep();

		/** Imprime na tela os dados de um cliente cadastrado. */
		void printDadosCliente();
};

#endif