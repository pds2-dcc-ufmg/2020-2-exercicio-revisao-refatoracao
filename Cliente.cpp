#include "Cliente.hpp"
#include <iostream>
#include <string>

Cliente::Cliente(){};
Cliente::Cliente(std::string _nome,
                 std::string _endereco,
                 std::string _cidade,
                 std::string _estado,
                 std::string _cep) {
    nome = _nome;
    endereco = _endereco;
    cidade = _cidade;
    estado = _estado;
    cep = _cep;
}

std::string Cliente::getNome() {
    return nome;
}
std::string Cliente::getEndereco() {
    return endereco;
}
std::string Cliente::getCidade() {
    return cidade;
}
std::string Cliente::getEstado() {
    return estado;
}
std::string Cliente::getCep() {
    return nome;
}

void Cliente::setNome(std::string _nome) {
    nome = _nome;
}
void Cliente::setEndereco(std::string _endereco) {
    endereco = _endereco;
}
void Cliente::setCidade(std::string _cidade) {
    cidade = _cidade;
}
void Cliente::setEstado(std::string _estado) {
    estado = _estado;
}

void Cliente::setCep(std::string _cep) {
    cep = _cep;
}

void Cliente::print() {
    std::cout << "  Nome: " << nome << std::endl
              << "  Endereço: " << endereco << std::endl
              << "  Cidade: " << cidade << std::endl
              << "  Estado: " << estado << std::endl
              << "  cep: " << cep << std::endl;
}
