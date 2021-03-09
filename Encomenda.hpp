#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
    private:
        double Peso = 0.0;
		double CustoKg = 0.0;
		double Total = 0.0;
		Cliente remetente;
		Cliente dest;

	public:
	    Encomenda() {}
        
        Encomenda(double _peso, double  _custo, Cliente _remet, Cliente _dest) : 
            Peso(_peso), 
            CustoKg(_custo),
            remetente(_remet),
            dest(_dest) {}
        
		void print() {
		    cout << "[Remetente]" << endl;
	        remetente.print();
	        cout << "[Destinatário]" << endl;
	        dest.print();
        }
		
        double getPeso() { return this->Peso; }

        double getCustoKg() { return this->CustoKg; }

        double getTotal() { return this->Total; }

        Cliente getRemetente() { return this->remetente; }

        Cliente getDest() { return this->dest; }

        void setTotal(double valor) { this->Total = valor; }
		
};

#endif