#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
	
		static constexpr double taxaRelampago = 0.25; // taxa adicional pela entrega mais rapida

	public:

		EncomendaRelampago(double weight, double costkg, Cliente sender, Cliente receiver) {
		
			this->PESO = weight;
			this->CUSTOkg = costkg;
			this->remetente = sender;
			this->dest = receiver;
		}

		double calcula() override {

			this->custoTotal = PESO * CUSTOkg;
			this->custoTotal += this->custoTotal * this->taxaRelampago; // aplicacao da taxa
			
			return this->custoTotal;
		}

		void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << taxaRelampago << endl
				<< "  Custo total: " << custoTotal << endl;
		}

};

#endif