#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include <iostream>

#include "./Encomenda.hpp"
#include "./Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda {

	public:
		/**
		 * @brief Construtor da classe
		 * 
		 * @param weight 
		 * @param costKg 
		 * @param sender 
		 * @param recipient 
		 */
    EncomendaRelampago(double weight, double costKg, Cliente sender, Cliente recipient);

    /**
     * @brief printa os dados desejados
     * 
     */
  	void print() override;

};

#endif