#include <iostream>
#include "Encomenda.hpp"

void Encomenda::print()
{

		cout << "[Remetente]" << endl;
		remetente.print();
		cout << "[Destinatário]" << endl;
		destinatario.print();
	}
