#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda {

	public:

        EncomendaRelampago(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario):
            Encomenda(peso, custoPorKg, remetente, destinatario) {
            this->taxaAdicional = 0.25;
            }

        // Complementa a função imprimeDados()
        // da superclasse adicionando os dados
        // de peso, taxa e custo da encomenda
		void imprimeDados() override {

			Encomenda::imprimeDados();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoPorKg << std::endl
				<< "  Taxa adicional: " << taxaAdicional << std::endl
				<< "  Custo total: " << custoTotal << std::endl;
		}
};

#endif
