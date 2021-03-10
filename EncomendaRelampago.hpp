#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda
{

	public:
	    
		double taxaAdicional_EncomendaRelampago = 0.25;
        	    
        	EncomendaRelampago(double _peso, double _custo_kg, Cliente _remetente, Cliente _destinatario):Encomenda(_peso, _custo_kg, _remetente, _destinatario)
        	{
	        	this->peso = _peso;
	        	this->custo_kg = _custo_kg;
	        	this->remetente = _remetente;
	        	this->destinatario = _destinatario;
	   	}
		
		double calcula()
		{
			double custo_total = peso * custo_kg;
			custo_total += custo_total * taxaAdicional_EncomendaRelampago;
			return custo_total;
		}

		void print()
		{
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->peso << endl
				  << "  Custo por kg: " << this->custo_kg << endl
				  << "  Taxa adicional: " << this->taxaAdicional_EncomendaRelampago << endl
				  << "  Custo total: " << this->custo_total << endl;
		}

};

#endif
