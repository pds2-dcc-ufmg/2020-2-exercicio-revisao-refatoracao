#include<iostream>
#include"EncomendaNormal.hpp"
using namespace std;

void EncomendaNormal::calculate() {
    double aux = _cost * _weight;
    this -> set_total_cost(aux);
}

void EncomendaNormal::print() {

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << _weight << endl
        << "  Custo por kg: " << _cost << endl
        << "  Custo total: " << _total_cost << endl;

}

int EncomendaNormal::get_quantity() {
    return _normal_quantity;
}

int EncomendaNormal::_normal_quantity=0;