#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "  Nome: " << Nome << endl
		 << "  Endereço: " << Endereco << endl
		 << "  Cidade: " << Cidade << endl
		 << "  Estado: " << Estado << endl
		 << "  CEP: " << Cep << endl;

}

Cliente::Cliente(string _Nome, string _Endereco, string _Cidade, string _Estado, string _Cep){
    this->Nome = _Nome;
    this->Endereco = _Endereco;
    this->Cidade = _Cidade;
    this->Estado = _Estado;
    this->Cep = _Cep;
}
