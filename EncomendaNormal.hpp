#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

	public:
		
		EncomendaNormal(double peso, double custo_kg, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo_kg, remetente, destinatario) {

			aumentaQuantidade();
			aumentaCusto();
		
		}

		static int quantidade;
		static double custo;

		void aumentaQuantidade() { EncomendaNormal::quantidade++; }
		void aumentaCusto() { EncomendaNormal::custo += this->calculaPreco(); }

		void print() { // imprime na tela os dados de uma encomenda cadastrada

			Encomenda::print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Custo total: " << this->getCustoTotal() << endl;

		}

};

int EncomendaNormal::quantidade = 0;
double EncomendaNormal::custo = 0;

#endif