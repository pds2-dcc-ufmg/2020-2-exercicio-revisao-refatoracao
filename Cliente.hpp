#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

	private:
		string _NOME;
		string _CIDADE;
		string _ESTADO;
		string _ENDERECO;
		string _CEP;
	
	public:

		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCep();

		Cliente(string NOME, string ENDERECO, string CIDADE, string ESTADO, string CEP);
		Cliente();

		void print();

};

#endif