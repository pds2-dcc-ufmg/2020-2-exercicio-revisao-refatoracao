#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago {

	double peso_kg;
	double custo_por_kg;
	Cliente remetente;
	Cliente destinatario;

	public:

		static constexpr double TAXA_ADICIONAL = 0.25;

		EncomendaRelampago(double _peso_kg, double _custo_por_kg, Cliente _remetente, Cliente _destinatario) {
			peso_kg = _peso_kg;
			custo_por_kg = _custo_por_kg;
			remetente = _remetente;
			destinatario = _destinatario;
		}

		double getPeso() {
			return this->peso_kg;
		}

		double getCustoPorKg() {
			return this->custo_por_kg;
		}
			//Encomenda(_peso_kg, _custo_por_kg, _remetente, _destinatario); 
		//peso_kg(_peso_kg), custo_por_kg(_custo_por_kg), remetente(_remetente), destinatario(_destinatario)  {}

		double calculaCustoTotal () {
			double custo_total = this->getPeso() * this->getCustoPorKg();
			custo_total += custo_total * TAXA_ADICIONAL;
			return custo_total;
		}

		void printDadosEncomenda () {
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