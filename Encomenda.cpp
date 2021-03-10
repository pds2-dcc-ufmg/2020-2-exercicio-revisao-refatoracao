#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std; 

void Encomenda::registerEncomenda( double peso, double custo, Cliente remetente, Cliente dest){
    
    this->peso = peso;
    this->custo = custo; 
    this->remetente = remetente;
    this->dest = dest;

}  