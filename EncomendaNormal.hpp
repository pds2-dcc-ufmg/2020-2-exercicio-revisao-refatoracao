#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal : public Encomenda{
	public:
		using Encomenda::Encomenda;
		void print() override;
};

#endif