#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	protected:
		std::string const NOME;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

		explicit Cliente(std::string NOME, std::string endereco, std::string cidade, std::string estado, std::string cep)
						: NOME(NOME), endereco(endereco), cidade(cidade), estado(estado), cep(cep)
		{} // cria um cliente.
};
#endif