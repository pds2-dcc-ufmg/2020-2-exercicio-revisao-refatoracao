#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){

			double x = peso * custokg;
			x += x * 0.25;
			
			return x;
		}

		void print()override{

      cout << "[Remetente]" << endl;
      remetente.print();
      std::cout << "[Destinatário]" << endl;
      dest.print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custokg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << tot << endl;

		}

};

#endif