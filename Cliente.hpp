#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private: // feria o princípio de encapsulamento//

		string nome;   // padronizar o 
		string endereco;
		string cidade;
		string estado;
		string cep;
	
	public:
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente (string nome, string endereco, string cidade, string estado);
		string get_endereco ();
		string get_cidade ();
		string get_estado();
		string get_cep ();
		strin get_nome ();
		void set_endereco (string endereco);
		void set_cidade (string cidade);
		void set_estado (string estado);
		void set_cep (string cep);
};

#endif