#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{
	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		
		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCep();
		
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif