#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main() {
	
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

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustoKg(12);
	enc0.setRemet(cli0);
	enc0.setDest(cli1);
	quantN++;
	
	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustoKg(12);
	enc1.setRemet(cli1);
	enc1.setDest(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustoKg(12);
	enc2.setRemet(cli2);
	enc2.setDest(cli3);
	quantN++;
	
	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustoKg(12);
	enc3.setRemet(cli3);
	enc3.setDest(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustoKg(12);
	enc4.setRemet(cli4);
	enc4.setDest(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustoKg(18);
	enc5.setRemet(cli5);
	enc5.setDest(cli6);
	quantR++;
	
	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustoKg(18);
	enc6.setRemet(cli6);
	enc6.setDest(cli7);
	quantR++;
	
	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustoKg(18);
	enc7.setRemet(cli7);
	enc7.setDest(cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print(); 
	custR += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		<< "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
