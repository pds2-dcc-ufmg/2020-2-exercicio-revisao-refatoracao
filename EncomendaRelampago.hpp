#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include <iostream>


class EncomendaRelampago: public Encomenda{
    private:
    int TAXARELAMPAGO = 0.25;
    
    public:
        EncomendaRelampago(double p, double c, Cliente r, Cliente d): Encomenda(p, c, r, d){}
        double calcula() const override;
        void print() override;
    
};

#endif
