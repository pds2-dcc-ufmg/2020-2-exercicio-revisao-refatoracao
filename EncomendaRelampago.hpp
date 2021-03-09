#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "EncomendaNormal.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public EncomendaNormal {

	protected:

		static constexpr double TAXA_ADICIONAL = 0.25;

	public:

		//static constexpr double TAXA_ADICIONAL = 0.25;

		EncomendaRelampago(double _peso_kg, double _custo_por_kg, Cliente _remetente, Cliente _destinatario):
			EncomendaNormal(_peso_kg, _custo_por_kg, _remetente, _destinatario) {}

			//Encomenda(_peso_kg, _custo_por_kg, _remetente, _destinatario); 
		//peso_kg(_peso_kg), custo_por_kg(_custo_por_kg), remetente(_remetente), destinatario(_destinatario)  {}

		double calculaCustoTotal () override {
			double custo_total = this->getPeso() * this->getCustoPorKg();
			custo_total += custo_total * TAXA_ADICIONAL;
			return custo_total;
		}

		void printDadosEncomenda () override {
			cout << "[Remetente]" << endl;
			this->remetente.printDadosCliente();

			cout << "[Destinatário]" << endl;
			this->destinatario.printDadosCliente();

			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << this->getPeso() << endl
				 << "  Custo por kg: " << this->getCustoPorKg() << endl
				 << "  Taxa adicional: " << TAXA_ADICIONAL << endl
				 << "  Custo total: " << this->calculaCustoTotal() << endl;
		}
};

#endif