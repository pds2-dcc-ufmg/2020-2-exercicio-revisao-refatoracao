#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda: public print{

	protected:
		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente destinatario;

	public:
		Cliente getRemetente(){
			return remetente;
		}
		Cliente getDestinatario(){
			return destinatario;
		}

		void setRemetente(Cliente aux){
			this->remetente = aux;
		}
		void setDestinatario(Cliente aux)	{
			this->destinatario = aux;
		}

		double getPeso(){
			return PESO;
		}
		double getCustoKg(){
			return CUSTOkg;
		}
		double getT(){
			return T;
		}

		void setPeso(double aux){
			this->PESO = aux;
		}
		void setCustoKg(double aux){
			this->CUSTOkg = aux;
		}
		void setT(double aux){
			this->T = aux;
		}

		void imprimir() override{
			std::cout << "[Remetente]" << std::endl;
			remetente.imprimir();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.imprimir();
		}

		virtual double taxa_entrega_calcular() = 0;

};

#endif
