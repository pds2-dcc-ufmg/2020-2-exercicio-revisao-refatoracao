#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal : public Encomenda {

	protected:

		double peso_kg;
		double custo_por_kg;
		Cliente remetente;
		Cliente destinatario;

	public:

		EncomendaNormal(double _peso_kg, double _custo_por_kg, Cliente _remetente, Cliente _destinatario):
		peso_kg(_peso_kg), custo_por_kg(_custo_por_kg), remetente(_remetente), destinatario(_destinatario)  {}
		/*
			peso_kg = _peso_kg;
			custo_por_kg = _custo_por_kg;
			remetente = _remetente;
			destinatario = _destinatario;
		}
		*/

		virtual double getPeso() {
			return this->peso_kg;
		}

		virtual double getCustoPorKg() {
			return this->custo_por_kg;
		}
			//Encomenda(_peso_kg, _custo_por_kg, _remetente, _destinatario);
		//peso_kg(_peso_kg), custo_por_kg(_custo_por_kg), remetente(_remetente), destinatario(_destinatario)  {}
			//Encomenda(_peso_kg, _custo_por_kg, _remetente, _destinatario);
		
		virtual double calculaCustoTotal () override {
			return this->getPeso() * this->getCustoPorKg();
		}

		virtual void printDadosEncomenda() override {
			cout << "[Remetente]" << endl;
			this->remetente.printDadosCliente();

			cout << "[Destinatário]" << endl;
			this->destinatario.printDadosCliente();

			cout << "[Encomenda Normal]" << endl;
			cout << "  Peso: " << this->getPeso() << endl
				 << "  Custo por kg: " << this->getCustoPorKg() << endl
				 << "  Custo total: " << this->calculaCustoTotal() << endl;
		}
};

#endif