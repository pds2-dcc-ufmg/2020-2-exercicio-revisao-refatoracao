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

		double getPeso();  //retorna o  peso
		void setPeso(double new_peso);  //altera o peso
	
		double getCustoKg();  //retorna o custo por kg
		void setCustoKg(double new_custo_kg);  //altera o custo por kg
	
		double getCustoTotal(double taxa);  //retorna o custo total
	
		Cliente getRemetente();  //retorna o remetente
		void setRemetente(Cliente new_remetente);  //altera o remetente
	
		Cliente getDest();  //retorna o destinatario
		void setDest(Cliente new_dest);  //altera o destinatario
			
		void print();  //imprime na tela os dados de uma encomenda

};

#endif
