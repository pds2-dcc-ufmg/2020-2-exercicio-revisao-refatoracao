#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>
using namespace std;

class Endereco {

	private:
		string logradouro;
		string cidade;
		string estado;
		string cep;

    public:
        Endereco(string logradouro, string cidade, string estado, string cep);

        string getLogradouro();
        string getCidade();
        string getEstado();
        string getCep();		
};

#endif