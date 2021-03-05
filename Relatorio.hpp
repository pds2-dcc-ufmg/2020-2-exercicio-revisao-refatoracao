#ifndef Relatorio_H
#define Relatorio_H
#include <iostream>
#include "Cliente.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include <vector>
using namespace std;

class Relatorio{
    public:
        /*  Construtor  */
        Relatorio(int en, int er, Cliente *cli, EncomendaNormal *n, EncomendaRelampago *r):
            nEncn(en), nEncr(er), custN(0), custR(0), clientes(cli), encN(n), encR(r) {};

        /*  Mostra o remetente, destinatário, tipo e dados de todas encomendas  */
        void printTodas();

        /*  Mostra o resumo das encomendas normais: quantidade e valor totais  */
        void printN();

        /*  Mostra o resumo das encomendas relâmpago: quantidade e valor totais  */
        void printR();

    private:

        int nEncn =0;
        int nEncr = 0;
        double custN = 0;
        double custR = 0;
        Cliente *clientes;
        EncomendaNormal *encN;
	    EncomendaRelampago *encR;
};

#endif