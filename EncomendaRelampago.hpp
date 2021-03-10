#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double Calcula(){

		double CONTA = PESO * CUSTOKG;
		       CONTA += CONTA * 0.25;
		
		       return CONTA;
		}

		void Print(){

			Encomenda::Print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOKG << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << SOMATORIA << endl;

		}
		};

#endif
