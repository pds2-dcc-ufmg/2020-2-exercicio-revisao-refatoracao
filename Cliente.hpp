#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

	private:
		// Nomes refatorados
		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;
		
	public:	
		void print(); // imprime na tela os dados de um cliente cadastrado

		// Construtor
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
	

		
};

#endif