#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	
	private:
	
		double _taxaAdicional = 0.25;// valor decimal da taxa extra para entregas relampago

	public:

		double calculaValor(){

			double valor = _peso * _custoKg;
			valor = valor * (1.0 + _taxaAdicional);
			
			return valor;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoKg << endl
				<< "  Taxa adicional: " << _taxaAdicional << endl
				<< "  Custo total: " << std::to_string(this->calculaValor()) << endl;

		}

};

#endif
