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

		Cliente() {}; //construtor vazio necessário para a implementação do construtor Encomenda

		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);

		void print_cliente(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif