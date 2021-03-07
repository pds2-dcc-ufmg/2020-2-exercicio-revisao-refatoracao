#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#define _TAXA_ADICIONAL_ENCOMENDA_RELAMPAGO 0.25

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	
	public:
		EncomendaRelampago(double peso, double custokg, Cliente remetente, Cliente destinatario): Encomenda(peso, custokg, remetente, destinatario){}
		EncomendaRelampago(){}
		double calcula() const override{

			double valor_calculado = _peso * _custokg;
			valor_calculado += valor_calculado * _TAXA_ADICIONAL_ENCOMENDA_RELAMPAGO;
			
			return valor_calculado;
		}

		void print() const override{
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custokg << endl
				<< "  Taxa adicional: " << _TAXA_ADICIONAL_ENCOMENDA_RELAMPAGO << endl
				<< "  Custo total: " << _custo_total << endl
				<< endl;
		}

};

#endif