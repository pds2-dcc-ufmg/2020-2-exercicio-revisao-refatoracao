#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago : public Encomenda
{
private:
	double taxaRelampago = 1.25; // taxa extra para entregas relampago

public:
	EncomendaRelampago() {} // construtor padrão
	EncomendaRelampago(double _peso, double _custokg, Cliente _remetente, Cliente _dest)
	{
		this->PESO = _peso;
		this->CUSTOkg = _custokg;
		this->remetente = _remetente;
		this->dest = _dest;
	} // construtor

	double calcula() override
	{

		double x = PESO * CUSTOkg;
		x = x * taxaRelampago;
		return x;

	} // função para calcular o preço da entrega

	void printEncomenda() override
	{

		std::cout << "[Remetente]" << endl;
		remetente.printCliente();
		std::cout << "[Destinatário]" << endl;
		dest.printCliente();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << PESO << endl
				  << "  Custo por kg: " << CUSTOkg << endl
				  << "  Taxa adicional: " << 0.25 << endl
				  << "  Custo total: " << custoTotal << endl;

	} // função para imprimir dados da entrega Relanpago
};

#endif
