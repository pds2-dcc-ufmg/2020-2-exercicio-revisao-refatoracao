#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
		
		void print(); // imprime na tela os dados de um cliente cadastrado

    void registerCliente(string nome, string endereco, string cidade, string estado, string cep);

};

#endif