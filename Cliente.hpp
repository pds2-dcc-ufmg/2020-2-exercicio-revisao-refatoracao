#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		
	private:
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;
		
};

#endif
