#include "EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double peso, double custokg, Cliente remetente, Cliente destinatario){
	this->setPeso(peso);
	this->setCustoKg(custokg);
	this->setRemetente(remetente);
	this->setDestinatario(destinatario);
}

double EncomendaNormal::calcula() {
	double x = getPeso() * getCustoKg();
    return x;
}

void EncomendaNormal::print() {
	Encomenda::print();
	std::cout << "[Encomenda Normal]" 	 			   << endl;
	std::cout << "  Peso: " 		<< getPeso() 	   << endl
			  << "  Custo por kg: " << getCustoKg()    << endl
			  << "  Custo total: " 	<< getCustoTotal() << endl;
}