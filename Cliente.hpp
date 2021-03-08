#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private: // Variáveis privadas; acesso via getters e setters

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public: // Métodos publicos implementados em Cliente.cpp

		void print(); 

		string get_nome();
		string get_endereco();
		string get_cidade();
		string get_estado();
		string get_cep();

		void set_nome(string _nome);
		void set_endereco(string _endereco);
		void set_cidade(string _cidade);
		void set_estado(string _estado);
		void set_cep(string _cep);
};

#endif
