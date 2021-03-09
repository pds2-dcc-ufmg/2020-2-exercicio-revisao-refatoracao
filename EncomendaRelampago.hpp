#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
		using Encomenda::Encomenda;


		double calculaPreco(){

			double preco = this->peso * this->custoKg;
			preco += preco * _TAXA;
			
			return preco;
		}

		void printDados(){
			Encomenda::printDados();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << _TAXA << endl
				<< "  Custo total: " << custoTotal << endl << endl;
		}

	private:
		static double constexpr _TAXA = 0.25;
		
};

#endif