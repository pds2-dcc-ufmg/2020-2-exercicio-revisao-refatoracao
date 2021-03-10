#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

    std::cout << "  Nome: " << nome << std::endl;
    std::cout << "  Endereço: " << endereco << std::endl;
    std::cout << "  Cidade: " << cidade << std::endl;
    std::cout << "  Estado: " << estado << std::endl;
    std::cout << "  CEP: " << cep << std::endl;
}
