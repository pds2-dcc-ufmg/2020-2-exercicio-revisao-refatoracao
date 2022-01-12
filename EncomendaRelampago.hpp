#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago : public Encomenda {

public:

    EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario) :
            Encomenda(peso, custo, remetente, destinatario) {}

    double calcula() {
        double x = peso * custo_kg;
        x += x * 0.25;
        this->custo_total = x;
        return x;
    }

    void print() {

        Encomenda::print();
        std::cout << "[Encomenda Relâmpago]" << endl;
        std::cout << "  Peso: " << peso << endl
                  << "  Custo por kg: " << custo_kg << endl
                  << "  Taxa adicional: " << 0.25 << endl
                  << "  Custo total: " << custo_total << endl;

    }

};

#endif