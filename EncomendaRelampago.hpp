#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
static constexpr double taxa_adicional = 0.25;

class EncomendaRelampago: public Encomenda{
	public:
		double calcula() override{
			this->_custo_total = this->_peso * this->_custo_kg * (1 + taxa_adicional);
			return this->_custo_total;
		} // calcula o valor do custo total da entrega e o retorna

		void print_parte_2() override{
			Encomenda::print_parte_1();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->_peso << endl
				<< "  Custo por kg: " << this->_custo_kg << endl
				<< "  Taxa adicional: " << taxa_adicional << endl
				<< "  Custo total: " << this->_custo_total << endl;
		} // imprime na tela informações sobre a encomenda cadastrada
};

#endif
