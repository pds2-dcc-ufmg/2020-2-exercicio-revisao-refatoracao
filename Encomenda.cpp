
#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

const int taxa = 0.25;

namespace Compra
{
    class Encomenda
    {

    public:
        double getPeso();
        double getCustokg();
        virtual double calcula() = 0;
        virtual void print();

    private:
        double PESO = 0.0;
        double CUSTOkg = 0.0;
        double T = 0.0;
        Cliente remetente;
        Cliente destinatario;
    };

    class EncomendaNormal : public Encomenda
    {

    public:
        double calcula();
        void print() overrride;
    };

    class EncomendaRelampago : public Encomenda
    {

    public:
        double calcula();
        void print();
    };
}
#endif
