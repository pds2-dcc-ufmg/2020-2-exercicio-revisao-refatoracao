#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal(){}

		EncomendaNormal(double peso, double custoPorQuilograma){
			
			this->peso = peso;

			this->custoPorQuilograma = custoPorQuilograma;
		}
		
		double calculaPrecoEncomenda(){

			double custoTotalEntrega = peso * custoPorQuilograma;

			return custoTotalEntrega;
		}

		void imprimeRelatorioEncomendas(){

			std::cout << "[Encomenda Normal]" << std::endl;

			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoPorQuilograma << std::endl
				<< "  Custo total: " << calculaPrecoEncomenda() << std::endl;
	}
};

#endif