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

	public:

		void print(); 
		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);
		
};

#endif