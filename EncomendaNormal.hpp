#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Cliente.hpp"
#include "Encomenda.hpp"

#include <iostream>

class EncomendaNormal : public Encomenda {
public:
    using Encomenda::Encomenda;
    void print();
};

#endif
