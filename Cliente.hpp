#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
		
		Cliente(string nome, string end, string cidade, string estado, string CEP);
		Cliente();

		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif