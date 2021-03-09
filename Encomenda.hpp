#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	private:
	
		double peso = 0.0;
		double custo_kg = 0.0;
		double custo_total = 0.0;
		Cliente remetente;
		Cliente dest;
	

	public:

		double getPeso();
		void setPeso(double new_peso);
	
		double getCustoKg();
		void setCustoKg(double new_custo_kg);
	
		double getCustoTotal(double taxa);
	
		Cliente getRemetente();
		void setRemetente(Cliente new_remetente);
	
		Cliente getDest();
		void setDest(Cliente new_dest);
			
		void print();

};

#endif
