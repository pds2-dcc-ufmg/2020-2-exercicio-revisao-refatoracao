#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		Cliente(string n,string c, string e): NOME(n), CIDADE(c), ESTADO(e) {}
		string get_Endereco(){return endereco;}
		void set_endereco(string e){this->endereco = e;}

		string get_cep(){return cep;}
		void set_cep(string c){this->cep = c;}

		string get_Nome(){return NOME;}
		void set_Nome(string n){this->NOME =n ;}

		string get_Cidade(){return CIDADE;}
		void set_Cidade(string c){this->CIDADE = c;}
		
		string get_Estado(){return ESTADO;}
		void set_Estado(string e){this->ESTADO = e;}

		void print(); // imprime na tela os dados de um cliente cadastrado
	;
	private:

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
	;		
};

#endif