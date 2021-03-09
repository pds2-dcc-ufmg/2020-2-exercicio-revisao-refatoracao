#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		
		void print(); // Imprime na tela os dados de um cliente cadastrado

		//Métodos para pegar os dados do Cliente
		std::string get_nome();
		std::string get_endereco();
		std::string get_cidade();
		std::string get_estado();
		std::string get_cep();

		//Métodos para modificar os dados do Cliente
		void set_nome( std::string nome );
		void set_endereco( std::string endereco );
		void set_cidade( std::string cidade );
		void set_estado( std::string estado );
		void set_cep( std::string cep );
		

	private:

		//Dados do cliente
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
		
};

#endif