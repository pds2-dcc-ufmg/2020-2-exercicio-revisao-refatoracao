#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <Cliente.hpp>
#include <Encomenda.hpp>
#include <iostream>

class EncomendaRelampago : public Encomenda {
   public:
    EncomendaRelampago(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario);

    double calculaPreco() override;

    void imprimeEncomenda() override;

   private:
    double taxaAdicional = 0.25;
};

#endif