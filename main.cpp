#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

#include <iostream>
using namespace std;

int main(){

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

	Encomenda* enc0 = new EncomendaNormal(5, 12, &cli0, &cli1);
	quantN++;

	Encomenda* enc1 = new EncomendaNormal(10, 12, &cli1, &cli2);
	quantN++;

	Encomenda* enc2 = new EncomendaNormal(7, 12, &cli2, &cli3);
	quantN++;

	Encomenda* enc3 = new EncomendaNormal(2, 12, &cli3, &cli4);
	quantN++;

	Encomenda* enc4 = new EncomendaNormal(3, 12, &cli4, &cli5);
	quantN++;

	Encomenda* enc5 = new EncomendaRelampago(13, 18, &cli5, &cli6);
	quantR++;

	Encomenda* enc6 = new EncomendaRelampago(6, 18, &cli6, &cli7);
	quantR++;

	Encomenda* enc7 = new EncomendaRelampago(8, 18, &cli7, &cli0);
	quantR++;

	cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0->calculaCusto();
	enc0->print();
	custN += enc0->calculaCusto();
	cout << endl;

	enc1->calculaCusto();
	enc1->print();
	custN += enc1->calculaCusto();
	cout << endl;

	enc2->calculaCusto();
	enc2->print();
	custN += enc2->calculaCusto();
	cout << endl;

	enc3->calculaCusto();
	enc3->print();
	custN += enc3->calculaCusto();
	cout << endl;

	enc4->calculaCusto();
	enc4->print();
	custN += enc4->calculaCusto();
	cout << endl;

	enc5->calculaCusto();
	enc5->print();
	custR += enc5->calculaCusto();
	cout << endl;

	enc6->calculaCusto();
	enc6->print();
	custR += enc6->calculaCusto();
	cout << endl;

	enc7->calculaCusto();
	enc7->print();
	custR += enc7->calculaCusto();
	cout << endl;

	cout << "\n>> Encomendas Normais <<"
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<"
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
}
