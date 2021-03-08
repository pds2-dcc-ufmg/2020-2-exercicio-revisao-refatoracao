#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custoKG;
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoKG << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << T << std::endl;

		}

};

#endif