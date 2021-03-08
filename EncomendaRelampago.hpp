#ifndef R_TAXA
#define R_TAXA 0.25
#endif

#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		
		/**
		* Calcula o preço total a partir do custo/kg do peso e da R_TAXA extra da encomenda relâmpago
		*/
		double CalcularTotal(){

			double x = peso * custoKg;
			x += x * R_TAXA;
			
			return x;
		}

		/**
		* Printa na tela as informações da encomenda relampago
		*/
		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
					  << "  Custo por kg: " << custoKg << endl
					  << "  Taxa adicional: " << R_TAXA << endl
					  << "  Custo total: " << custoTotal << endl << endl;

		}

		/**
		* Construtor de encomenda relâmpago usando parametros.
		*/
		EncomendaRelampago(double ePeso, double eCUSTOkg, Cliente eRemetente, Cliente eDest)
		: Encomenda(ePeso,eCUSTOkg,eRemetente,eDest){
			this->custoTotal = CalcularTotal();
		}

};

#endif
