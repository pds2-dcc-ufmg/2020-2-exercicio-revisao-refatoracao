#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{

    private:
		double peso = 0.0;
		double custoKg = 0.0;
		double precoTotal = 0.0;
		Cliente remetente;
		Cliente destinatario;
			
	public:

        Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario): peso(peso), custoKg(custoKg), remetente(remetente), destinatario(destinatario)  {}

        double getPeso() { return peso; }
        double getCustoKg() { return custoKg; }
        double getPrecoTotal() { return precoTotal; }

        double calculaPrecoTotal() {
            return getPeso() * getCustoKg();
        }

		virtual void printEncomenda(){
			std::cout << "[Remetente]" << std::endl;
			remetente.printCliente();
			std::cout << "[Destinatário]" << std::endl;
			destinatario.printCliente();
		}

};

#endif