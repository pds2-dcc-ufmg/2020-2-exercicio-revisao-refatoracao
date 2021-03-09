#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago(double weight, double costKg, Cliente sender, Cliente recipient) {
    this->_weight = weight;
    this->_costKg = costKg;
    this->_sender = sender;
    this->_recipient = recipient;

    double x = this->_weight * this->_costKg;
    x += x * 0.25;
    this->_total = x;
}

void EncomendaRelampago::print() {
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << this->_weight << endl
        << "  Custo por kg: " << this->_costKg << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << this->_total << endl;
}