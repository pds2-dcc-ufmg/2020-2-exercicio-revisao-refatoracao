#include "EncomendaRelampago.hpp"
#include <iostream>


EncomendaRelampago::EncomendaRelampago(double mass, double cost, Cliente rement, Cliente dest):Encomenda(mass, cost, rement, dest){};

double EncomendaRelampago::calcula(){
			
			return Encomenda::calcula()*taxa;
}

void EncomendaRelampago::print(){

			Encomenda::print();
  
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->peso << std::endl
		  << "  Custo por kg: " << this->custo_kg << std::endl
			<< "  Taxa adicional: " << this->taxa << std::endl
			<< "  Custo total: " << this->T << std::endl;

}
