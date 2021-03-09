#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	
	private:
		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;

	public:

		string getNome();
		void setNome(string nome);
	
		string getEndereco();
		void setEndereco(string endereco);
	
		string getCidade();
		void setCidade(string cidade);
		
		string getEstado();
		void setEstado(string estado);
	
		string getCep();
		void setCep(string cep);
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
