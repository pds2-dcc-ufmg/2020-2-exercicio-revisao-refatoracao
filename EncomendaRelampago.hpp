#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

  EncomendaRelampago():Encomenda(){};

  EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario):Encomenda(peso, custoKg, remetente, destinatario){}; 

		void printDados();
	  double calcularPrecoEnvio();
    double getTaxaEncomendaRelampago();
    void setTaxaEncomendaRelampago(double taxa);

  private:
  double _taxaEncomendaRelampago = 0.25;

};

#endif