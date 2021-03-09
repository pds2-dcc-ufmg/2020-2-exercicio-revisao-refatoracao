#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

    Cliente cli3("Socrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C");

	Cliente cli5("Paramênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460a.C");

	Cliente cli6("Empédocles", "RUa dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C");

	int quantN = 0;
	int quantR = 0;
	Encomenda lista[8];

	EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOkg = 12;
	enc0.remetente = cli0;
	enc0.dest = cli1;
	quantN++;

	EncomendaNormal enc1;
	enc1.PESO = 10;
	enc1.CUSTOkg = 12;
	enc1.remetente = cli1;
	enc1.dest = cli2;
	quantN++;

	EncomendaNormal enc2;
	enc2.PESO = 7;
	enc2.CUSTOkg = 12;
	enc2.remetente = cli2;
	enc2.dest = cli3;
	quantN++;

	EncomendaNormal enc3;
	enc3.PESO = 2;
	enc3.CUSTOkg = 12;
	enc3.remetente = cli3;
	enc3.dest = cli4;
	quantN++;

	EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOkg = 12;
	enc4.remetente = cli4;
	enc4.dest = cli5;
	quantN++;

	EncomendaRelampago enc5;
	enc5.PESO = 13;
	enc5.CUSTOkg = 18;
	enc5.remetente = cli5;
	enc5.dest = cli6;
	quantR++;

	EncomendaRelampago enc6;
	enc6.PESO = 6;
	enc6.CUSTOkg = 18;
	enc6.remetente = cli6;
	enc6.dest = cli7;
	quantR++;

	EncomendaRelampago enc7;
	enc7.PESO = 8;
	enc7.CUSTOkg = 18;
	enc7.remetente = cli7;
	enc7.dest = cli0;
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