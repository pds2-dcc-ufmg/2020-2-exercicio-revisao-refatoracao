#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Endereco.hpp"

using namespace std;

class Cliente {

	private:
		string nome;
		Endereco *endereco;

	public:
		Cliente(string nome, Endereco *endereco);

		~Cliente();
				
		void print();
};

#endif