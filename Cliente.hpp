#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>

class Cliente 
{

public:

    std::string nome;
	std::string endereco;
	std::string cidade;
	std::string estado;
    std::string cep;

    void print()
    {
        std::cout << "  Nome: " << nome << std::endl
              << "  Endereço: " << endereco << std::endl
              << "  Cidade: " << cidade << std::endl  
              << "  Estado: " << estado << std::endl
              << "  CEP: " << cep << std::endl;
    }
};

#endif
