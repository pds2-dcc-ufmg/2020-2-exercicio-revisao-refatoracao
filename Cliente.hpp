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

		void print_cliente(); // imprime na tela os dados de um cliente cadastrado

		Cliente() {} //construtor vazio para o uso em Encomenda

		Cliente(std::string nome, std::string end, std::string cidade, std::string estado, std::string cep): _nome(nome), _endereco(end), _cidade(cidade), _estado(estado), _cep(cep) {} //construtor de cliente
	
};

#endif