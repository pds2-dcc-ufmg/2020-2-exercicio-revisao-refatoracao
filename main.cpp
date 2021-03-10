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
	
	std::vector<Encomenda> encomendas;
	
	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustoKg(12);
	enc0.setRemet(cli0);
	enc0.setDest(cli1);
	encomendas.push_back(enc0);
	quantN++;
	
	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustoKg(12);
	enc1.setRemet(cli1);
	enc1.setDest(cli2);
	encomendas.push_back(enc1);
	quantN++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustoKg(12);
	enc2.setRemet(cli2);
	enc2.setDest(cli3);
	encomendas.push_back(enc2);
	quantN++;
	
	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustoKg(12);
	enc3.setRemet(cli3);
	enc3.setDest(cli4);
	encomendas.push_back(enc3);
	quantN++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustoKg(12);
	enc4.setRemet(cli4);
	enc4.setDest(cli5);
	encomendas.push_back(enc4);
	quantN++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustoKg(18);
	enc5.setRemet(cli5);
	enc5.setDest(cli6);
	encomendas.push_back(enc5);
	quantR++;
	
	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustoKg(18);
	enc6.setRemet(cli6);
	enc6.setDest(cli7);
	encomendas.push_back(enc6);
	quantR++;
	
	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustoKg(18);
	enc7.setRemet(cli7);
	enc7.setDest(cli0);
	encomendas.push_back(enc7);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;
	int counter = 0;
	
	for (Encomenda e : encomendas) {
		e.calculaValor();
		e.print();
		std::cout << endl;
		if (counter >= 0 && counter <= 4) {
			custN += e.calculaValor();
		}
		else {
			custR += e.calculaValor();
		}
		counter++;
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
