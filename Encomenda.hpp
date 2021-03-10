#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	//Criação dos atributos da classe Encomenda que podem ser usados por suas classes filhas
	protected:

		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
	
	public:

		//Construtor da classe Encomenda...
		Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario);
		
		//Interface da função para impressão do remetente e do destinatario da encomenda...
		void print();

};

#endif