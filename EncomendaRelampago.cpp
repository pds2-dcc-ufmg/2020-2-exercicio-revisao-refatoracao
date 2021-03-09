#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

double x = peso * custo_kg;
x += x * 0.25;
			
return x;
}

void EncomendaRelampago::print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custo_kg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << t << endl;

		}

EncomendaRelampago::EncomendaRelampago(double _peso, double _custo_kg, Cliente remetente, Cliente dest){
      peso = _peso;
      custo_kg = _custo_kg;
      remetente = _remetente;
      dest = _dest;
  }