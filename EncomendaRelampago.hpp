#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:
	
	        EncomendaRelampago(double _peso, double _custoKg, Cliente _remetente, Cliente _dest){
			
			this->setPeso(_peso);
			this->setCustoKg(_custoKg);
			this->setRemetente(_remetente);
			this->setDest(_dest);
		}	
	
		double calcula(){

			double x = this->getPeso() * this->getCustoKg();
			x += x * this->getTaxaAdicional();
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Taxa adicional: " << this->getTaxaAdicional() << endl
				<< "  Custo total: " << this->getCustoTotal() << endl;

		}
	
	        double getTaxaAdicional(){
			
			return this->taxaAdicional;
		}	
	
	private:
	        double taxaAdicional=0.25;

};

#endif
