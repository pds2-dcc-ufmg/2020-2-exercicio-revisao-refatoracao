#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#include <iostream>

class Encomenda {

private:
    double peso;
    double custoKg;
    Cliente remetente;
    Cliente destinatario;

public:
    Encomenda(){};
    Encomenda(double _peso,
              double _custoKg,
              Cliente _remetente,
              Cliente _destinatario)
        : peso(_peso), custoKg(_custoKg), remetente(_remetente), destinatario(_destinatario){};

    double getPeso();
    double getCustoKg();
    Cliente getRemetente();
    Cliente getDestinatario();

    void setPeso(double);
    void setCustoKg(double);
    void setRemetente(Cliente);
    void setDestinatario(Cliente);

    virtual double calcularCustoTotal();
    virtual void print();
};

#endif
