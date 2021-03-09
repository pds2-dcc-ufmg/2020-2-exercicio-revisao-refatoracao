#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		Cliente(){};

		Cliente(std::string nome, std::string endereco, std::string cidade,
			    std::string estado, std::string cep){
					this->nome = nome;
					this->endereco = endereco;
					this->cidade = cidade;
					this->estado = estado;
					this->cep = cep;
				}

		void print(); // Imprime na tela os dados de um cliente cadastrado

	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;

};

#endif