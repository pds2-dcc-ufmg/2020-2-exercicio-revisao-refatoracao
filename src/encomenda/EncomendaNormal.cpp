#include <iostream>
#include <string>
#include "../../include/encomenda/EncomendaNormal.hpp"

double EncomendaNormal::calculaCusto(){
	return getPesoEncomenda() * getCustoPorKg();
}
void EncomendaNormal::printEncomenda(){
	Encomenda::printEncomenda();
	std::cout << "[Encomenda Normal]" << std::endl;
	std::cout << "  Peso: " << getPesoEncomenda() << std::endl
		<< "  Custo por kg: " << getCustoPorKg() << std::endl
		<< "  Custo total: " << getCustoTotal() << std::endl;
}
EncomendaNormal::EncomendaNormal(double pesoEncomenda, double custoPorKg, Cliente remetente, Cliente destinatario){
			this->setPesoEncomenda(pesoEncomenda);
			this->setCustoPorKg(custoPorKg);
			this->setRemetente(remetente);
			this->setDestinatario(destinatario);
}
