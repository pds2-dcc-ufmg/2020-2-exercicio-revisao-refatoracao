#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(std::string, std::string, std::string, std::string, std::string);
	
	private:
		
		std::string NOME;
		std::string ENDERECO;
		std::string CIDADE;
		std::string ESTADO;
		std::string CEP;
					
};

#endif
