#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	private: float adcional = 0.25;

	public:

		double getTotal(){
			total =peso * custoKg * adcional; 
			return total;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << adcional << endl
				<< "  Custo total: " << total << endl;

		}

};

#endif