#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calculaPreco(){

			double taxaTotal = 1.25;
			double preco = peso * custoKg * taxaTotal;

			return preco;
		}

		void printEncomenda(){ // imprime na tela os dados de uma encomenda cadastrada

			doube taxaParcial = 0.25;

			Encomenda::printEncomenda();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKg << endl
				<< "  Taxa adicional: " << taxaParcial << endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif
