#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

			double x = peso * custoKg;
			x += x * constante;
			
			return x;
}

void EncomendaRelampago::print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << std::endl
				<< "  Taxa adicional: " << constante << std::endl
				<< "  Custo total: " << custoTotal << endl;

}
