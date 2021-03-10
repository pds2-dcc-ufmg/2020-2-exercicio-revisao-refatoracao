#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include <iostream>

#include "./Encomenda.hpp"
#include "./Cliente.hpp"

using namespace std;

class EncomendaNormal: public Encomenda {

	public:
    /**
     * @brief Construtor da classe
     * 
     * @param weight 
     * @param costKg 
     * @param sender 
     * @param recipient 
     */
    EncomendaNormal(double weight, double costKg, Cliente sender, Cliente recipient);

    /**
     * @brief printa os dados desejados
     * 
     */
    void print() override;
};

#endif