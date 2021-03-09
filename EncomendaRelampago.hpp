#ifndef ENCOMENDARELAMPAGO_H
#define ENCOMENDARELAMPAGO_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
const double kTaxaAdicional = 0.25;

class EncomendaRelampago: public Encomenda{
	public:
		double calculaCustoTotal(){
			double custoTotal = getPeso() * getCustoKg();
			custoTotal += custoTotal * kTaxaAdicional;
			return custoTotal;
		}

		EncomendaRelampago(double peso, double custoKg, Cliente& _remetente, Cliente& _destinatario):Encomenda(peso, custoKg, _remetente, _destinatario){};

		void print(){
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKg() << endl
				<< "  Taxa adicional: " << kTaxaAdicional << endl
				<< "  Custo total: " << getCustoTotal() << endl;
		}
};

#endif
