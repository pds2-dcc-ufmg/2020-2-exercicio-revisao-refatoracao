#include "EncomendaRelampago.hpp"        
#include "Encomenda.hpp"
#include "Cliente.hpp"

EncomendaRelampago::EncomendaRelampago(double _peso, double _CustoKg){
    this->peso = _peso;
    this->CustoKg = _CustoKg;
}

double EncomendaRelampago::calcula(){
    double totalRelampago = this->getPeso() * this->getCustoKg();
    totalRelampago += totalRelampago * 0.25;
    return totalRelampago;
}

void Encomenda::print(){

    std::cout   << "[Encomenda Relâmpago]" << std::endl;
	std::cout   << "  Peso: " << this->getPeso() << std::endl
			    << "  Custo por kg: " << this->getCustoKg() << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << this->getTotal() << std::endl;
}