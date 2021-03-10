#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{

	public:

	EncomendaRelampago(){}

	EncomendaRelampago(double peso, double custoPorQuilograma){
			
			this->peso = peso;

			this->custoPorQuilograma = custoPorQuilograma;
	}

		double calculaPrecoEncomenda(){

			double custoTotalEntrega = peso * custoPorQuilograma;

			custoTotalEntrega += custoTotalEntrega * 0.25;
			
			return custoTotalEntrega;
		}

		void imprimeRelatorioEncomendas(){

			std::cout << "[Encomenda Relâmpago]" << std::endl;

			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoPorQuilograma << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << calculaPrecoEncomenda() << std::endl;
		}
};

#endif