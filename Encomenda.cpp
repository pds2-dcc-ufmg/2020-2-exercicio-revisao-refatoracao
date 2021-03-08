#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

void Encomenda::print(){

  std::cout << "[Remetente]" << endl;
  remetente.print();
  std::cout << "[Destinatário]" << endl;
  dest.print();
}
