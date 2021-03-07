#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	private:
		const string _nome;
		const string _endereco;
		const string _cidade;
		const string _estado;
		const string _cep;

	public:
		Cliente(string nome, string endereco, string cidade, string estado, string cep): _nome(nome), _endereco(endereco), _cidade(cidade), _estado(estado), _cep(cep){}
		Cliente(){}
				
		void print() const; // imprime na tela os dados de um cliente cadastrado
		
};

#endif