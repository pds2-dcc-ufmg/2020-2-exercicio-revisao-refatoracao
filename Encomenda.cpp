#include <iostream>
#include <string>
using namespace std;
#include "Encomenda.hpp"

Encomenda::Encomenda(int _custo, int _peso, Cliente& _remetente, Cliente& _destinatario){
   this->destinatario = _destinatario;
   this->remetente = _remetente;
   this->peso = _peso;
   this->custo_por_kilo = _custo;
}

int Encomenda::get_peso(){

return this->peso;

}

int Encomenda::get_custo_por_kilo(){

return this->custo_por_kilo;

}

void Encomenda::set_custo_total(double _custo_total){

this->custo_total = _custo_total;
    
}

double Encomenda::get_custo_total(){

return this->custo_total;

}

