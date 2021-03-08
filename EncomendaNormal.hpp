#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaNormal: public Encomenda{
	public:
  EncomendaNormal():Encomenda(){};
  EncomendaNormal(double peso, double custoKg, Cliente remetente, Cliente destinatario):Encomenda(peso, custoKg, remetente, destinatario){}; 

	double calcularPrecoEnvio();
	void printDados();

};

#endif