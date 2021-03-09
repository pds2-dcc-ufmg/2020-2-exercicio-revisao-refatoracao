#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado
	
		Cliente(string Nome, string Endereco, string Cidade, string Estado, string Cep):
		    _Nome(Nome),
		    _Endereco(Endereco),
		    _Cidade(Cidade),
		    _Estado(Estado),
		    _Cep(Cep) {}; //Construtor

    private:

        string _Nome;
	string _Endereco;
	string _Cidade;
	string _Estado;
        string _Cep;
};

#endif
