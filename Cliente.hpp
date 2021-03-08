#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		
		void print(); // imprime na tela os dados de um cliente cadastrado

		std::string get_nome();
		std::string get_endereco();
		std::string get_cidade();
		std::string get_estado();
		std::string get_cep();

		set_nome( std::string nome );
		set_endereco( std::string endereco );
		set_cidade( std::string cidade );
		set_estado( std::string estado );
		set_cep( std::string cep );
		

	private:

		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
		
};

#endif