#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	private:
		double _peso = 0.0;
		double _custo_kg = 0.0;
		double _custo_total = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
	
	public:
		Encomenda(double peso, double custo_kg, Cliente remetente, Cliente destinatario); // construtor para classe encomenda
		void print_parte_1(); // imprime na tela o remetente e o destinatário
		virtual double calcula() {} // função abstrata para utilizar nas subclasses
		virtual void print_parte_2() {} // // função abstrata para utilizar nas subclasses
};

#endif
