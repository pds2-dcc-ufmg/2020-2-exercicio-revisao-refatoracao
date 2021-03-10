#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
		
		double taxa = 0.25;
	
	public:

		EncomendaRelampago(double _peso,double _custoKg) : Encomenda(_peso,_custoKg){};

		double calcularValor() override{

			double valor = peso * custoKg;
			valor += valor * taxa;
			
			return valor;
		}

		void print() override{

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif