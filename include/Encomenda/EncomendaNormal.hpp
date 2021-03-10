#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

namespace Encomenda
{
	class EncomendaNormal : public Encomenda
	{
	public:
		/**
	  * \brief construtor que inicializa as variáveis
	  */
		EncomendaNormal(double peso, double custo_kg, Cliente::Cliente remetente, Cliente::Cliente destinatario);

		/**
	  * \brief calcula o custo total com base no peso e no custo por kg
	  */
		double getCustoTotal();

		/**
	  * \brief imprime na tela os dados da encomenda
	  */
		void print();
	};
}

#endif