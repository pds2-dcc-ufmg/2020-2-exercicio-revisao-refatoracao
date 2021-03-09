#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {

	public:

        EncomendaNormal(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario):
            Encomenda(peso, custoPorKg, remetente, destinatario) {}


        void imprimeDados() override  {

            Encomenda::imprimeDados();
            std::cout << "[Encomenda Normal]" << std::endl;
            std::cout << "  Peso: " << peso << std::endl
                << "  Custo por kg: " << custoPorKg << std::endl
                << "  Custo total: " << custoTotal << std::endl;
        }
};

#endif
