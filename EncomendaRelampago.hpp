#ifndef ENCOMENDARELAMPAGO_H
#define ENCOMENDARELAMPAGO_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
#include <iostream>
#define TAXA_ADICIONAL 0.25

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago(double peso, double custoPorKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoPorKg, remetente, destinatario) {}

		double calculaValorFinal(){

			double valorTotal = Encomenda::calculaValorFinal();
			valorTotal += valorTotal * TAXA_ADICIONAL;
			return valorTotal;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << getPeso() << std::endl
				<< "  Custo por kg: " << getCustoPorKg() << std::endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << std::endl
				<< "  Custo total: " << calculaValorFinal() << std::endl;

		}

};

#endif