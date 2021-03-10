#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(std::string nome, std::string adress, std::string city, std::string UF,
				 std::string CEP)
{
	this->NOME = nome;
	this->endereco = adress;
	this->CIDADE = city;
	this->ESTADO = UF;
	this->cep = CEP;
}

void Cliente::print()
{

	std::cout << "  Nome: " << NOME << std::endl
			  << "  Endereço: " << endereco << std::endl
			  << "  Cidade: " << CIDADE << std::endl
			  << "  Estado: " << ESTADO << std::endl
			  << "  CEP: " << cep << std::endl;
}
std::string Cliente::getNome()
{
	return this->NOME;
}
void Cliente::setNome(std::string nome)
{
	this->NOME = nome;
}
std::string Cliente::getEndereco()
{
	return this->endereco;
}
void Cliente::setEndereco(std::string adress)
{
	this->endereco = adress;
}
std::string Cliente::getCidade()
{
	return this->CIDADE;
}
void Cliente::setCidade(std::string city)
{
	this->CIDADE = city;
}
std::string Cliente::getEstado()
{
	return this->ESTADO;
}
void Cliente::setEstado(std::string UF)
{
	this->ESTADO = UF;
}
std::string Cliente::getCep()
{
	return this->cep;
}
void Cliente::setCep(std::string CEP)
{
	this->cep = CEP;
}