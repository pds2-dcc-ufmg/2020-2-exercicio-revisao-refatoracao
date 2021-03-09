#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:	
		void print(); // imprime na tela os dados de um cliente cadastrado
		void setNome(string Nom){this->NOME = Nom;};
		void setEndereco(string end){this->endereco = end;};
		void setCidade(string Cid){this->CIDADE = Cid;};
		void setEstado(string Est){this->ESTADO = Est;};
		void setCep(string CEP){this->cep = CEP;};

	private:
		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
		
};

#endif