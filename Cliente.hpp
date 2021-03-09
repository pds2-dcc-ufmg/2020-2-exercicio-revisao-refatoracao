#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

private:

	string nome;
	string endereco;
	string cidade;
	string estado;
	string CEP;
	

public:
	Cliente(string nom, string end, string cid, string est, string cep);
	Cliente(){};

	string getNome();
	string getEndereco();
	string getCidade();
	string getEstado();
	string getCEP();

	void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
