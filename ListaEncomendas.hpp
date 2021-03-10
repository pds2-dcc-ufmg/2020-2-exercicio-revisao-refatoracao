#ifndef LISTAENCOMENDAS_HPP
#define LISTAENCOMENDAS_HPP

#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"

using namespace std;

class ListaEncomendas
{
    private:
        vector<EncomendaNormal> encomendasNormais;
        vector<EncomendaRelampago> encomendasRelampago;

        double custoNormal;
        double custoRelampago;

    public:

        ListaEncomendas();
        ~ListaEncomendas();

        void printRelatorio();

        void push_back(EncomendaNormal encomendaNormal);
        void push_back(EncomendaRelampago encomendaRelampago);

        double getCustoNormal();
        double getCustoRelampago();
};

#endif