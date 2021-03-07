#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Show.hpp"


class Cliente : public Show 
{

public:
	/**
	 * @brief Construtor para a classe Cliente
	 * 
	 * @param _nome 
	 * @param _endereco 
	 * @param _cidade 
	 * @param _estado 
	 * @param _cep 
	 */
	Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep) 
	: nome(_nome), endereco(_endereco), cidade(_cidade), estado(_estado), cep(_cep){};

	/* imprime na tela os dados de um cliente cadastrado */
	void print() override; 
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