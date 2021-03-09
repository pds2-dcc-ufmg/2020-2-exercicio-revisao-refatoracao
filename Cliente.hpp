#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	Cliente(string name, string address, string city, string state, string cep): NOME(name), ENDERECO(address), CIDADE(city), ESTADO(state), CEP(cep){}
	Cliente(){}
	void print(); // imprime na tela os dados de um cliente cadastrado

	private:
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;
};

#endif