#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		registroCliente(string nome, string endereço, string cidade, string estado, string cep);
};


#endif
