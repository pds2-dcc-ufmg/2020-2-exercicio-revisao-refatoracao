#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){
	
	cout << "  Nome: " << nome << endl
		 << "  Endereço: " << endereco << endl
		 << "  Cidade: " << cidade << endl
		 << "  Estado: " << estado << endl
		 << "  CEP: " << cep << endl;

}
