#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago (double peso, double kg, Cliente remet, Cliente destinatario):
			Encomenda (peso, kg, remet, destinatario) {}

		double calcula(){

			double x = getPeso() * getKg();
			x += x * 0.25;

			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getKg() << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << getTotal() << endl;

		}

};

#endif
