#include <iostream>
#include <string>
#include <Encomenda.hpp>

void Encomenda::print()
{
			std::cout << "[Remetente]" << endl;
			sender.print();
			std::cout << "[Destinatário]" << endl;
			receiver.print();
}
