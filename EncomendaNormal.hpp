#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:

        EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoKg, remetente, destinatario) {}

        double calculaPrecoTotal() {
            return Encomenda::calculaPrecoTotal();
        }

        void printEncomenda() {
            Encomenda::printEncomenda();
            std::cout << "[Encomenda Normal]" << std::endl;

            std::cout << "  Peso: " << getPeso() << std::endl
                << "  Custo por kg: " << getCustoKg() << std::endl
                << "  Custo total: " << getPrecoTotal() << std::endl;
        }

};

#endif