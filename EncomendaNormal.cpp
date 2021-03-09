#include <iostream>
#include <string>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"

void EncomendaNormal::print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			<< "  Custo por kg: " << custo_kg << endl
			<< "  Custo total: " << t << endl;

	}
  
  double EncomendaNormal::calcula(){
    double x = peso * custo_kg;

		return x;
  }

  EncomendaNormal::EncomendaNormal(double _peso, double _custo_kg, Cliente remetente, Cliente dest){
      peso = _peso;
      custo_kg = _custo_kg;
      remetente = _remetente;
      dest = _dest;
  }
