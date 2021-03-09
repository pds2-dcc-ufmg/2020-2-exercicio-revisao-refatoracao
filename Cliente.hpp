#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>


class Cliente{

	private:

		std::string NOME;
		std::string endereco;
		std::string CIDADE;
		std::string ESTADO;
		std::string cep;

	public:
	Cliente(std::string NOME_, std::string endereco_, std::string CIDADE_, std::string ESTADO_, std::string cep_);			
	void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
