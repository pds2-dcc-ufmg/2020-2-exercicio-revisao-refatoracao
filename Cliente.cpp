#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

	   cout	<< "  Nome: " << NOME << endl
		 << "  Endereço: " << ENDERECO << endl
		 << "  Cidade: " << CIDADE << endl
		 << "  Estado: " << ESTADO << endl
		 << "  CEP: " << CEP << endl;

}
