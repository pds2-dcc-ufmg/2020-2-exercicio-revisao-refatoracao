#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

namespace Encomenda
{
	class EncomendaRelampago : public Encomenda
	{
	public:
		/**
	  * \brief construtor que inicializa as variáveis
	  */
		EncomendaRelampago(double peso, double custo_kg, Cliente::Cliente remetente, Cliente::Cliente destinatario);

		/**
	  * \brief calcula o custo total com base no peso e no custo por kg
	  */
		double getCustoTotal();

		/**
	  * \brief imprime na tela os dados da encomenda cadastrada
	  */
		void print();

	private:
		const double taxa_adicional = 0.25;
	};
}

#endif