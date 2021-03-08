#include "Cliente.hpp"

#include <iostream>
#include <string>

void Cliente::imprimeDados() {
    std::cout << "  Nome: " << nome << std::endl
              << "  Endereço: " << endereco << std::endl
              << "  Cidade: " << cidade << std::endl
              << "  Estado: " << estado << std::endl
              << "  CEP: " << cep << std::endl;
}