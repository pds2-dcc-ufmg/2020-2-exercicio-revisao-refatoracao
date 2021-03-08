#include <iostream>
#include <string>
#include "EncomendaNormal.hpp"
#include "Encomenda.hpp"

double EncomendaNormal::calcula(){

		double x = peso * custoKg;

		return x;
	};

void EncomendaNormal::print(){

		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << peso << endl
			        << "  Custo por kg: " << custoKg << endl
			        << "  Custo total: " << T << endl;

	};

void EncomendaNormal::cadastroNormal(double _peso, double _custoKg, Cliente _remetente, Cliente _destinatario){
    peso = _peso;
    custoKg = _custoKg;
    remetente = _remetente;
    destinatario = _destinatario;

};
