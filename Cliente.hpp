#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		Cliente(); // Construtor de clientes
		Cliente(std::string nome; std::string endereco; std::string cidade; std::string estado; std::string cep); // Cadastro de clientes
		void printCliente(); // imprime na tela os dados de um cliente cadastrado
	private:
		std::string _nome;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _cep;
};

#endif
