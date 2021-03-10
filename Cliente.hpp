#ifndef CLIENTE_H

#define CLIENTE_H

#include <string>

#include <iostream>

class Cliente{

	public:

		Cliente(){}

		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep):
			nome(nome), endereco(endereco), cidade(cidade), estado(estado), cep(cep) {}

		void Remetente();

		void Destinatario();
				
		void imprimeDadosDoCliente(Cliente cliente); // imprime na tela os dados de um cliente cadastrado

	private:

    	std::string nome;

		std::string endereco;

		std::string cidade;

		std::string estado;

		std::string cep;
};

#endif