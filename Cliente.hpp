#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		Cliente();
		Cliente(std::string Nome_in, std::string Endereco_in, std::string Cidade_in, std::string Estado_in, std::string Cep_in);
		//construtor da classe cliente
	
		void print(); // imprime na tela os dados de um cliente cadastrado
    
	private:

		std::string Nome;
		std::string Endereco;
		std::string Cidade;
		std::string Estado;
		std::string Cep;
				
};

#endif
