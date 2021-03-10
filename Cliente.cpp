
#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::print(){

		cout << "  Nome: " << Nome << endl;
                cout << "  Endereço: " << endereco << endl;
		cout << "  Cidade: " << Cidade << endl;
                cout << "  Estado: " << Estado << endl;
                cout << "  CEP: " << Cep << endl;

}
