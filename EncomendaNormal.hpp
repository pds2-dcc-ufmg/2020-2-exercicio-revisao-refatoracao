#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{
	public:
		static int contadorNormal;
		static double custoNormalTotal;
		
		EncomendaNormal( 	double _peso,
							double _custoKg,
							Cliente _remetente,
							Cliente _destinatario	)
						:	Encomenda(
							_peso,
							_custoKg,
							_remetente,
							_destinatario
						) {	// A chamada do contrutor incrementa o contador.
							contadorNormal++;
							custoNormalTotal+=this->calcula();
						}
					
		~EncomendaNormal() {
			contadorNormal--;
		}



		double calcula(){

			double custo = this->getPeso() * this->getCustoKg();
			return custo;
		}

		void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " 	<< this->getPeso() 		<< endl
				<< "  Custo por kg: " 	<< this->getCustoKg() 	<< endl
				<< "  Custo total: " 	<< this->getTotal() 		<< endl;

		}

};

int EncomendaNormal::contadorNormal=0;
double EncomendaNormal::custoNormalTotal=0;

#endif