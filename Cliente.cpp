#include <iostream>
#include <string>
#include "Cliente.hpp"


void Cliente::cadastro(std::string _nome,
  std::string _endereco,
  std::string _cidade,
  std::string _estado,
  std::string _cep){

    endereco = _endereco;
    cidade = _cidade;
    estado = _estado;
    cep = _cep;
};

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		        << "  Endereço: " << endereco << endl
		        << "  Cidade: " << cidade << endl
		        << "  Estado: " << estado << endl
		        << "  CEP: " << cep << endl;

};