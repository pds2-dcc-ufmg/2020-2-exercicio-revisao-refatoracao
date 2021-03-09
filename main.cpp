#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main() {
	
	//cliente normal
	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "548 a.C.", "Miletus", "Ionia");
	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "384 a.C.", "Atenas", "Ática");
	Cliente cli2("Platão", "Praça das Formas", "348 a.C", "Atenas", "Ática");
	Cliente cli3("Sócrates", "Rua do Elenchus","399 a.C.", "Atenas", "Ática");
	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "571 a.C.", "Samos", "Egeu");
	Cliente cli5("Parmênides", "Rua do Não Ser", "460 a.C.", "Eleia", "Magna Grécia");
	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "495 a.C.", "Agrigento", "Sicília");
	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "499 a.C.", "Clazômenas", "Jónia");

	//encomenda normal
	EncomendaNormal enc0(5,12,cli0,cli1);

	EncomendaNormal enc1(10, 12, cli1, cli2);

	EncomendaNormal enc2(7, 12, cli2, cli3);

	EncomendaNormal enc3(2, 12, cli3, cli4);

	EncomendaNormal enc4(3, 12, cli4, cli5);

	//encomenda relampago
	EncomendaRelampago enc5(13, 18, cli5, cli6);

	EncomendaRelampago enc6(6, 18, cli6, cli7);

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double normal_cost = 0;
	double lightning_cost = 0;

	enc0.calculate();
	enc0.print();
	normal_cost += enc0.get_total_cost();
	cout << endl;

	enc1.calculate();
	enc1.print();
	normal_cost += enc1.get_total_cost();
	cout << endl;

	enc2.calculate();
	enc2.print();
	normal_cost += enc2.get_total_cost();
	std::cout << endl;

	enc3.calculate();
	enc3.print();
	normal_cost += enc3.get_total_cost();
	cout << endl;

	enc4.calculate();
	enc4.print();
	normal_cost += enc4.get_total_cost();
	cout << endl;

	enc5.calculate();
	enc5.print();
	lightning_cost += enc5.get_total_cost();
	cout << endl;

	enc6.calculate();
	enc6.print();
	lightning_cost += enc6.get_total_cost();
	cout << endl;

	enc7.calculate();
	enc7.print();
	lightning_cost += enc7.get_total_cost();
	cout << endl;
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << enc3.get_quantity()
		 << "\nValor Total: " << normal_cost
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << enc6.get_quantity()
		 << "\nValor Total: " << lightning_cost
		 << endl;
	
}