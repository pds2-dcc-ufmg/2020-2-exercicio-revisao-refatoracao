#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda {
	public:
		double calcula() {
			return (peso * custoKg) * 1.25;
		}

		void print() {
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << custoTotal << endl;
		}
};

#endif