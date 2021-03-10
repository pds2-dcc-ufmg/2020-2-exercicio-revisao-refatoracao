#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

namespace Encomenda
{

	class Encomenda
	{
	public:
		/**
		* \brief imprime na tela os dados de uma encomenda cadastrada 
		*/
		void print();

	protected:
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente::Cliente remetente;
		Cliente::Cliente destinatario;
	};
}

#endif