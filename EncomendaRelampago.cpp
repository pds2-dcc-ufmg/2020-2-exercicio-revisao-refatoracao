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
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoKg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << _total << endl;

}
