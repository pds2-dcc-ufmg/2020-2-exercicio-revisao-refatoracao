#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){
            double x = Encomenda::calcula();
			x += x * 0.25;
			
			return x;
		}

		void print(){

			Encomenda::print();

                std::cout << "[Encomenda Relâmpago]" << std::endl;
                std::cout << "  Peso: " << this->getPeso() << std::endl;
                std::cout << "  Custo por kg: " << this->getCusto() << std::endl;
                std::cout << "  Taxa adicional: " << 0.25 << std::endl;
                std::cout << "  Custo total: " << this->getTaxa() << std::endl;

		}

};

#endif