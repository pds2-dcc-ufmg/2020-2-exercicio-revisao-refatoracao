#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print()
{

    std::cout << "  Nome: " << NOME << std::endl
              << "  Endereço: " << ENDERECO << std::endl
              << "  Cidade: " << CIDADE << std::endl
              << "  Estado: " << ESTADO << std::endl
              << "  CEP: " << CEP << std::endl;
}
