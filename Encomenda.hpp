#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda
{
    /**Variáveis que contém as características da encomenda como privadas**/
private:
    double PESO = 0.0;
    double CUSTOkg = 0.0;
    double Total = 0.0;

public:
    Cliente remetente;
    Cliente dest;

    double getTotal()
    {
        this->Total = calcula();
        return Total;
    }

    double getPESO()
    {
        return PESO;
    }

    void setPESO(double weith)
    {
        this->PESO = weith;
    }

    double getCUSTOkg()
    {
        return CUSTOkg;
    }

    void setCUSTOkg(double cost)
    {
        this->CUSTOkg = cost;
    }

    void print()
    {

        std::cout << "[Remetente]" << endl;
        remetente.print();
        std::cout << "[Destinatário]" << endl;
        dest.print();
    }

    virtual double calcula()
    {

        double x = PESO * CUSTOkg;

        return x;
    }
};

#endif
