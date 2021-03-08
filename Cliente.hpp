#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

	public:

    Cliente(){};
    Cliente(string, string, string, string, string);

    void print();

    string get_nome(){return this->nome;}
    void set_nome(string name){this->nome = name;}
    
    string get_endereco(){return this->endereco;}
    void set_endereco(string index){this->endereco = index;}

    string get_cidade(){return this->cidade;}
    void set_cidade(string city){this->cidade = city;}

    string get_estado(){return this->estado;}
    void set_estado(string state){this->estado = state;}

    string get_CEP(){return this->CEP;}
    void set_CEP(string cep){this->CEP = cep;}

  
  private:

    string nome;
		string endereco;
		string cidade;
		string estado;
		string CEP;

};

#endif
