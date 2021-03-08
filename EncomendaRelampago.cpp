#include <iostream>
#include <string>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula(){

  double taxaAdicional = 0.25;
	double x = peso * custoKg;
	
  return x += x * taxaAdicional;
  };

  void EncomendaRelampago::print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				        << "  Custo por kg: " << custoKg << endl
				        << "  Taxa adicional: " << 0.25 << endl
				        << "  Custo total: " << T << endl;

		};

  void EncomendaRelampago::cadastroRelampago(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario){
    peso = _peso;
    custoKg = _custoKg;
    remetente = _remetente;
    destinatario = _destinatario;
    
};