#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Cliente.hpp"
#include "Encomenda.hpp"

#include <iostream>

class EncomendaNormal : public Encomenda {
public:
    EncomendaNormal(double _peso,
                    double _custoKg,
                    Cliente _remetente,
                    Cliente _destinatario);
    double calcularCustoTotal();
    void print();
};

#endif
