#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda {
  public:
    EncomendaRelampago():Encomenda(){};
    EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente dest):Encomenda(peso, custoKg, remetente, dest){};
    double calcula();
    void print();
};

#endif