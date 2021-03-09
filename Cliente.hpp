#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string _nome;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _cep;

	public :

		Cliente( ); // declaracao do construtor de cliente
		Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep); // declaracao do construtor de cliente
		void print() const; // declaracao do metodo print

};

#endif
