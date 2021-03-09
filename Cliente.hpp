#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	
		void print(); // imprime na tela os dados de um cliente cadastrado
	
	    string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
};

#endif
