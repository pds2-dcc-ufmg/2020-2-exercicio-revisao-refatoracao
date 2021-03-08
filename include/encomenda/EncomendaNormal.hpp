#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include <iostream>

#include "Cliente.hpp"
#include "Encomenda.hpp"

class EncomendaNormal : public Encomenda {
   public:
    EncomendaNormal(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario);

    double calculaPreco() override;

    void imprimeEncomenda() override;
};

#endif