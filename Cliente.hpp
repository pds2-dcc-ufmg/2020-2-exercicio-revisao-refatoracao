#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:

		string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;

	public:	
  
		Cliente();
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		void print();

};

#endif