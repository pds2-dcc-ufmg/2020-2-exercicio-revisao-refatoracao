#include <string>
#include "Endereco.hpp"

Endereco::Endereco(string logradouro, string cidade, string estado, string cep) {
    this -> logradouro = logradouro;
    this -> cidade = cidade;
    this -> estado = estado;
    this -> cep = cep;
}