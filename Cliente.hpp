#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(string ,string ,string , string, string);
	
	private:
		
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;
					
};

#endif
