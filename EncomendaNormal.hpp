#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
	    static int quantNormal;
	    static double custoNormal;
	
    	EncomendaNormal(double _peso, double _custo, Cliente _remet, Cliente _dest) : 
    	    Encomenda(_peso, _custo, _remet, _dest) {
    	        quantNormal++;
    	        custoNormal += this->calcula();
    	    }
    	    
    	double calcula() {
    		double Custo = this->getPeso() * this->getCustoKg();
            setTotal(Custo);
    		return Custo;
    	}
    
    	void print() {
    		Encomenda::print();
    		std::cout << "[Encomenda Normal]" << endl;
    		std::cout << "  Peso: " << this->getPeso() << endl
    			      << "  Custo por kg: " << this->getCustoKg() << endl
    			      << "  Custo total: " << this->getTotal() << endl;
    	}
    
    };
    
    int EncomendaNormal::quantNormal = 0;
    double EncomendaNormal::custoNormal = 0.0;

#endif