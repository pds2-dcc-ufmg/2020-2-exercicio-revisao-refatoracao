#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	privated:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCep();	
			
		
};

#endif
