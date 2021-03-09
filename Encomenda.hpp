#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:

	    Encomenda();
		Cliente getRemetente();
		void setRemetente(Cliente remetente);
		Cliente getDestinatario();
		void setDestinatario(Cliente destinatario);
		double getPeso();
		void setPeso(double peso);
		double getCustoKg();
		void setCustoKg(double custoKg);
		double getCustoTotal();
		void setCustoTotal(double custoTotal);
		virtual void printEncomenda()=0;

    private:

        double peso;
		double custoKg;
		double custoTotal;
		Cliente remetente;
		Cliente destinatario;

};

#endif
