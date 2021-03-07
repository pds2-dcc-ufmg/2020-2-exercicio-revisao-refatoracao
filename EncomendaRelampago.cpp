#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago(double peso, double custokg, Cliente remetente, Cliente destinatario){
	this->setPeso(peso);
	this->setCustoKg(custokg);
	this->setRemetente(remetente);
	this->setDestinatario(destinatario);
}


double EncomendaRelampago::calcula() {
	double x = getPeso() * getCustoKg();
	x += x * this->taxa_adicional;			
	return x;
}

void EncomendaRelampago::print() {
	Encomenda::print();
	std::cout << "[Encomenda Relâmpago]" 		   	    	  << endl;
	std::cout << "  Peso: " 		  << getPeso() 	    	  << endl
			  << "  Custo por kg: "   << getCustoKg()   	  << endl
			  << "  Taxa adicional: " << this->taxa_adicional << endl
			  << "  Custo total: " 	  << getCustoTotal() 	  << endl;
}