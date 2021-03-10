#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

private:
	std::string NOME = NULL;
	std::string endereco = NULL;
	std::string CIDADE = NULL;
	std::string ESTADO = NULL;
	std::string cep = NULL;

public:
	Cliente();
	Cliente(std::string nome, std::string adress, std::string city, std::string UF,
			std::string CEP);

	void print(); // imprime na tela os dados de um cliente cadastrado

	std::string getNome();
	void setNome(std::string nome);

	std::string getEndereco();
	void setEndereco(std::string adress);

	std::string getCidade();
	void setCidade(std::string city);

	std::string getEstado();
	void setEstado(std::string UF);

	std::string getCep();
	void setCep(std::string CEP);
};

#endif