#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>

#include "./Cliente.hpp"

using namespace std;
/**
 * @brief classe ABSTRATA que herdará métodos para encomendas noromal e relâmpago
 * 
 */
class Encomenda {

	public:
    /**
     * @brief retorna o custo total da encomenda
     * 
     * @return atributo _total do objeto
     */
		virtual double getTotal(); 

    /**
     * @brief printa os dados desejados 
     *        será modificado (override) pelas subclasses
     */
    virtual void print() = 0; // indica que a classe é abstrata

	protected:
		double _weight;
		double _costKg;
		double _total;
		Cliente _sender;
		Cliente _recipient;
};

#endif