#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		Cliente(){
			this->NOME = NOME;
			this->ENDERECO = ENDERECO;
			this->CIDADE = CIDADE;
			this->ESTADO = ESTADO;
			this->CEP = CEP;
		}

		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;
				
		void print(); // imprime na tela os dados de um cliente cadastrado


		Cliente(string NOME, string ENDERECO, string CIDADE, string ESTADO, string CEP){
			this->NOME = NOME;
			this->ENDERECO = ENDERECO;
			this->CIDADE = CIDADE;
			this->ESTADO = ESTADO;
			this->CEP = CEP;
		}
		
};

#endif