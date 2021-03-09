#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		Cliente(); // construtor padrão
		Cliente(string nome, string end, string cidade, string estado, string CEP); // construtor para a classe Cliente
		void print(); // imprime na tela os dados de um cliente cadastrado
	
	private:
		
		// Campos de informação que um Cliente contém
		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;
		
};

#endif