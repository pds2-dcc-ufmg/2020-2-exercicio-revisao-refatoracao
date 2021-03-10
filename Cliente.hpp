#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

				
		void print(); // imprime na tela os dados de um cliente cadastrado

		void preencher_cliente(string nome_, string endrereco_, string cidade_, string estado_, string cep_); //atribuir as informações
		
   private:
   
		string NOME;
		string ENDERECO;
		string CIDADE;
		string ESTADO;
		string CEP; 
		
};

#endif