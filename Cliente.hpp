#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
#include "Geral.hpp"
using namespace std;
class Cliente: public Geral{
	string nome;
	string endereco;
	string cidade;
	string estado;
	string cep;

	public:
		Cliente(){}
		Cliente(string nome, string endereco, string cidade, string estado, string cep): 
				nome(nome), endereco(endereco), cidade(cidade), estado(estado), cep(cep){}

		string getNome() { return nome; }
		string getEndereco() { return endereco; }
		string getCidade() { return cidade; }
		string getEstado() { return estado; }
		string getCep() { return cep; }
				
		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif