#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

  private:
    double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente destinatario;
	public:
        void setPeso(double pPeso);
        double getPeso();
        void setCustoKg(double pCustoKg);
        double getCustoKg();
        void setTotal(double pTotal);
        double getTotal();
        void setRemetente(Cliente pRemetente);
        Cliente getRemetente();
        void setdestinatario(Cliente pDestinatario);
        Cliente getDestinatario();
		void print();

};

#endif
