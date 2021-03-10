#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	
protected:

	double peso = 0.0;
	double custokg = 0.0;
	double total = 0.0;
	Cliente remetente;
	Cliente destinatario;
			

	
public:

		 
	 void print();
		 
		
	double getPeso();
	double getCusto();
	double getTotal();
	Cliente getRemetente();
	Cliente getDestinatario();

	void setPeso(double NovoPeso);
	void setCusto(double NovoCusto);
	void setTotal(double NovoT);
	void setRemetente(Cliente NovoRemetente);
	void setDestinatario(Cliente NovoDest);









};

#endif