#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculaPreco(){//Função que calcula o preço da encomenda.

			double PRECO = PESO * CUSTOkg;
			PRECO += PRECO * 0.25;
			
			return PRECO;
		}

		void print(){//Função para imprimir os dados da encomenda feita.

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << TOTAL << endl;

		}

};

#endif
