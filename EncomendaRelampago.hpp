#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	public:
		// Calcula o custo total de uma encomenda relâmpago.
		double calculaValor() override {
			double x = this->_peso * this->_custoKg;
			x += x * this->_taxa;
			return x;
		}
		// Imprime na tela as informações do destinatário, do remetente e da encomenda.
		void print() {
			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->_peso << endl
				  << "  Custo por kg: " << this->_custoKg << endl
				  << "  Taxa adicional: " << this->_taxa << endl
				  << "  Custo total: " << this->_total << endl;
		}
	
	private:
		// Valor constante da taxa adicional;
		static constexpr double taxa = 0.25;
};

#endif
