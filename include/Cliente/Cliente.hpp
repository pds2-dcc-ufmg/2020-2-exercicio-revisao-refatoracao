#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

public:
	void print(); // imprime na tela os dados de um cliente cadastrado

	void printNome();
	void printEndereco();
	void printCidade();
	void printEstado();
	void printCep();

	void setNome(std::string Nome);
	void setEndereco(std::string Endereco);
	void setCidade(std::string Cidade);
	void setEstado(std::string Estado);
	void setCep(std::string Cep);

private:
	std::string _nome;
	std::string _endereco;
	std::string _cidade;
	std::string _estado;
	std::string _cep;
};

#endif