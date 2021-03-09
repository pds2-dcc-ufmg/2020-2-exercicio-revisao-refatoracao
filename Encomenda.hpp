#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {

public:

	static constexpr double TAXA_ADICIONAL = 0.25;
	double peso = 0.0;
	double custoKg = 0.0;
	double custoTotal = 0.0;
	Cliente remetente;
	Cliente destinatario;

	void printEncomenda() { //imprime os dados dos clientes da encomenda

		std::cout << "[Remetente]" << endl;
		remetente.printCliente();
		std::cout << "[Destinatário]" << endl;
		destinatario.printCliente();
	}

	void printInfoBase() { //imprime os informacoes basicas da encomenda

		
		std::cout << "  Peso: " << peso << endl
		<< "  Custo por kg: " << custoKg << endl
		<< "  Custo total: " << custoTotal << endl;

		}
	
	double valorTotalBase() { //calcula o valor base (minimo) de uma encomenda

		custoTotal = peso * custoKg;

		return custoTotal;

	}
};

#endif