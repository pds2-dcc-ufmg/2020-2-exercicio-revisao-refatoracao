#include <iostream>
#include <string>
#include "Encomenda.hpp"

void Encomenda::print(){

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_dest.print();
  
}
