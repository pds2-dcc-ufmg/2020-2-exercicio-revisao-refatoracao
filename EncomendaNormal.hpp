#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda {
	public:
	//Construtor e destrutor:
	EncomendaNormal(Cliente c1, Cliente c2, double _peso, double _custo) : Encomenda(c1,c2,_peso,_custo) {};
	~EncomendaNormal() {};

        //Métodos:
        double calcula() {
		return Encomenda::getCustoKg() * Encomenda::getPeso();
        };

        void print() override {
		Encomenda::print();
		std::cout << "[Encomenda Normal]" << endl;
		std::cout << "  Peso: " << Encomenda::getPeso() << endl
		<< "  Custo por kg: " << Encomenda::getCustoKg() << endl
                << "  Custo total: " << Encomenda::getTotal() << endl;
	}
};

#endif
