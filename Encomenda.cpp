#include <iostream>
#include "Encomenda.hpp"

void Encomenda::print()
{

		cout << "[Remetente]" << endl;
		remetente.print();
		cout << "[Destinatário]" << endl;
		destinatario.print();
}

Encomenda::Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario)
: peso(peso)
, custoKg(custoKg)
, remetente(remetente)
, destinatario(destinatario) 
{}
