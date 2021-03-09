#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda{
  
  private:

    static constexpr double CUSTO_POR_KILO_ENCOMENDA_RELAMPAGO = 18;

    static constexpr double TAXA_ADICIONAL_ENCOMENDA_RELAMPAGO = 0.25;

	public:
	
		EncomendaRelampago(double peso, Cliente remetente, Cliente destinatario){

		  	_peso = peso;
			_custoPorKG = CUSTO_POR_KILO_ENCOMENDA_RELAMPAGO; 
			_remetente = remetente; 
			_destinatario = destinatario;

   		}

		double calcularCustoTotal() override { 

      		return _peso * _custoPorKG * (1 + TAXA_ADICIONAL_ENCOMENDA_RELAMPAGO);

		}

		void print() override{

			std::cout << "[Remetente]" << endl;
			_remetente.print();
			std::cout << "[Destinatário]" << endl;
			_destinatario.print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << _peso << endl
				<< "  Custo por kg: " << _custoPorKG << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << calcularCustoTotal() << endl;

		}

};

#endif