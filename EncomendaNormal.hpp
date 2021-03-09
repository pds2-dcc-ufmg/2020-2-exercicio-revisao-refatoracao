#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	private:

		const double _CUSTOKILO = 12;
		const double _TAXA = 0;
		double _custoTotal;

	public:

		double getCustoKilo(){return _CUSTOKILO;};
		double getTaxa(){return _TAXA;}

		double getCustoTotal(){	
			_custoTotal=getPeso()*getCustoKilo();
			_custoTotal+=_custoTotal*getTaxa();
			return _custoTotal;		
		}

		void print(){
			Encomenda::print();
			std::cout
				<< "[Encomenda Normal]" << endl
				<< "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKilo() << endl
				<< "  Custo total: " << getCustoTotal() << endl;
	}

};

#endif