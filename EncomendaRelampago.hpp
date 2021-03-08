#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		const double taxa_relampago = 0.25;

		double calcula(){

			double x = peso * custoKG;
			x += x * taxa_relampago;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoKG << std::endl
				<< "  Taxa adicional: " << taxa_relampago << std::endl
				<< "  Custo total: " << T << std::endl;

		}

};

#endif