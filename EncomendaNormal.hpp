#ifndef EncomendaNormal_H
 #define EncomendaNormal_H
#include <iostream>
 #include "Encomenda.hpp"
 #include "Cliente.hpp"
 using namespace std;

 class EncomendaNormal: public Encomenda{
    public:
     
     EncomendaNormal(double p, double custo, Cliente rem, Cliente des):
                  Encomenda(p,custo,rem,des) {}
     virtual void print() override;

 };
