#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"

class EncomendaRelampago: public Encomenda{
	
  	public:

		const double TAXA_ADICIONAL = 0.25;
		
		//Retorna o custo atualizado da encomenda com a taxa adicional

		virtual double calcula() override {
			double custoComTaxa = Encomenda::calcula();
			custoComTaxa += custoComTaxa * TAXA_ADICIONAL;
			return custoComTaxa;
		}

		virtual void print() override{

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << std::endl;
			std::cout << "  Peso: " << this->peso << std::endl;
			std::cout << "  Custo por kg: " << this->custoPorKg << std::endl;
			std::cout << "  Taxa adicional: " << TAXA_ADICIONAL << std::endl;
			std::cout << "  Custo total: " << this->custoTotal << std::endl;

		}

		EncomendaRelampago(double _peso,double _custoPorKg,Cliente _remetente,Cliente _destinatario){
				this->peso = _peso;
				this->custoPorKg = _custoPorKg;
				this->remetente = _remetente;
				this->destinatario = _destinatario;
			}

};

#endif