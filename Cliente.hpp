#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	
	private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:

		string getNome();
		void setNome(string new_nome);
	
		string getEndereco();
		void setEndereco(string new_endereco);
	
		string getCidade();
		void setCidade(string new_cidade);
		
		string getEstado();
		void setEstado(string new_estado);
	
		string getCep();
		void setCep(string new_cep);
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
