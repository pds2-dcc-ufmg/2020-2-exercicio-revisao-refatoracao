#include "../includes/EncomendaNormal.hpp"

EncomendaNormal::EncomendaNormal(double weight, double costKg, Cliente sender, Cliente recipient) {
    this->_weight = weight;
    this->_costKg = costKg;
    this->_sender = sender;
    this->_recipient = recipient;

    double x = this->_weight * this->_costKg;
	this->_total = x;
}

void EncomendaNormal::print() {
    Encomenda::print();
    cout << "[Encomenda Normal]" << endl;
    cout << "  Peso: " << this->_weight << endl
        << "  Custo por kg: " << this->_costKg << endl
        << "  Custo total: " << this->_total << endl;
}