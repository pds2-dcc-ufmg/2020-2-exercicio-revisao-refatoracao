#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {

	public:

		EncomendaNormal(double weight, double costkg, Cliente sender, Cliente receiver) {

			this->PESO = weight;
			this->CUSTOkg = costkg;
			this->remetente = sender;
			this->dest = receiver;
		}
		
		double calcula() override {

			this->custoTotal = PESO * CUSTOkg;

			return this->custoTotal;
		}

		void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Custo total: " << custoTotal << endl;
		}

};

#endif