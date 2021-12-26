#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{
    private:
        double taxaAdicional;
	public:

        EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario): Encomenda(peso, custoKg, remetente, destinatario) { 
            taxaAdicional = 0.25;
        }

        double getTaxaAdicional() { return taxaAdicional; }

		double calculaPrecoTotal(){
			double total = Encomenda::calculaPrecoTotal();
			total += total * taxaAdicional;
			return total;
		}

		void printEncomenda(){

			Encomenda::printEncomenda();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << getPeso() << std::endl
				<< "  Custo por kg: " << getCustoKg() << std::endl
				<< "  Taxa adicional: " << getTaxaAdicional() << std::endl
				<< "  Custo total: " << getPrecoTotal() << std::endl;

		}

};

#endif