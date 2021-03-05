#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::imprimir(){//metodo para imprimir os dados do cliente

	std::cout << "  Nome: " << NOME << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << CIDADE << std::endl
		 << "  Estado: " << ESTADO << std::endl
		 << "  CEP: " << cep << std::endl;
}
	//get retorna o valor desejado
	//set altera o valor desejado
	
	std::string Cliente::getNome(){
		return NOME;
	}
	std::string Cliente::getEndereco(){
		return endereco;
	}
	std::string Cliente::getCidade(){
		return CIDADE;
	}
	std::string Cliente::getEstado(){
		return ESTADO;
	}
	std::string Cliente::getCep(){
		return cep;
	}

	void Cliente::setNome(std::string aux){
		this->NOME = aux;
	}
	void Cliente::setEndereco(std::string aux){
		this->endereco = aux;
	}
	void Cliente::setCidade(std::string aux){
		this->CIDADE = aux;
	}
	void Cliente::setEstado(std::string aux){
		this->ESTADO = aux;
	}
	void Cliente::setCep(std::string aux){
		this->cep = aux;
	}
