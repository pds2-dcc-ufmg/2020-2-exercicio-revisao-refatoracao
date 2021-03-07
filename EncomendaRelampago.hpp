#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	public:

		EncomendaRelampago() {}

		EncomendaRelampago(double peso, double custoKg, Cliente remetente, Cliente destinatario) {
			setPeso(peso);
			setCustoKg(custoKg);
			setCustoTotal(calculaCustoTotal());
			setRemetente(remetente);
			setDestinatario(destinatario);
		}

		double calculaCustoTotal() override {

			double x = getPeso() * getCustoKg();
			x += x * TAXA_ADICIONAL;
			
			return x;
		}

		void print(){

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKg() << endl
				<< "  Taxa adicional: " << TAXA_ADICIONAL << endl
				<< "  Custo total: " << getCustoTotal() << endl;

		}

	private:

		const float TAXA_ADICIONAL = 0.25;

};

#endif