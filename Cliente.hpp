#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;

	public:
		Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep);		
		void print(); // imprime na tela os dados de um cliente cadastrado		
};

#endif
