#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	    Cliente(string nome="0",string endereco="0",string cidade="0",string estado="0",string cep="0");

		void print(); // imprime na tela os dados de um cliente cadastrado

    protected:
        string _nome;
		string _endereco;
		string _cidade;
		string _estado;
		string _cep;

};

#endif

