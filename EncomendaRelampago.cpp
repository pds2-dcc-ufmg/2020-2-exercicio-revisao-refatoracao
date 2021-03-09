#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calculaPreco(){
    double precoTotal = 0;
    precoTotal = this->getPeso()* this->getCustoKg();
    precoTotal += precoTotal*this->taxaEncRelampago;
    return precoTotal;
}
void EncomendaRelampago::printEncomenda(){
    std::cout << "[Remetente]" << endl;
    this->getRemetente().printCliente();
    std::cout << "[Destinatário]" << endl;
    this->getDestinatario().printCliente();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << this->getPeso() << endl
    << "  Custo por kg: " << this->getCustoKg() << endl
    << "  Taxa adicional: " << this->taxaEncRelampago << endl
    << "  Custo total: " << this->getCustoTotal()  << endl;
}
