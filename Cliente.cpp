#include <string>
#include <iostream>
#include "Cliente.hpp"

Cliente::Cliente() { // construtor de cliente

	this->_nome = "";
	this->_endereco = "";
	this->_cidade = "";
	this->_estado = "";
	this->_cep = "";

} // fim do construtor de cliente


Cliente::Cliente(std::string _nome, std::string _endereco, std::string _cidade, std::string _estado, std::string _cep) { // construtor de cliente

	this->_nome = _nome;
	this->_endereco = _endereco;
	this->_cidade = _cidade;
	this->_estado = _estado;
	this->_cep = _cep;

} // fim do construtor de cliente


void Cliente::print() const { // imprime na tela os dados de um cliente cadastrado

	std::cout << " Nome: " << _nome << std::endl;
	std::cout << " Endereço: " << _endereco << std::endl;
	std::cout << " Cidade: " << _cidade << std::endl;
	std::cout << " Estado: " << _estado << std::endl;
	std::cout << " CEP: " << _cep << std::endl;;

} // fim do metodo print
