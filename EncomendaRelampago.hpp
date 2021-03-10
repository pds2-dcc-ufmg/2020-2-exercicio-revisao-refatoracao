#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

        double calcula(){

            double x = Peso * CustoKg;
            x += x * 0.25;

            return x;
        }

        void print(){

            Encomenda::print();
            std::cout << "[Encomenda Relâmpago]" << endl;
            std::cout << "  Peso: " << Peso << endl
                << "  Custo por kg: " << CustoKg << endl
                << "  Taxa adicional: " << 0.25 << endl
                << "  Custo total: " << T << endl;
            std::cout << endl;

        }
        EncomendaRelampago(double _Peso, double _Custokg, int *(Quant), Cliente _remetente, Cliente _dest):Encomenda(_Peso, _Custokg, Quant, _remetente, _dest){}
        double PrecoTotal(){
            this->print();
            return this->calcula();
    }
};

#endif
