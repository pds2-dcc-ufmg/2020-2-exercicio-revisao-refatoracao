#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double taxa = 0.25
			double valor = peso * custoKG;
			valor += valor * taxa;
			
			return valor;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKG << endl
				<< "  Taxa adicional: " << taxa << endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif
