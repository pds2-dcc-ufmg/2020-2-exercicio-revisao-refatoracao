#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda, public print{

	private:	
		double taxa_relampago = 0.25;

	public:
		double taxa_entrega_calcular() override{
			double preco = PESO * CUSTOkg;
			preco += preco * taxa_relampago;			
			return preco;
		}

		void imprimir() override{
			Encomenda::imprimir();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << PESO << std::endl
					  << "  Custo por kg: " << CUSTOkg << std::endl
					  << "  Taxa adicional: " << taxa_relampago << std::endl
					  << "  Custo total: " << T << std::endl;
		}
};

#endif
