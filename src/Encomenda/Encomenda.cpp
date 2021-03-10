#include <iostream>
#include "Encomenda.hpp"

void Encomenda::Encomenda::print()
{
  std::cout << "[Remetente]" << std::endl;
  remetente.print();
  std::cout << "[Destinatário]" << std::endl;
  destinatario.print();
}