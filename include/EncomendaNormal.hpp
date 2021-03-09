#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
  private:
  
    static int numeroDeEncomendas;
    static double precoTotalDasEncomendas;

	public:
  
    static void relatorio();
    EncomendaNormal(double peso, double custoKg, Cliente* remetente, Cliente* destinatario);

    void print() override;

};

#endif