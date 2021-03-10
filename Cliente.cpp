#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nom, string end, string cid, string est, string cep) {
	this->nome = nom;
	this->endereco = end;
	this->cidade = cid;
	this->estado = est;
	this->CEP = cep;
}

string Cliente::getNome()
{
	return this->nome;
}

string Cliente::getEndereco()
{
	return this->endereco;
}

string Cliente::getCidade()
{
	return this->cidade;
}

string Cliente::getEstado()
{
	return this->estado;
}

string Cliente::getCEP()
{
	return this->CEP;
}

void Cliente::print() {

	std::cout << "  Nome: " << this->getNome() << endl
		<< "  Endereço: " << this->getEndereco() << endl
		<< "  Cidade: " << this->getCidade() << endl
		<< "  Estado: " << this->getEstado() << endl
		<< "  CEP: " << this->getCEP() << endl;

}
