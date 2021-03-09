#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"

double EncomendaNormal::calculaPreco(){
    double preco = 0;
    preco = this->getPeso() * this->getCustoKg();
    return preco;
}
void EncomendaNormal::printEncomenda(){
    std::cout << "[Remetente]" << endl;
    this->getRemetente().printCliente();
    std::cout << "[Destinatário]" << endl;
    this->getDestinatario().printCliente();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << this->getPeso() << endl
    << "  Custo por kg: " << this->getCustoKg() << endl
    << "  Custo total: " << this->getCustoTotal() << endl;
}
