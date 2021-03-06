#ifndef Encomenda_H
#define Encomenda_H

#include "../cliente/Cliente.hpp"
using namespace std;

class Encomenda {
	
  public:
    Encomenda();
    Encomenda(double peso, double custoKg, Cliente remetente, Cliente dest);
    
    void print();
    
    void setPeso(double peso);
    void setCustoKG(double custo);
    void setRemetente(Cliente remetente);
    void setDest(Cliente dest);
    void setT(double t);

    double getPeso();
    double getCustoKG();
    double getT();
    Cliente getRemetente();
    Cliente getDest();

  private:
    double peso;
    double custoKg;
    double t = 0.0;
    Cliente remetente;
    Cliente dest;
};

#endif
