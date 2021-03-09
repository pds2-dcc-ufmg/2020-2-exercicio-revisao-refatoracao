#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

protected:

    double peso = 0.0;
    double custo_kg = 0.0;
    double custo_total = 0.0;
    Cliente remetente;
    Cliente destinatario;

    Encomenda(double peso, double custo, Cliente destinatario, Cliente remetente) : destinatario(destinatario), remetente(remetente) {
        this->peso = peso;
        this->custo_kg = custo;
    }

public:
    void print() {

        std::cout << "[Remetente]" << endl;
        remetente.print();
        std::cout << "[Destinatário]" << endl;
        destinatario.print();
    }

};

#endif