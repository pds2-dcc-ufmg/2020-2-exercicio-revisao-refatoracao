#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda {

	public:

		EncomendaRelampago() {}
		EncomendaRelampago(double peso, double custoKg,
						   Cliente remetente, Cliente destinatario)
		: 				   Encomenda(peso, custoKg,
								     remetente, destinatario) {}

		double getTaxa() { return this->_taxa; }

		virtual double calcPreco() override {

			double precoEncomenda = this->getPeso() * this->getCustoKg();
    		precoEncomenda += precoEncomenda * this->getTaxa();

    		return precoEncomenda;

		}

		virtual void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->getPeso() << std::endl
					<< "  Custo por kg: " << this->getCustoKg() << std::endl
					<< "  Taxa adicional: " << this->getTaxa() << std::endl
					<< "  Custo total: " << this->getCustoTotal() << std::endl;
		
		}
		
	private:

		static double constexpr _taxa = 0.25;

};

#endif