#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente() {
  this->nome = "";
  this->endereco = "";
  this->cidade = "";
  this->estado = "";
  this->cep = "";
}

Cliente::Cliente(string nome, string endereco, string cidade, string estado, string cep) {
  this->nome = nome;
  this->endereco = endereco;
  this->cidade = cidade;
  this->estado = estado;
  this->cep = cep;
}

void Cliente::setNome(string nome) {
  this->nome = nome;
}

void Cliente::setEndereco(string endereco) {
  this->endereco = endereco;
}

void Cliente::setCidade(string cidade) {
  this->cidade = cidade;
}

void Cliente::setEstado(string estado) {
  this->estado = estado;
}

void Cliente::setCep(string cep) {
  this->cep = cep;
}

string Cliente::getNome() {
  return this->nome;
}

string Cliente::getEndereco() {
  return this->endereco;
}

string Cliente::getCidade() {
  return this->cidade;
}

string Cliente::getEstado() {
  return this->estado;
}

string Cliente::getCep() {
  return this->cep;
}

void Cliente::print() {
	std::cout << "  Nome: " << this->getNome() << endl
		 << "  Endereço: " << this->getEndereco() << endl
		 << "  Cidade: " << this->getCidade() << endl
		 << "  Estado: " << this->getEstado() << endl
		 << "  CEP: " << this->getCep() << endl;
}