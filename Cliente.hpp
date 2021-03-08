#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

public:
   
    Cliente ();
    Cliente(string, string, string, string, string);
    void print();

private:

    string nome;
    string endereco;
    string cidade;
    string estado;
    string cep;

};

#endif
