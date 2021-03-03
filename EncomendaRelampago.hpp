#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda
{

private:
    /**Constante da taxa **/
    int TaxaAdicional = 0.25;

public:
    /**Preço total da encomenda relâmpago**/
    double calcula() override
    {

        double x = getPESO() * getCUSTOkg();
        x += x * TaxaAdicional;

        return x;
    }

    void printRelampago()
    {

        Encomenda::print();
        std::cout << "[Encomenda Relâmpago]" << endl;
        std::cout << "  Peso: " << getPESO() << endl
                  << "  Custo por kg: " << getCUSTOkg() << endl
                  << "  Taxa adicional: " << 0.25 << endl
                  << "  Custo total: " << getTotal() << endl;
    }
};

#endif
