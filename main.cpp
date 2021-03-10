#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>


int main() {

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");


	int quantNormal = 0;
	int quantRelampago = 0;

	EncomendaNormal enc0(5, 12, cli0, cli1);
	quantNormal++;
	EncomendaNormal enc1(10, 12, cli1, cli2);
	quantNormal++;
	EncomendaNormal enc2(7, 12, cli2, cli3);
	quantNormal++;
	EncomendaNormal enc3(2, 12, cli3, cli4);
	quantNormal++;
	EncomendaNormal enc4(3, 12, cli4, cli5);
	quantNormal++;
	EncomendaRelampago enc5(13, 18, cli5, cli6);
	quantRelampago++;
	EncomendaRelampago enc6(6, 18, cli6, cli7);
	quantRelampago++;
	EncomendaRelampago enc7(8, 18, cli7, cli0);
	quantRelampago++;
	
	std::vector<EncomendaNormal> encomendas1 = { enc0, enc1, enc2, enc3, enc4 };
	std::vector<EncomendaRelampago> encomendas2 = { enc5, enc6, enc7};

	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	for (EncomendaNormal iterator: encomendas1) {
		iterator.calcula();
		iterator.print();
		custN += iterator.calcula();
		std::cout << endl;
	}

	for (EncomendaRelampago iterator : encomendas2) {
		iterator.calcula();
		iterator.print();
		custR += iterator.calcula();
		std::cout << endl;
	}

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
