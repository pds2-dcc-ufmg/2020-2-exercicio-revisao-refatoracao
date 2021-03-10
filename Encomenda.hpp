#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#include <iostream>


class Encomenda{

    protected:

        double peso = 0.0;
        double custoKg = 0.0;
        double t = 0.0;
    
    public:
        Cliente remetente;
        Cliente dest;
    
        Encomenda(double p, double c, Cliente r, Cliente d): peso(p), custoKg(c), remetente(r), dest(d){}

            
        virtual void print();
        virtual double calcula();
            
        double getPeso();
        void setPeso(double p);
        double getCustoKg();
        void setCustoKg(double c);
        double getT();
        void setT(double tt);

};

#endif
