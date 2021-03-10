#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal: public Encomenda{

    public:
        EncomendaNormal(double p, double c, Cliente r, Cliente d) : Encomenda{ p, c, r, d } {}
        virtual double calcula() override;
        void print() override;
};
