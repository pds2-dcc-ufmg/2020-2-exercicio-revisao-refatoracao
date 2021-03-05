#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente clientes[] = {
		Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."),
		Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."),
		Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"),
		Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."),
		Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."),
		Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."),
		Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."),
		Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.")
	};

	Encomenda encomendas[] = {
		Encomenda(5, 12, clientes[0], clientes[1]),
		Encomenda(10, 12, clientes[1], clientes[2]),
		Encomenda(7, 12, clientes[2], clientes[3]),
		Encomenda(2, 12, clientes[3], clientes[4]),
		Encomenda(3, 12, clientes[4], clientes[5]),
		EncomendaRelampago(13, 18, clientes[5], clientes[6], 0.25)

	}

	int quantiN = 0;
	int quantR = 0;

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