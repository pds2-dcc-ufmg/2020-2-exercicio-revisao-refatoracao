#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
				
	public:
		Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep ) : nome(_nome), endereco(_endereco),
		cidade(_cidade), estado(_estado), cep(_cep){};

		Cliente::Cliente(){};
		
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif