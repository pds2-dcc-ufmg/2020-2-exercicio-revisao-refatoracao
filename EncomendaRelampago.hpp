#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda{

public:

    EncomendaRelampago(int x, int y, Cliente& z, Cliente& w) : Encomenda(x, y, z, w) {};

    const double TAXA_ADICIONAL = 0.25;

    double calcular (){

        double valor = get_peso() * get_custo_por_kilo() * (1 + TAXA_ADICIONAL);
        set_custo_total(valor);
        return valor;
    }

    void print(){

        Encomenda::print();
        cout << "[Encomenda Relâmpago]" << endl;
        cout << "  Peso: " << get_peso() << endl
        << "  Custo por kg: " << get_custo_por_kilo() << endl
        << "  Taxa adicional: " << TAXA_ADICIONAL << endl
        << "  Custo total: " << get_custo_total() << endl;

    }

};

#endif
