#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calculaCustoTotal() {

			double x = peso * custoEmKg;
			x += x * taxaAdicional;
			
			return x;
		}

		void imprimeDados() {

			Encomenda::imprimeDados();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoEmKg << std::endl
				<< "  Taxa adicional: " << taxaAdicional << std::endl
				<< "  Custo total: " << custoTotal << std::endl;
		}

    private:

        double taxaAdicional = 0.25;
};

#endif
