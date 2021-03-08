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

		void set_nome( std::string nome );
		void set_endereco( std::string endereco );
		void set_cidade( std::string cidade );
		void set_estado( std::string estado );
		void set_cep( std::string cep );
		

	private:

		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
		
};

#endif