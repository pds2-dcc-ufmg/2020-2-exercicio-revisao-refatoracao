#include "Encomenda.hpp"

void Encomenda::print(){
  
			std::cout << "[Remetente]" << std::endl;
			remetente.print();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.print();
}

double Encomenda::calcula(){
			return 0;	
}
