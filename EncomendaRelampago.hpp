#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

		double _taxa;

	public:
		
		EncomendaRelampago(double peso, double custo_kg, Cliente remetente, Cliente destinatario, double taxa) :
			Encomenda(peso, custo_kg, remetente, destinatario), _taxa(taxa) {}

		double getTaxa() { return this->_taxa; }

		void setTaxa(double taxa) { this->_taxa = taxa; }

		virtual double calculaPreco() override {

			double preco = this->getPeso() * this->getCustoKg();
			preco += preco * this->getTaxa();
			
			return preco;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Taxa adicional: " << this->getTaxa() << endl
				<< "  Custo total: " << this->getCustoTotal() << endl;

		}

};

#endif