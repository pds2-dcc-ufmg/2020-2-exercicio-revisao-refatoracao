#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Encomenda.hpp"

void Encomenda::print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}

Encomenda::Encomenda(double _peso, double _custo_kg, Cliente _remetente, cliente _dest){
      peso = _peso;
      custo_kg = _custo_kg;
      remetente = _remetente;
      dest = _dest;
    }