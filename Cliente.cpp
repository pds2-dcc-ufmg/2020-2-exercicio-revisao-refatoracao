#include <iostream>
#include <string>

#include "Cliente.hpp"


Cliente::Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep)
        {
            this->nome = nome;
            this->endereco = endereco;
            this->cidade = cidade;
            this->estado = estado;
            this->cep = cep;
        }

void Cliente::imprimeDados(){

	std::cout << "  Nome: " << nome << std::endl
		 << "  Endereço: " << endereco << std::endl
		 << "  Cidade: " << cidade << std::endl
		 << "  Estado: " << estado << std::endl
		 << "  CEP: " << cep << std::endl;

}
