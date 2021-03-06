#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "../Encomenda.hpp"
#include "../../cliente/Cliente.hpp"

using namespace std;

class EncomendaNormal: public Encomenda {

	public:
    EncomendaNormal():Encomenda(){};
    EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente dest):Encomenda(peso, custoKg, remetente, dest){};
    double calcula();
    void print();

};

#endif