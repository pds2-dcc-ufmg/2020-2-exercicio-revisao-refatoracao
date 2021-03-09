#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda {
	private:
		double taxaAdicional = 0.25;

	public:
		double calcula() {
			return peso * custoKg * (1 + taxaAdicional);
		}

		void print() {
			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl
				 << "  Peso: " << peso << endl
				 << "  Custo por kg: " << custoKg << endl
				 << "  Taxa adicional: " << taxaAdicional << endl
				 << "  Custo total: " << custoTotal << endl;
		}
};

#endif