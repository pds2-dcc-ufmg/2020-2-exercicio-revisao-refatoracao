#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda {

	public:

        EncomendaNormal(double peso, double custoEmKg, Cliente *remetente, Cliente *destinatario):
            Encomenda(peso, custoEmKg, remetente, destinatario) {}


        void imprimeDados() {

            Encomenda::imprimeDados();
            std::cout << "[Encomenda Normal]" << std::endl;
            std::cout << "  Peso: " << peso << std::endl
                << "  Custo por kg: " << custoEmKg << std::endl
                << "  Custo total: " << custoTotal << std::endl;
        }
};

#endif
