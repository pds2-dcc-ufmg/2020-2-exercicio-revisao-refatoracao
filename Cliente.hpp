#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	protected:
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP;

	public:	
	    void set_NOME(string NOME){
			this->NOME = NOME;
		}
	    void set_ENDERECO(string ENDERECO){
			this->ENDERECO = ENDERECO;
		}
	    void set_CIDADE(string CIDADE){
			this->CIDADE = CIDADE;
		}
	    void set_ESTADO(string ESTADO){
			this->ESTADO = ESTADO;
		}
	    void set_CEP(string CEP){
			this->CEP = CEP;
		}

		string get_NOME(){
			return this->NOME;
		}
		string get_ENDERECO(){
			return this->ENDERECO;
		}
		string get_CIDADE(){
			return this->CIDADE;
		}
		string get_ESTADO(){
			return this->ESTADO;
		}
		string get_CEP(){
			return this->CEP;
		}

		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif