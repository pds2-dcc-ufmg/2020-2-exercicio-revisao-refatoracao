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

void getNome(){
    return this->nome;
}

void setNome(std::string n){
    this->nome = n;
}

void getEndereco(){
    return this->endereco;
}

void setEndereco(std::string e){
    this->endereco = e;
}

void getCidade(){
    return this->cidade;
}

void setCidade(std::string c){
    this->cidade = c;
}

void getEstado(){
    return this->estado;
}

void setEstado(std::string s){
    this->estado = s;
}

void getCep(){
    return this->cep;
}

void setCep(std::string cp){
    this->cep = cp;
}
