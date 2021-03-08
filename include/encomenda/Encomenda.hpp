#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>

#include "Cliente.hpp"

class Encomenda {
   public:
    Encomenda(double _peso,
              double _custoKg,
              Cliente _remetente,
              Cliente _destinatario) : peso(_peso), custoKg(_custoKg), remetente(_remetente), destinatario(_destinatario){};

    virtual void imprimeEncomenda() = 0;
    virtual double calculaPreco() = 0;

    virtual ~Encomenda(){};

   protected:
    double peso;
    double custoKg;
    double custoTotal;
    Cliente remetente;
    Cliente destinatario;
};

#endif