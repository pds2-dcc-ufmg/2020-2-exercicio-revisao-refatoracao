#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{ //Classe com os dados do cliente. 

	public:
               void print(); // imprime na tela os dados de um cliente cadastrado
		
	
	private:
		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
				
	      
};

#endif
