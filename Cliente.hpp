#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
private:
	std::string nome;
	std::string endereco;
	std::string cidade;
	std::string estado;
	std::string cep;

public:
	Cliente();
	Cliente(std::string, std::string, std::string, std::string, std::string);
	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
