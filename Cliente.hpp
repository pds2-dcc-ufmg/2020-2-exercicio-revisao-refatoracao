#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep):
				nome(nome),
				endereco(endereco),
				cidade(cidade),
				estado(estado),
				cep(cep){}

		Cliente(){}
		void print(); // imprime na tela os dados de um cliente cadastrado

	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
				
		
};

#endif