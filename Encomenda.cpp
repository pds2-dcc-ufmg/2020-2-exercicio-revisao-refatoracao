#include<iostream>
#include"Encomenda.hpp"

using namespace std;

Encomenda::Encomenda(double weight, double cost,Cliente sender, Cliente receiver){
    _weight = weight;
    _cost = cost;
    _sender = new Cliente(sender.get_name(), sender.get_adress(), sender.get_zip_code(), sender.get_city(), sender.get_state());
    _receiver = new Cliente(receiver.get_name(), receiver.get_adress(), receiver.get_zip_code(), receiver.get_city(), receiver.get_state());
}
		
Encomenda:: ~Encomenda(){
    delete _sender;
    delete _receiver;
}

double Encomenda:: get_weight(){
    return _weight;
}

double Encomenda:: get_cost(){
    return _cost;
}
		
void Encomenda::set_total_cost(double total_cost){
    _total_cost = total_cost;
}

double Encomenda:: get_total_cost(){
    return _total_cost;
}

void Encomenda::print(){

    std::cout << "[Remetente]" << endl;
    _sender->print();
    std::cout << "[Destinatário]" << endl;
    _receiver->print();
    
}
