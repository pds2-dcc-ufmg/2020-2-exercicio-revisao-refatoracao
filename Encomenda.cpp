#include "Encomenda.hpp"
#include <iostream>

void Encomenda::print(){
	 std::cout << "[Remetente]" << std::endl;
	 this->remetente.print();
	 std::cout << "[Destinatário]" << std::endl;
	 this->destinatario.print();
}

Encomenda::Encomenda(double mass, double cost, Cliente rement, Cliente dest){
   this->peso = mass;
   this->custo_kg = cost;
   this->remetente = rement;
   this->destinatario = dest;
}

double Encomenda::calcula(){
  double valor = this->peso*this->custo_kg;
		
  return valor;
}
