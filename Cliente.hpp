#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
		// imprime na tela os dados de um cliente cadastrado
		void print(); 
		//funciona como o construtor da classe
		void set(std::string nome, std::string end, std::string cidade, std::string estado, std::string cep);
	
	private:
		
		std::string NOME;
		std::string ENDERECO;
		std::string CIDADE;
		std::string ESTADO;
		std::string CEP;
					
};

#endif
