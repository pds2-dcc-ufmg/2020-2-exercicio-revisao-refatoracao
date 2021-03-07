#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:

		EncomendaNormal() {}

		EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario) {
			setPeso(peso);
			setCustoKg(custoKg);
			setCustoTotal(calculaCustoTotal());
			setRemetente(remetente);
			setDestinatario(destinatario);
		}
		
		double calculaCustoTotal() override {

			double x = getPeso() * getCustoKg();

			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKg() << endl
				<< "  Custo total: " << getCustoTotal() << endl;

		}

};

#endif