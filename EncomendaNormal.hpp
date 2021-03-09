#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"

class EncomendaNormal: public Encomenda{

  	public:

		virtual void print() override{
			Encomenda::print();
			std::cout << "[Encomenda Normal]" << std::endl; 
			std::cout << "  Peso: " << this->peso << std::endl;
			std::cout << "  Custo por kg: " << this->custoPorKg << std::endl;
			std::cout << "  Custo total: " << this->custoTotal << std::endl;

		}

		EncomendaNormal(double _peso,double _custoPorKg,Cliente _remetente,Cliente _destinatario){
				this->peso = _peso;
				this->custoPorKg = _custoPorKg;
				this->remetente = _remetente;
				this->destinatario = _destinatario;
			}

};

#endif