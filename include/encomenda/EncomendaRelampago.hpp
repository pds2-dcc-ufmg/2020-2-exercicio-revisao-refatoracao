#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>

#include "Cliente.hpp"
#include "Encomenda.hpp"

class EncomendaRelampago : public Encomenda {
   public:
    EncomendaRelampago(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario);
    ~EncomendaRelampago(){};

    double calculaPreco() override;

    void imprimeEncomenda() override;

   private:
    const double taxaAdicional = 0.25;
};

#endif