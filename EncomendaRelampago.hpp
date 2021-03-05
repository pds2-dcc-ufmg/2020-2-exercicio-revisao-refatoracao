#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

		static double constexpr _TAXA = 0.25;

	public:

		EncomendaRelampago(double peso, double custo_kg, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo_kg, remetente, destinatario) {}

		static double getTaxa() { return _TAXA; }

		virtual double calculaPreco() override {

			double preco = this->getPeso() * this->getCustoKg();
			preco += preco * EncomendaRelampago::getTaxa();
			
			return preco;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Taxa adicional: " << EncomendaRelampago::getTaxa() << endl
				<< "  Custo total: " << this->getCustoTotal() << endl;

		}

};

#endif