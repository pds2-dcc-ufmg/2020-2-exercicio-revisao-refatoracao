#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	
	private:
		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;
	
	public:
		Cliente (string nome, string endereco, string cidade, string estado, string cep); // construtor para classe cliente
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
