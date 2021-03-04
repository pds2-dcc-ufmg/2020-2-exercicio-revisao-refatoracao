
#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#include <iostream>

namespace Compra
{
    class Encomenda
    {

    public:
        Encomenda(double peso, double custo, Cliente remetente, Cliente destinatario) : PESO(peso), CUSTOkg(custo), REMETENTE(remetente), DESTINATARIO(destinatario){};
        Encomenda(){};
        std::string getTipo();
        double getPeso();
        double getCustokg();
        virtual double calcula() = 0;
        virtual void print();

    protected:
        const double TAXA = 0.25;
        std::string TIPO = "voce eh muito burro";
        double PESO = 0.0;
        double CUSTOkg = 0.0;
        double T = 0.0;
        Cliente REMETENTE;
        Cliente DESTINATARIO;
    };

    class EncomendaNormal : public Encomenda
    {
    public:
        EncomendaNormal(double peso, double custo, Cliente remetente, Cliente destinatario)
        {
            this->TIPO = "normal";
            this->PESO = peso;
            this->CUSTOkg = custo;
            this->REMETENTE = remetente;
            this->DESTINATARIO = destinatario;
        }
        EncomendaNormal(){};
        double calcula();
        void print() override;
    };

    class EncomendaRelampago : public Encomenda
    {
    public:
        EncomendaRelampago(double peso, double custo, Cliente remetente, Cliente destinatario)
        {
            this->TIPO = "relampago";
            this->PESO = peso;
            this->CUSTOkg = custo;
            this->REMETENTE = remetente;
            this->DESTINATARIO = destinatario;
        }
        EncomendaRelampago(){};
        double calcula();
        void print() override;
    };
}
#endif
