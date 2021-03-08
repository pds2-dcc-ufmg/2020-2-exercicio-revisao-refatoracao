#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

  protected:
    double peso = 0.0;
    double custo_kg = 0.0;
    double T = 0.0;
    Cliente remetente;
    Cliente destinatario;

  
   public:

    Encomenda(double mass, double cost, Cliente rement, Cliente dest);

    double get_peso(){return this->peso;}
    double get_custo_kg(){return this->custo_kg;}
    double get_T(){return this->T;}
    Cliente get_remetente(){return this->remetente;}
    Cliente get_destinatario(){return this->destinatario;}

    void set_peso(double weight){this->peso = weight;}
    void set_custo_kg(double cost){this->custo_kg = cost;}
    void set_T(double t){this->T = t;}
    void set_remetente(Cliente rement){this->remetente = rement;}
    void set_destinatario(Cliente dest){this->destinatario = dest;}
			
    virtual void print();
    virtual double calcula();
};

#endif
