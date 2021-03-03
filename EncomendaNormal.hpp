#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda
{

public:
    void printNormal()
    {

        Encomenda::print();
        std::cout << "[Encomenda Normal]" << endl;
        std::cout << "  Peso: " << getPESO() << endl
                  << "  Custo por kg: " << getCUSTOkg() << endl
                  << "  Custo total: " << getTotal() << endl;
    }
};

#endif
