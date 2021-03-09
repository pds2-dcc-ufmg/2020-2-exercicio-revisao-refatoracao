#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
	    static int quantRelampago;
	    static double custoRelampago;
	    static constexpr double taxaRelampago = 0.25;
	    
        EncomendaRelampago(double _peso, double _custo, Cliente _remet, Cliente _dest) :
            Encomenda(_peso, _custo, _remet, _dest) {
                quantRelampago++;
                custoRelampago += this->calcula();
            }
        
        
		double calcula(){
			double Custo = this->getPeso() * this->getCustoKg();
			Custo += Custo * taxaRelampago;
			setTotal(Custo);
			return Custo;
		}

		void print() {

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				      << "  Custo por kg: " << this->getCustoKg() << endl
				      << "  Taxa adicional: " << taxaRelampago << endl
				      << "  Custo total: " << this->getTotal() << endl;

		}
		
    };
    
    int EncomendaRelampago::quantRelampago = 0;
    double EncomendaRelampago::custoRelampago = 0.0;

#endif