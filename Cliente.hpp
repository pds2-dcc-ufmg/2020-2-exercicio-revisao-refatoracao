#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		void print(); // imprime na tela os dados de um cliente cadastrado
	
	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;		
};

#endif