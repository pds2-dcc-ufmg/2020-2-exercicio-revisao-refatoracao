#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaNormal: public Encomenda {

	private:

		void _print() override {
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << peso << endl
				<< "  Custo por kg: " << custoPorkg << endl
				<< "  Custo total: " << custoTotal << endl;
		}

	public:

		EncomendaNormal(double peso, double custoPorkg, Cliente *remetente, Cliente *destinatario) : Encomenda(peso, custoPorkg, remetente, destinatario) {}

		// void print() {
		// 	Encomenda::print();
		// 	std::cout << "[Encomenda Normal]" << endl;
		// 	std::cout << "  Peso: " << peso << endl
		// 		<< "  Custo por kg: " << custoPorkg << endl
		// 		<< "  Custo total: " << custoTotal << endl;
		// }

};

#endif