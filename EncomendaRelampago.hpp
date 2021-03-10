#include "Encomenda.hpp"
#include "Cliente.hpp"
#include <iostream>


class EncomendaRelampago: public Encomenda{
    private:
    double TAXARELAMPAGO = 0.25;
    
    public:
        EncomendaRelampago(double p, double c, Cliente r, Cliente d) : Encomenda{ p, c, r, d } {}
        double calcula() override;
        void print() override;
    
};
