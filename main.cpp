#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
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
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoTotalNormal = 0;
	double custoTotalRel = 0;

	enc0.printDados();
	custoTotalNormal += enc0.calculaPreco();

	enc1.printDados();
	custoTotalNormal += enc1.calculaPreco();

	enc2.printDados();
	custoTotalNormal += enc2.calculaPreco();

	enc3.printDados();
	custoTotalNormal += enc3.calculaPreco();
	
	enc4.printDados();
	custoTotalNormal += enc4.calculaPreco();
	
	enc5.printDados();
	custoTotalRel += enc5.calculaPreco();
	
	enc6.printDados();
	custoTotalRel += enc6.calculaPreco();

	enc7.printDados();
	custoTotalRel += enc7.calculaPreco();
	
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantNormal
		 << "\nValor Total: " << custoTotalNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantRelampago
		 << "\nValor Total: " << custoTotalRel
		 << endl;
	
}