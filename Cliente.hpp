#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

	public:

		string NOME, ENDERECO, CIDADE, ESTADO, CEP;
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
