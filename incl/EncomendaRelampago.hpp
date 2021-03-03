#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Cliente.hpp"
#include "Encomenda.hpp"
#include <iostream>

class EncomendaRelampago : public Encomenda {
private:
    const double taxaAdiconal = 0.25;

public:
    EncomendaRelampago(double _peso,
                       double _custoKg,
                       Cliente _remetente,
                       Cliente _destinatario);

    double getTaxaAdicional();
    double calcularCustoTotal();
    void print();
};

#endif
