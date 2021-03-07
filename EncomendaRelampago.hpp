#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

using namespace std;

class EncomendaRelampago: public Encomenda{

	private:
		static constexpr double _taxa_adicional = 1.25;

	public:

		EncomendaRelampago(double peso, double custo_por_kg, Cliente remetente, Cliente dest) : 
			Encomenda(peso, custo_por_kg, remetente, dest) {}
		

		double calcula() override {
			// retirando os números magicos
			_total = (_peso * _custo_por_kg) * _taxa_adicional;			
			return _total;
		}
	

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custo_por_kg << endl
				<< "  Taxa adicional: " << _taxa_adicional << endl
				<< "  Custo total: " << _total << endl;

		}

};

#endif