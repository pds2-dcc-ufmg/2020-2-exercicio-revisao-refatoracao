#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
	public:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
				
		void print() {
      cout << "  Nome: " << nome << endl
        << "  Endereço: " << endereco << endl
        << "  Cidade: " << cidade << endl
        << "  Estado: " << estado << endl
        << "  CEP: " << cep << endl;
    }
};

#endif