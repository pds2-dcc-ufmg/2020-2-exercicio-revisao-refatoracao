#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::printRemDes(){
	std::cout << "[Remetente]" << std::endl;
	Remetente.print();
	std::cout << "[Destinatário]" << std::endl;
	Destinatario.print();
}