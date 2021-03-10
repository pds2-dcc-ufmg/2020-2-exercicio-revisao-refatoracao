#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
#include "Encomenda.hpp"
#include "Cliente.hpp"
#define TAXA_ADICIONAL 0.25

class EncomendaRelampago: public Encomenda{

	public:

		double calcula(){
			
			double valor = peso * custoKG;
			valor += valor * TAXA_ADICIONAL
			
			return valor;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoKG << endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL<< endl
				<< "  Custo total: " << custoTotal << endl;

		}

};

#endif
