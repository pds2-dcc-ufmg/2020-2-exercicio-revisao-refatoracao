#include "../includes/Encomenda.hpp"

Encomenda::Encomenda() = default; // construtor padrão

Encomenda::Encomenda(double weight, double costKg, Cliente sender, Cliente recipient) {
  this->_weight = weight;
  this->_costKg = costKg;
  this->_sender = sender;
  this->_recipient = recipient;
}

void Encomenda::print() {
  cout << "[Remetente]" << endl;
  (this->_sender).print();
  cout << "[Destinatário]" << endl;
  (this->_recipient).print();
}

double Encomenda::getTotal() {
  return this->_total;
}