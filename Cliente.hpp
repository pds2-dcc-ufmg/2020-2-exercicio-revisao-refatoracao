#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
	public:
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
