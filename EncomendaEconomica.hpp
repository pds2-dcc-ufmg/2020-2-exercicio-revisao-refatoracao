#ifndef EncomendaEconomica_H
#define EncomendaEconomica_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaEconomica: public Encomenda{

	public:
    EncomendaEconomica():Encomenda(){};

    EncomendaEconomica(double peso, double custoKg, Cliente remetente, Cliente destinatario):Encomenda(peso, custoKg, remetente, destinatario){}; 

    void printDados();
	  double calcularPrecoEnvio();
    double getTaxaDesconto();
	  void setTaxaDesconto(double taxa);

  private:
  double _taxaDesconto = 0.2;
};

#endif