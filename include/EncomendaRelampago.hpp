#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

    static int numeroDeEncomendas;
    static double precoTotalDasEncomendas;
    
  public:

    static void relatorio();
    EncomendaRelampago(double peso, double custoKg, Cliente* remetente, Cliente* destinatario);

		void print() override;

};

#endif