#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaRelampago: public Encomenda{
    private:
    int TAXARELAMPAGO = 0.25;
    
	public:
        double calcula() override;
        void print() override;
    
};

#endif
