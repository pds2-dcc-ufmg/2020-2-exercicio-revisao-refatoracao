#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	//Cria os atributos da classe Cliente...
	privade:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:
		
		//Construtor da classe Cliente...
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
				
		//Interface da função que imprime na tela os dados de um cliente cadastrado...
		void print(); 
		
};

#endif