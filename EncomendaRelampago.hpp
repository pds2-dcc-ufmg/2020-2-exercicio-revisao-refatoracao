#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{

  private:
    double tarifa = 0.25;

	public:

    double getTarifa() { return tarifa;  }

    double calculaEntrega() override { return (1 + tarifa) * getPeso() * getCustoKg();  }

		void print(){

			Encomenda::print();
			cout << "[Encomenda Relâmpago]" << endl;
			cout << "  Peso: " << getPeso() << endl
				<< "  Custo por kg: " << getCustoKg() << endl
				<< "  Taxa adicional: " << getTarifa() << endl
				<< "  Custo total: " << calculaEntrega() << endl;
		}

    void realizaEncomenda(EncomendaRelampago encomenda, double *custo) {
      encomenda.calculaEntrega();
      encomenda.print();
      *custo += encomenda.calculaEntrega();
      cout << endl;
    }
};

#endif