#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		string _nome;
		string _endereco;
		string _ciddade;
		string _estado;
		string _cep;
				
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(string nome, string endereco, string cidade, string estado,
			string cep);

};

#endif