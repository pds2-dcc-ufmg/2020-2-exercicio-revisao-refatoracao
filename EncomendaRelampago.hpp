#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
	public:
	//taxa da encomenda:
        static constexpr double TAXA = 0.25;
	
	//Construtor e destrutor:
	EncomendaRelampago(Cliente c1, Cliente c2, double _peso, double _custo) : Encomenda(c1,c2,_peso,_custo) {};
        ~EncomendaRelampago() {};

        //Função sobrescrita para imprimir:
	void print() override {
		Encomenda::print();
		std::cout << "[Encomenda Relâmpago]" << endl;
		std::cout << "  Peso: " << Encomenda::getPeso() << endl
		<< "  Custo por kg: " << Encomenda::getCustoKg() << endl
		<< "  Taxa adicional: " << TAXA << endl
		<< "  Custo total: " << Encomenda::getTotal() << endl;
	}
	//Valor da encomenda com a taxa:
	double calcula() override {
		double x = Encomenda::getPeso() * Encomenda::getCustoKg();
		x += x * TAXA;
		return x;
	}
};


#endif
