#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){
	
	cout << "  Nome: " << getNome << endl
		 << "  Endereço: " << getEndereco << endl
		 << "  Cidade: " << getCidade << endl
		 << "  Estado: " << getEstado << endl
		 << "  CEP: " << getCep << endl;

}
