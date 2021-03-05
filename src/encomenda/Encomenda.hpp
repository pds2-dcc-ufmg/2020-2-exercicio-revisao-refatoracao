#ifndef Encomenda_H
#define Encomenda_H

#include "../cliente/Cliente.hpp"
using namespace std;

class Encomenda {
  
  Encomenda();
  Encomenda(double peso, double custoKg, Cliente remetente, Cliente dest);
	
  public:
    void print();
    
    void setPeso(double peso);
    void setCustoKG(double custo);
    void setRemetente(Cliente remetente);
    void setDest(Cliente dest);

    double getPeso();
    double getCustoKG();
    Cliente getRemetente();
    Cliente getDest();

  private:
    double peso;
		double custoKg;
		double t;
		Cliente remetente;
		Cliente dest;
};

#endif