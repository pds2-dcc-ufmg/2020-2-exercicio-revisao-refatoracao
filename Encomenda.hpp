#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
    void setDadosEncomenda(Cliente _remetente,Cliente _destinatario,double _peso,double _custoKg,bool _relampago);
    Cliente getRemetente();
    Cliente getDestinatario();
    double getPeso();
    double getCustoKg();
    double calculaTotal();
    bool getRelampago();
    void printDadosEncomenda();
		
    private:

      double peso = 0.0;
		  double custoKg = 0.0;
		  double taxa = 0.25;
      bool relampago = false; // booleano para indicar se é relampago ou não
		  Cliente remetente;
		  Cliente dest;

};

#endif
