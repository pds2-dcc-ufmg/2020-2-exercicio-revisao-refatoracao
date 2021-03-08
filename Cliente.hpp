#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
		
		/**
		* Imprime na tela os dados de um cliente cadastrado 
		*/
		void print();

		/**
		* Construtor de cliente usando parametros.
		*/
		Cliente(string, string, string, string, string);
		
		Cliente();
		
};

#endif
