#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
    private:
		string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string CEP;
    
	public:
	    Cliente() {}
	
	    Cliente(string _nome, string _endereco, string _cidade, string _estado, string _cep) :
	        Nome(_nome),
	        Endereco(_endereco),
	        Cidade(_cidade),
	        Estado(_estado),
	        CEP(_cep) {}

        string getNome();
        string getEndereco();
        string getCidade();
        string getEstado();
        string getCEP();
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif