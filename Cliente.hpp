#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	
	public:
		Cliente() {}
		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep) {
			this->nome = nome;
			this->endereco = endereco;
			this->cidade = cidade;
			this->estado = estado;
			this->cep = cep;
		}

		void print(); // imprime na tela os dados de um cliente cadastrado

		// setters
		void setNome(std::string nome) { this->nome = nome; }
		void setEndereco(std::string endereco) { this->endereco = endereco; }
		void setCidade(std::string cidade) { this->cidade = cidade; }
		void setEstado(std::string estado) { this->estado = estado; }
		void setCep(std::string cep) { this->cep = cep; }

		// getters
		std::string getNome() { return nome; }
		std::string getEndereco() { return endereco; }
		std::string getCidade() { return cidade; }
		std::string getEstado() { return estado; }
		std::string getCep() { return cep; }

	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
};

#endif
