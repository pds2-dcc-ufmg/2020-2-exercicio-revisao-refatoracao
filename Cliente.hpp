#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	private:
		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;

	public:

		void setNome(string name);

		void setEndereço(string address);

		void setCidade(string city);

		void setEstado(string state);

		void setcep(string PO);

		string getNome();

		string getEndereco();

		string getCidade();

		string getEstado();

		string getCep();
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif