#ifndef ENCOMENDANORMAL_H
#define ENCOMENDANORMAL_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{
	public:
		double calculaCustoTotal(){
			double custoTotal = getPeso() * getCustoKg();
				return custoTotal;
		}

    		EncomendaNormal(double peso, double custoKg, Cliente& _remetente, Cliente& _destinatario):Encomenda(peso, custoKg, _remetente, _destinatario){};

	    	void print(){
	      		Encomenda::print();
	      		std::cout << "[Encomenda Normal]" << endl;
	      		std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKg() << endl
				<< "  Custo total: " << getCustoTotal() << endl;
		}	
};

#endif
