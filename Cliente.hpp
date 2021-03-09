#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {

	private:
		string _NOME;
		string _CIDADE;
		string _ESTADO;
		string _ENDERECO;
		string _CEP;
	
	public:

		string getNome();
		string getEndereco();
		string getCidade();
		string getEstado();
		string getCep();

		void setNome(string NOME);
		void setEndereco(string ENDERECO);
		void setCidade(string CIDADE);
		void setEstado(string ESTADO);
		void setCep(string CEP);

		void print();

};

#endif
