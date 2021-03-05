#include <iostream>
#include <string>
#include "Cliente.hpp"

string Cliente::getNome(){return NOME;};
string Cliente::getEnd(){return endereco;};
string Cliente::getCid(){return CIDADE;};
string Cliente::getEst(){return ESTADO;};
string Cliente::getCep(){return cep;};

void Cliente::print(){

	std::cout << "  Nome: " << getNome() << endl
		 << "  Endereço: " << getEnd() << endl
		 << "  Cidade: " << getCid() << endl
		 << "  Estado: " << getEst() << endl
		 << "  CEP: " << getCep() << endl;

}