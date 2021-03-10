#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{

	public:
        void print(){

            Encomenda::print();
            std::cout << "[Encomenda Normal]" << std::endl;
            std::cout << "  Peso: " << this->getPeso() << std::endl;
            std::cout << "  Custo por kg: " << this->getCusto() << std::endl;
            std::cout << "  Custo total: " << this->getTaxa() << std::endl;

        }
};

#endif