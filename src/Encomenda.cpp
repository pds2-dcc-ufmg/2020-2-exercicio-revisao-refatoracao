#include <iostream>
#include "Encomenda.hpp"

void Encomenda::imprimeEncomenda(){
    std::cout << "[Remetente]" << std::endl;
	this->_remetente.imprimirDadosCliente();
	std::cout << "[Destinatário]" << std::endl;
	this->_destinatario.imprimirDadosCliente();
}
