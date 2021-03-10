#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{



	public:

		EncomendaRelampago(double peso, double custoKg, Cliente remetente,  Cliente destinatario): 	Encomenda(peso, custoKg, remetente, destinatario, 1.25){}


		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << peso << std::endl
				<< "  Custo por kg: " << custoKg << std::endl
				<< "  Taxa adicional: " << taxaAdicional << std::endl
				<< "  Custo total: " << calculaCusto() << std::endl;

		}

};

#endif