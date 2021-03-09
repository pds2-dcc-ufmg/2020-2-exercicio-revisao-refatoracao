#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{
	private:
    double peso = 0.0;
		double custoKg = 0.0;
		double tarifa = 0.0;
		Cliente remetente;
		Cliente destinatario;

	public:
    void setPeso(double p) {  peso = p; }
    double getPeso() {  return peso;  }
    void setCustoKg(double c) {  custoKg = c; }
    double getCustoKg() {  return custoKg;  }
    void setRemerente(Cliente cl) { remetente = cl;  }
    Cliente getRemetente() { return remetente;  }
    void setDestinatario(Cliente ds) {  destinatario = ds;  }
    Cliente getDestinatario() { return destinatario;  }

    virtual double calculaEntrega() {  return getPeso() * getCustoKg();    }
			
		void print(){
			cout << "[Remetente]" << endl;
			remetente.print();
			cout << "[Destinatário]" << endl;
			destinatario.print();
		}
};

#endif