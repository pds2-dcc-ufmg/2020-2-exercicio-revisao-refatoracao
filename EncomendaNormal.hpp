#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda
{
	public:
	    
		EncomendaNormal(double _peso, double _custo_kg, Cliente _remetente, Cliente _destinatario):Encomenda(_peso, _custo_kg, _remetente, _destinatario)
	    	{
	        	this->peso = _peso;
	        	this->custo_kg = _custo_kg;
	        	this->remetente = _remetente;
	        	this->destinatario = _destinatario;
	    	}
	    
	    	double calcula()
	    	{
		    	double custo_total = peso * custo_kg;
		    	return custo_total;
	    	}

	    	void print()
	    	{
		    	Encomenda::print();
		    	cout << "[Encomenda Normal]" << endl;
		    	cout << "  Peso: " << this->peso << endl
			     << "  Custo por kg: " << this->custo_kg << endl
			     << "  Custo total: " << this->custo_total << endl;
	    	}

};

#endif
