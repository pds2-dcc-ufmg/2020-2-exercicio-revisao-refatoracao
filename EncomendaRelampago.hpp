#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

		const double _CUSTOKILO = 18;
		const double _TAXA = 0.25;
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
				<< "[Encomenda Relâmpago]" << endl
				<< "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKilo() << endl
				<< "  Taxa adicional: " << getTaxa() << endl
				<< "  Custo total: " << getCustoTotal() << endl;

	}

};

#endif