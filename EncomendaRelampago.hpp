#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago : public Encomenda
{
public:

	EncomendaRelampago(double peso, double custoPorKg, Cliente *remetente, Cliente *destinatario) : Encomenda(peso, custoPorKg, remetente, destinatario) {
		this->taxa = 0.25;
	}

	void print() override{

		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << std::endl;
		std::cout << "  Peso: " << peso << std::endl
				  << "  Custo por kg: " << custoPorKg << std::endl
				  << "  Taxa adicional: " << taxa << std::endl
				  << "  Custo total: " << custoTotal << std::endl;
	}
};

#endif
