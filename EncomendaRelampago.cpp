#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

			double x = _peso * _custoKg;
			x += x * 0.25;
			
			return x;
}

void EncomendaRelampago::print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << _peso << std::endl
				<< "  Custo por kg: " << _custoKg << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << _total << std::endl;

}
