#include <iostream>
#include "EncomendaRelampago.hpp"

EncomendaRelampago::EncomendaRelampago() { // construtor de EncomendaRelampago

    this->_peso = 0;
    this-> _custoKG = 0;
    this->_quantidadeEntregas = 0;

} // fim do construtor


EncomendaRelampago::EncomendaRelampago(int _peso, int _custoKG, Cliente _remetente, Cliente _destinatario, int _quantidadeEntregas) { // construtor de EncomendaRelampago

    this->_peso = _peso;
    this->_custoKG = _custoKG;
    this->_quantidadeEntregas = _quantidadeEntregas;
    this->remetente = _remetente;
    this->destinatario = _destinatario;

} // fim do construtor

double EncomendaRelampago::calcula() const { // calcula o custo de entrega de uma encomenda relampago

    double _custoEntrega = _peso * _custoKG;
    _custoEntrega += _custoEntrega * TAXA_ENTREGA_RELAMPAGO;
    return _custoEntrega;

} // fim do metodo calcula

void EncomendaRelampago::print() const { // printa os valores armazenados referentes a uma encomenda relampago

    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << " Peso: " << _peso << std::endl;
    std::cout << " Custo por kg: " << _custoKG << std::endl;
    std::cout << " Taxa adicional: " << TAXA_ENTREGA_RELAMPAGO << std::endl;
    std::cout << " Custo total: " << _custoTotal << "\n" << std::endl;

} // fim do metodo print
