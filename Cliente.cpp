#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	std::cout << "  Nome: " << this->nome << endl
		 << "  Endereço: " << this->endereco << endl
		 << "  Cidade: " << this->cidade << endl
		 << "  Estado: " << this->estado << endl
		 << "  CEP: " << this->CEP << endl;

}

Cliente::Cliente(string name, string index, string city, string state, string cep){
  this->nome = name;
  this->endereco = index;
  this->cidade = city;
  this->estado = state;
  this->CEP = cep;
}
