#include <iostream>
#include <string>
#include "Encomenda.hpp"

Encomenda::Encomenda(){
    this->peso = 0.0;
    this->custoKg = 0.0;
    this->custoTotal = 0.0;
}

Encomenda::print(){
      std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
}
