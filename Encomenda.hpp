#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

	public:

		virtual double calcula() const = 0;
			
		virtual void print() const = 0;

};

#endif