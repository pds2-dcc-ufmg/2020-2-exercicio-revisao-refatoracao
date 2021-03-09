#include <iostream>
#include "EncomendaNormal.hpp"


EncomendaNormal::EncomendaNormal() { // construtor de EncomendaNormal

    this->_peso = 0;
    this-> _custoKG = 0;
    this->_quantidadeEntregas = 0;

} // fim do construtor


EncomendaNormal::EncomendaNormal(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas) { // construtor de EncomendaNormal

    this->_peso = _peso;
    this-> _custoKG = _custoKG;
    this->_quantidadeEntregas = _quantidadeEntregas;
    this->remetente = _remetente;
    this->destinatario = _destinatario;

} // fim do construtor


double EncomendaNormal::calcula() const { // calcula o custo de entrega de uma encomenda normal

    double _custoEntrega  = _peso * _custoKG;
    return _custoEntrega;

} // fim do metodo calcula

void EncomendaNormal::print() const { // printa os valores armazenados referentes a uma encomenda normal

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << " Peso: " << _peso << std::endl;
    std::cout << " Custo por kg: " << _custoKG << std::endl;
    std::cout << " Custo total: " << _custoTotal << "\n" << std::endl;

} // fim do metodo print
