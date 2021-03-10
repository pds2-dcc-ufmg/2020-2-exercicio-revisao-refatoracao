#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		Cliente(string nome, string endereco, string cidade, string estado, string cep): NOME(nome), ENDERECO(endereco), CIDADE(cidade), ESTADO(estado), CEP(cep){}
		Cliente(){}
		void print();
		
	private:
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;
		
};

#endif
