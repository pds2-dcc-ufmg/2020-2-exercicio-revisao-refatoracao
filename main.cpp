#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.c.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Terma", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Emédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0; //quantN conta quantas vezes o pacote normal foi usado
	int quantR = 0; //quantR conta quantas vezes o pacote relâmpago foi usado

	EncomendaNormal enc0 (5, 12, cli0, cli1);
	quantN++;

	EncomendaNormal enc1 (10, 12, cli1, cli2);
	quantN++;

	EncomendaNormal enc2 (7, 12, cli2, cli3);
	quantN++;

	EncomendaNormal enc3 (2, 12, cli3, cli4);
	quantN++;

	EncomendaNormal enc4 (3, 12, cli4, cli5);
	quantN++;

	EncomendaRelampago enc5 (13, 18, cli5, cli6);
	quantR++;

	EncomendaRelampago enc6 (6, 18, cli6, cli7);
	quantR++;

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	quantR++;
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0; // custN é o custo total de encomendas normalmente
	double custR = 0; // custR é o custo total de encomendas relâmpago

	enc0.executarTudo();
	custN = custN + enc0.calcula();

	enc1.executarTudo();
	custN = custN + enc1.calcula();

	enc2.executarTudo();
	custN = custN + enc2.calcula();

	enc3.executarTudo();
	custN = custN + enc3.calcula();

	enc4.executarTudo();
	custN = custN + enc4.calcula();

	enc5.executarTudo();
	custN = custN + enc5.calcula();

	enc6.executarTudo();
	custN = custN + enc6.calcula();

	enc7.executarTudo();
	custN = custN + enc7.calcula();
	
	cout << endl << ">> Encomendas Normais <<" 
		 << endl << "Quantidade: " << quantN
		 << endl << "Valor Total: " << custN
		 << endl
		 << endl << ">> Encomendas Relâmpago <<" 
		 << endl << "Quantidade: " << quantR
		 << endl << "Valor Total: " << custR
		 << endl;
		 
}