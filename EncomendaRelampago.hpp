#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda {

	public:

        EncomendaRelampago(double peso, double custoEmKg, Cliente *remetente, Cliente *destinatario):
            Encomenda(peso, custoEmKg, remetente, destinatario) {}


        double calculaCustoTotal() override {

			double custoTotal = peso * custoEmKg;
			custoTotal += custoTotal * taxaAdicional;
			
			return custoTotal;
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
