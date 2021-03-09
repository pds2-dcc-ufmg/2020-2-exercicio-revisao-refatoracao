#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaNormal: public Encomenda{

  private:
  
    static constexpr double CUSTO_POR_KILO_ENCOMENDA_NORMAL = 12;

	public:
		
		EncomendaNormal(double peso, Cliente remetente, Cliente destinatario){

      		_peso = peso;
			_custoPorKG = CUSTO_POR_KILO_ENCOMENDA_NORMAL; 
			_remetente = remetente; 
			_destinatario = destinatario;

    	}

		double calcularCustoTotal() override {

      		return _peso * _custoPorKG;

		}

		void print() override {
			
			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_destinatario.print();
			std::cout << "[Encomenda Normal]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoPorKG << endl
				<< "  Custo total: " << calcularCustoTotal() << endl;

		}
};

#endif