#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){
            double taxa = 0.25;
			double x = this->getpeso() * this->getcustokg();
			x += x * taxa;
			addTotal(x);
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << getpeso() << std::endl
				<< "  Custo por kg: " << getcustokg() << std::endl
				<< "  Taxa adicional: " << 0.25 << std::endl
				<< "  Custo total: " << gettotal() << std::endl;

		}
        EncomendaRelampago(double Peso, double Custo, Cliente Remetente, Cliente Destinatario): Encomenda(Peso, Custo, Remetente, Destinatario)
		{
			calcula();
		}
};

#endif
