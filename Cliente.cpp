#include <iostream>
#include <string>
#include "Cliente.hpp"


string Cliente::getNome const{
  return nome;
}

string Cliente::getEndereco const{
  return endereco;
}

string Cliente::getCidade const{
  return cidade;
}

string Cliente::getEstado const{
  return estado;
}

string Cliente::getCep const{
  return cep;
}

void Cliente::print(){

	std::cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}
Cliente::Cliente (string _nome, string _endereco, 
    string _cidade, string _estado, string _cep){
      nome = _nome;
      endereco = _endereco;
      cidade = _cidade;
      estado = _estado;
      cep = _cep;
    }