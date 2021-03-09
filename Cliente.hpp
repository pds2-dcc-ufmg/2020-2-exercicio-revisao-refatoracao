#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		void getNome();	// retorna o nome do cliente
		void getEndereco();	// retorna o endereco do cliente
		void getCidade();	// retorna a cidade do cliente
		void getEstado();	// retorna o estado do cliente
		void getCep();	// retorna o cep do cliente
		
		void setNome();	// define o nome do cliente
		void setEndereco();	// define o endereco do cliente
		void setCidade();	// define a cidade do cliente
		void setEstado();	// define o estado do cliente
		void setCep();	// define o cep do cliente
		
		void print(); // imprime na tela os dados de um cliente cadastrado
		
	private:
		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
};

#endif
