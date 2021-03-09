#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"


class Encomenda{

	private:

		double peso = 0.0;
		double custoKg = 0.0;
		double t = 0.0;
    
    public:
		Cliente remetente;
		Cliente dest;
			
		void print(){

			std::cout << "[Remetente]" << endl;
			remetente.print();
			std::cout << "[Destinatário]" << endl;
			dest.print();
		}
        
    void getPeso();
    void setPeso(double p);
    void getCustoKg();
    void setCustoKg(double c);
    void getT();
    void setT(double tt);

};

#endif
