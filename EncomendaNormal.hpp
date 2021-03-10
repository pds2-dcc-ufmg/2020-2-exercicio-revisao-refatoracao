#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
        double calcula(){

            double x = Peso * CustoKg;
            return x;
        }

        void print(){

            Encomenda::print();
            std::cout << "[Encomenda Normal]" << endl;
            std::cout << "  Peso: " << Peso << endl
                << "  Custo por kg: " << CustoKg << endl
                << "  Custo total: " << T << endl;
            std::cout << endl;

        }
        EncomendaNormal(double _Peso, double _Custokg, int *(Quant), Cliente _remetente, Cliente _dest):Encomenda(_Peso, _Custokg, Quant, _remetente, _dest){}
        double PrecoTotal(){
            this->print();
            return this->calcula();
        }
};

#endif
