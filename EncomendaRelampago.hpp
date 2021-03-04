#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		static int contadorRelampago;
		static double custoRelampagototal;
		const double taxaAdicional = 0.25;

		EncomendaRelampago( double _peso,
							double _custoKg,
							Cliente _remetente,
							Cliente _destinatario	)
						:	Encomenda(
							_peso,
							_custoKg,
							_remetente,
							_destinatario
						) {	// A chamada do contrutor incrementa o contador.
							contadorRelampago++;
							custoRelampagototal+=this->calcula();
						}

		~EncomendaRelampago() {
			contadorRelampago--;
		}


		double calcula() {
			double custo = getPeso() * getCustoKg();
			custo += custo * taxaAdicional;
			return custo;
		}

		void print() override {

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" 			<< endl
				<< "  Peso: " 			<< getPeso() 		<< endl
				<< "  Custo por kg: " 	<< getCustoKg() 	<< endl
				<< "  Taxa adicional: " << taxaAdicional 	<< endl
				<< "  Custo total: " 	<< getTotal() 		<< endl;

		}

};

int EncomendaRelampago::contadorRelampago=0;
double EncomendaRelampago::custoRelampagototal=0;

#endif