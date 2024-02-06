#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{

	private:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		void set_NOME(string nome); // seta o nome do cliente
		void set_endereco(string endereco); // seta o endereço do cliente
		void set_CIDADE(string cidade); //seta a cidade do cliente
		void set_ESTADO(string estado); //seta o estado do cliente
		void set_cep(string cep);// seta o cep do cliente
};

#endif
