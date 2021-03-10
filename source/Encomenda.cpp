#include "../includes/Encomenda.hpp"

// será modificado (override) pelas subclasses
void Encomenda::print() {
  cout << "[Remetente]" << endl;
  (this->_sender).print();
  cout << "[Destinatário]" << endl;
  (this->_recipient).print();
}

double Encomenda::getTotal() {
  return this->_total;
}