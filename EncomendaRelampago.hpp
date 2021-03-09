#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custoKg;
			x += x * constante;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << custoTotal << endl;

		}
	
	private:
		double constante = 0.25;
};

#endif
