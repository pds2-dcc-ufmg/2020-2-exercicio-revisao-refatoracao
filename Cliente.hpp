#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

    virtual string getNome() const{}
    virtual string getEndereco() const{}
    virtual string getCidade() const{}
    virtual string getEstado() const{}
    virtual string getCep() const{}
    Cliente (string _nome, string _endereco, 
    string _cidade, string _estado, string _cep){}
				
		void print();

    protected:

    string nome;
		string endereco;
		string cidade;
		string estado;
		string cep; 
		
};

#endif