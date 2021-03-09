#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

	public:
	
		Cliente(){}; //Construtor normal.
	
		Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep); //Construtor completo.
		
		void print(); //Imprime na tela os dados de um cliente cadastrado.
		
	private:
	
		string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string CEP;
};

#endif