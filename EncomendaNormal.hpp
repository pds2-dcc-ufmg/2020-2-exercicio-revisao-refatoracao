#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		/**
		* Calcula o preço total a partir do custo/kg e do peso da encomenda normal
		*/
		double CalcularTotal(){

			double x = peso * custoKg;
			return x;
		}

		/**
		* Printa na tela as informações da encomenda normal
		*/
		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << peso << endl
					  << "  Custo por kg: " << custoKg << endl
					  << "  Custo total: " << custoTotal << endl << endl;

		}

		/**
		* Construtor de encomenda normal usando parametros.
		*/
		EncomendaNormal(double ePeso, double eCUSTOkg, Cliente eRemetente, Cliente eDest)
		: Encomenda(ePeso,eCUSTOkg,eRemetente,eDest){
			this->custoTotal = CalcularTotal();
			//countN++;
		}

};

#endif
