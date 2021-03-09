#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;

		Cliente(string _NOME, string _endereco, string _CIDADE, string _ESTADO, string _cep) : NOME(_NOME), endereco(_endereco), CIDADE(_CIDADE), ESTADO(_ESTADO), cep(_cep){};
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif