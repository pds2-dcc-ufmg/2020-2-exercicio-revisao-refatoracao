#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
	public:
	//Construtores:
	Cliente(string _nome , string _endereco , string _cidade , string _estado , string _cep) :
		nome(_nome), 
		endereco(_endereco), 
		cidade(_cidade), 
		estado(_estado), 
		cep(_cep) {};
	Cliente() {};
	
	//imprime na tela os dados de um cliente cadastrado
	void print(); 
	
	//Métodos getters:
	string getNome();
	string getEndereco();
	string getCidade();
	string getEstado();
	string getCep();
	
	//Métodos setters:
	void setNome(string nome);
	void setEndereco(string endereco);
	void setCidade(string cidade);
	void setEstado(string estado);
	void setCep(string cep);
	
	private:
	//Atributos do cliente:
	string nome;
	string endereco;
	string cidade;
	string estado;
	string cep;
};

#endif
