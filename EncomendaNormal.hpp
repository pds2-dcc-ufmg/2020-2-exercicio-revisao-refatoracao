#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

    public:
        EncomendaNormal(double p, double c, Cliente r, Cliente d): Encomenda(p, c, r, d){}
        virtual double calcula() const override;
        void print() override;
};
            
#endif
