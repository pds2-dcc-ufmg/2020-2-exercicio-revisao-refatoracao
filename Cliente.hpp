#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{	
	public:
		Cliente() {}
		Cliente(string param_nome, string param_endereco, string param_cidade, string param_estado, string param_cep) {
			nome     = param_nome;
			endereco = param_endereco;
			cidade   = param_cidade;
			estado   = param_estado;
			cep      = param_cep;
		}

		void print() const; // imprime na tela os dados de um cliente cadastrado

	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
};

#endif