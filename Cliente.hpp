#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;
	    
        // imprime na tela os dados de um cliente cadastrado
		void imprimeDados();
};

#endif
