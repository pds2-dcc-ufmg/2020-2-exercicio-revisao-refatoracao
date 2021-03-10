#ifndef Encomenda_H
#define Encomenda_H

#include <iostream>
#include "Cliente.hpp"

class Encomenda{
    private:
		double peso = 0.0;
		double custo_kg = 0.0;
		double taxa = 0.0;
		Cliente remetente;
		Cliente destinatario;

	public:
        double calcula();
		void print();

        void setPeso(double peso);
        void setCusto(double custo_kg);
        void setTaxa(double taxa);
        void setRemetente(Cliente c);
        void setDestinatario(Cliente c);

        double getPeso();
        double getCusto();
        double getTaxa();
        Cliente getRemetente();
        Cliente getDestinatario();
};

#endif