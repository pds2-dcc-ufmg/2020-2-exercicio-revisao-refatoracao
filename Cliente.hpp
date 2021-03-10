#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

    string Nome;
    string Endereco;
    string Cidade;
    string Estado;
    string Cep;

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		Cliente(string Nome,string Endereco,string Cidade,string Estado,string Cep);

};

#endif
