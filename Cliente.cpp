#include <iostream>
#include <string>
#include "Cliente.hpp"




void Cliente::print(){

    std::cout << "  Nome: " << nome << std::endl
    << "  Endereço: " << endereco << std::endl
    << "  Cidade: " << cidade << std::endl
    << "  Estado: " << estado << std::endl
    << "  CEP: " << cep << std::endl;

}

std::string Cliente::getNome(){
    return this->nome;
}

void Cliente::setNome(std::string n){
    this->nome = n;
}

std::string Cliente::getEndereco(){
    return this->endereco;
}

void Cliente::setEndereco(std::string e){
    this->endereco = e;
}

std::string Cliente::getCidade(){
    return this->cidade;
}

void Cliente::setCidade(std::string c){
    this->cidade = c;
}

std::string Cliente::getEstado(){
    return this->estado;
}

void Cliente::setEstado(std::string s){
    this->estado = s;
}

std::string Cliente::getCep(){
    return this->cep;
}

void Cliente::setCep(std::string cp){
    this->cep = cp;
}
