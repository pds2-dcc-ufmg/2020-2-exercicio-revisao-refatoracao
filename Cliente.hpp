#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		std::string _nome, _endereco, _cidade, _estado, _cep;

		Cliente(std::string, std::string, std::string, std::string, std::string); //Cria uma instancia de Cliente.
		Cliente();
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
