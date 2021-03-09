#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string NOME;
		std::string ENDERECO;
		std::string CIDADE;
		std::string ESTADO;
		std::string CEP;

	public:

		std::string getNome();
    	std::string getEndereco();
    	std::string getCidade();
    	std::string getEstado();
    	std::string getCep();
		void setNome(std::string NOME);
    	void setEndereco(std::string ENDERECO);
    	void setCidade(std::string ENDERECO);
    	void setEstado(std::string ESTADO);
    	void setCep(std::string CEP);
		Cliente();
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);
};

#endif