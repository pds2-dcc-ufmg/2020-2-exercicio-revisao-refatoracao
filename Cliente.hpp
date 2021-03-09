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

		string getNome();  //retorna o nome
		void setNome(string new_nome);  //altera o nome
	
		string getEndereco();  //retorna o endereco
		void setEndereco(string new_endereco);  //altera o endereco
	
		string getCidade();  //retorna a cidade
		void setCidade(string new_cidade); //altera a cidade
		
		string getEstado();  //retorna o estado
		void setEstado(string new_estado);  //altera o estado
	
		string getCep();  //retorna o cep
		void setCep(string new_cep);  //altera o cep
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
