#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		std::string _nome, _endereco, _cidade, _estado, _cep;
				
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
