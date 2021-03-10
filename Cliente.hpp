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

		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);
		void print(); // imprime na tela os dados de um cliente cadastrado
		std::string getNome();
		std::string getEndereco();
		std::string getCidade();
		std::string getEstado();
		std::string getCep();

};

#endif