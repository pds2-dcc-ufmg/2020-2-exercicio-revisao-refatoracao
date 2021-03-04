#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class print{
	virtual void imprimir() = 0;
};

class Cliente: public print{

	public:

		std::string NOME;
		std::string endereco;
		std::string CIDADE;
		std::string ESTADO;
		std::string cep;

		void imprimir() override;
};

#endif
