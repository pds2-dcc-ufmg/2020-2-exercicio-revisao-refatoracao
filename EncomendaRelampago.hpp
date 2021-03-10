#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:
		EncomendaRelampago(double Peso_in, double Custo_Kg_in, Cliente *Remetente_in, Cliente *Destinatario_in ):
		Encomenda(Peso_in, Custo_Kg_in, Remetente_in, Destinatario_in ){}
		
		double calcula() override{
			return Encomenda::getPeso() * Encomenda::getCusto() * 1.25;
		}

		void print() override{

			Encomenda::print();
			
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			
			std::cout << "  Peso: " << Encomenda::getPeso() << std::endl << "  Custo por kg: " << Encomenda::getCusto() << std::endl
			<< "  Taxa adicional: " << 0.25 << std::endl << "  Custo total: " << Encomenda::getTotal() << std::endl;

		}

};

#endif
