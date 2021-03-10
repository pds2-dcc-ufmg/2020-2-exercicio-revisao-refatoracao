#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

#define TAXA_ADICIONAL 0.25

using namespace std;

class EncomendaRelampago: public Encomenda {

	private:

		void _print() override {
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoPorkg << endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << endl
				<< "  Custo total: " << custoTotal << endl;
		}

		void _calculaCustoTotal() override {
			double valor = peso * custoPorkg;
			valor += valor * TAXA_ADICIONAL;
			custoTotal = valor;
		}

	public:

		EncomendaRelampago(double peso, double custoPorkg, Cliente *remetente, Cliente *destinatario) : Encomenda(peso, custoPorkg, remetente, destinatario) {
			_calculaCustoTotal();
		}

};

#endif