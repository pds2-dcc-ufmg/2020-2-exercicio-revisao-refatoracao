#ifndef CLIENTE_H
#define CLIENTE_H

#include "Sistema.hpp"
class Cliente: Sistema{
	private: 
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:	
		Cliente(){}
		Cliente(string nome, string endereco, string cidade, string estado, string cep);
		~Cliente(){};

		void setNome	(string nome)	 { this->nome = nome; }
		void setEndereco(string endereco){ this->endereco = endereco; }
		void setCidade	(string cidade)	 { this->cidade = cidade; }
		void setEstado	(string estado)  { this->estado = estado; }
		void setCep		(string cep)	 { this->cep = cep; }
		
		string getNome()	{ return this->nome; }
		string getEndereco(){ return this->endereco; }
		string getCidade()	{ return this->cidade; }
		string getEstado()	{ return this->estado; }
		string getCep()		{ return this->cep; }		
				
		void print() override;
};

#endif