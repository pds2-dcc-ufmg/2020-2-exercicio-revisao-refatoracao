#include <string>
#include "Endereco.hpp"

Endereco::Endereco(string logradouro, string cidade, string estado, string cep) {
    this->logradouro = logradouro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

string Endereco::getLogradouro() {
    return this->logradouro;
}

string Endereco::getCidade() {
    return this->cidade;
}

string Endereco::getEstado() {
    return this->estado;
}

string Endereco::getCep() {
    return this->cep;
}