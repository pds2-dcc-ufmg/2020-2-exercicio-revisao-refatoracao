#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

	private:

		static double constexpr _TAXA = 0.25;

	public:

		EncomendaRelampago(double peso, double custo_kg, Cliente remetente, Cliente destinatario) : Encomenda(peso, custo_kg, remetente, destinatario) {
			
			aumentaQuantidade();
			aumentaCusto();

		}

		static int quantidade;
		static double custo;

		void aumentaQuantidade() { EncomendaRelampago::quantidade++; }
		void aumentaCusto() { EncomendaRelampago::custo += this->calculaPreco(); }

		double getTaxa() { return EncomendaRelampago::_TAXA; }

		void print() { // imprime na tela os dados de uma encomenda cadastrada

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << this->getPeso() << endl
				<< "  Custo por kg: " << this->getCustoKg() << endl
				<< "  Taxa adicional: " << this->getTaxa() << endl
				<< "  Custo total: " << this->getCustoTotal() << endl;

		}

		virtual double calculaPreco() override { // calcula o custo total da encomenda

			double preco = this->getPeso() * this->getCustoKg();
			preco += preco * this->getTaxa();
			
			return preco;

		}

};

int EncomendaRelampago::quantidade = 0;
double EncomendaRelampago::custo = 0;

#endif