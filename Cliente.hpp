#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		// imprime na tela os dados de um cliente cadastrado
		void print(); 
		//inicializa as variaveis da classe
		void set(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);
	
	private:
		
		std::string Nome;
		std::string Endereco;
		std::string Cidade;
		std::string Estado;
		std::string CEP;
					
};

#endif
