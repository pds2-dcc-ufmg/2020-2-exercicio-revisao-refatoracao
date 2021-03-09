#include "Encomenda.hpp"

void Encomenda::print_remetente_destinatario(){
    std::cout << "[Remetente]" << std::endl;
	_remetente.print();
    std::cout << "[Destinatário]" << std::endl;
    _destinatario.print();
}