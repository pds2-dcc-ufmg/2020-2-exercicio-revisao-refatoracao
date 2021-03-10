#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

using namespace std;

class Encomenda{

    protected:
        double Peso = 0.0;
        double CustoKg = 0.0;
        double T = 0.0;
        Cliente Remetente;
        Cliente Dest;

    public:
        void print(){
			std::cout << "[Remetente]" << endl;
			Remetente.print();
			std::cout << "[Destinatário]" << endl;
			Dest.print();
		}
		Encomenda(double _Peso, double _Custokg, int *(Quant), Cliente _remetente, Cliente _dest):Peso(_Peso),CustoKg(_Custokg),Remetente(_remetente),Dest(_dest){
            *(Quant) = *(Quant) + 1;//Acrescentando a nova encomenda na quantidade total.
		}
        virtual double PrecoTotal(){}//Método para imprimir informações da encomenda e retornar o valor total como um double.
};

#endif
