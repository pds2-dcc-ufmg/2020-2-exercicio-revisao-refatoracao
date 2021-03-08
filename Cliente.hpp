#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
 
	private:

		string Nome;
		string Endereco;
		string Cidade;
		string Estado;
		string Cep;

	public:
	    Cliente (): Nome(" "), Endereco(" "),Cidade(" "), Estado(" "), Cep(" ") {}
		Cliente(string _Nome, string _Endereco, string _Cidade, string _Estado, string _Cep) : Nome(_Nome), Endereco(_Endereco),
		Cidade(_Cidade), Estado(_Estado), Cep(_Cep) {}
		string GetNome(){ 
			 return this->Nome;
		 }
		 string GetEndereco(){ 
			 return this->Endereco;
		 }
		 string GetCidade(){ 
			 return this->Cidade;
		 }
		 string GetEstado(){ 
			 return this->Estado;
		 }
		 string GetCep(){ 
			 return this->Cep;
		 }

	/*cli0.NOME = "Thales";
	cli0.endereco = "Rua dos Pré-Socráticos";
	cli0.CIDADE = "Miletus";
	cli0.ESTADO = "Ionia";
	cli0.cep = "548 a.C.";*/
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif