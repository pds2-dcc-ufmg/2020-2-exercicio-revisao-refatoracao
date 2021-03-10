#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		
		// Imprime os dados do cliente
		void print(); 
};

#endif
