#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;

	public:

		Cliente(string name, string address, string city, string state, string numCep) :
		NOME(name), endereco(address), CIDADE(city), ESTADO(state), cep(numCep) {};

		Cliente() {}; // construtor sem parametros para as atribuicoes no construtor das encomendas

		void print(); // imprime na tela os dados de um cliente cadastrado	
};

#endif