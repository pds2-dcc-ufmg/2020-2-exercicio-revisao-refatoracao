#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{

public:

    Cliente destinatario;
    Cliente remetente;

    Encomenda(int, int, Cliente& _remetente, Cliente& _destinatario);

    int get_peso();
    int get_custo_por_kilo();
    double get_custo_total();
    void set_custo_total(double _custo_total);

void print(){

        cout << "[Remetente]" << endl;
        remetente.print();
        cout << "[Destinatário]" << endl;
        destinatario.print();
    }

private:

    int peso;
    int custo_por_kilo;
    double custo_total;


};

#endif
