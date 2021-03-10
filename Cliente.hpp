#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

typedef struct Endereco {
	std::string endereco;
	std::string cidade;
	std::string estado;
	std::string cep;

	Endereco() {}
	Endereco(std::string endereco, std::string cidade, std::string estado, std::string cep) {
		this->endereco = endereco;
		this->cidade = cidade;
		this->estado = estado;
		this->cep = cep;
	}

} Endereco;

class Cliente{
	
	public:
		Cliente() {

		}
		Cliente(const std::string nome, const Endereco &endereco) {
			this->nome = nome;
			this->endereco = endereco;
		}

		void print() const; // imprime na tela os dados de um cliente cadastrado

	private:
		std::string nome;
		Endereco endereco;
};

#endif