#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

        EncomendaNormal(Cliente remetente,Cliente destinatario,double peso,double custoPorkg);

        double calcula();//Calcula o custo da encomenda

        void print();
};

#endif
