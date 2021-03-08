#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;
}

void Cliente::setNome(string pNome){
  nome = pNome;
}

string Cliente::getNome(){
  return nome;
}
    
void Cliente::setEndereco(string pEndereco){
  endereco = pEndereco;
}

string Cliente::getEndereco(){
  return endereco;
}

void Cliente::setCidade(string pCidade){
  cidade = pCidade;
}

string Cliente::getCidade(){
  return cidade;
}

void Cliente::setEstado(string pEstado){
  estado = pEstado;
}

string Cliente::getEstado(){
  return estado;
}

void Cliente::setCep(string pCep){
  cep = pCep;
}
    
string Cliente::getCep(){
  return cep;
}
