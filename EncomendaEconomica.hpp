#ifndef EncomendaEconomica_H
#define EncomendaEconomica_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaEconomica: public Encomenda{

	public:
    double descontoEncomendaEconomica = 0.2;
		double calcula(){
			double x = peso * custoKg;
			x -= x * descontoEncomendaEconomica;
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Economica]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Desconto Encomenda Economica: " << descontoEncomendaEconomica << endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif