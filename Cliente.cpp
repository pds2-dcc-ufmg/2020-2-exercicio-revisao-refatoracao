#include "Cliente.hpp"


Cliente::Cliente()
{
	this->nome = "";
	this->endereco = "";
	this->cidade = "";
	this->estado = "";
	this->cep = "";
}


Cliente::Cliente(string nome)
{

}


Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep)
{
	this->nome = nome;
	this->endereco = endereco;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
}


Cliente::~Cliente()
{

}


void Cliente::setNome(string nome)
{
	this->nome = nome;
}


void Cliente::setEndereco(string endereco)
{
	this->endereco = endereco;
}


void Cliente::setCidade(string cidade)
{
	this->cidade = cidade;
}


void Cliente::setEstado(string estado)
{
	this->estado = estado;
}


void Cliente::setCep(string cep)
{
	this->cep = cep;
}


string Cliente::getNome() const
{
	return this->nome;
}


string Cliente::getEndereco() const
{
	return this->endereco;
}


string Cliente::getCidade() const
{
	return this->cidade;
}


string Cliente::getEstado() const
{
	return this->estado;
}


string Cliente::getCep() const
{
	return this->cep;
}

ostream& operator << (ostream& os, const Cliente& c)
{
	os << "  Nome: " << c.getNome() << endl
		 << "  Endereço: " << c.getEndereco() << endl
		 << "  Cidade: " << c.getCidade() << endl
		 << "  Estado: " << c.getEstado() << endl
		 << "  CEP: " << c.getCep() << endl;

	return os;
}