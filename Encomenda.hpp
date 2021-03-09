#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda {
	public:
	//Construtores e destrutor:
	Encomenda(Cliente _remetente, Cliente _dest,double _peso = 0, double _custoKg = 0) :
		peso(_peso),
	        custoKg(_custoKg),
	        total(0),
	        remetente(_remetente),
	        dest(_dest)
	        {};
        Encomenda() {};
        virtual ~Encomenda() {};
	
	//Getters:
	double getPeso();
	double getCustoKg();
	double getTotal();
        Cliente getRemetente();
	Cliente getDest();
	
	//Setters:
	void setPeso(double peso);
	void setCustoKg(double custo);

	//Imprimir dados:
        virtual void print() {
		std::cout << "[Remetente]" << endl;
		remetente.print();
		std::cout << "[Destinatário]" << endl;
		dest.print();
        }
	//Calcula o valor da encomenda:
	virtual double calcula() = 0;
	
	private:
	//Atributos:
	double peso;
	double custoKg;
	double total;
	Cliente remetente;
	Cliente dest;	
};

#endif
