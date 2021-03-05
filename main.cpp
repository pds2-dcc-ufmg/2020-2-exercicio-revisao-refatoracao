#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "Relatorio.hpp"
#include <vector>
using namespace std;

int main(){
	
	vector<Cliente> cli;

	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	cli.push_back(cli0);
	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática", "384 a.C.");
	cli.push_back(cli1);
	Cliente cli2( "Platão","Praça das Formas","Atenas","Ática","348 a.C");
	cli.push_back(cli2);
	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	cli.push_back(cli3);
	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	cli.push_back(cli4);
	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	cli.push_back(cli5);
	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C." );
	cli.push_back(cli6);
	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	cli.push_back(cli7);

	vector<EncomendaNormal> encN;
	vector<EncomendaRelampago> encR;

	EncomendaNormal enc0(5, 12,cli[0],cli[1]);
	encN.push_back(enc0);
	EncomendaNormal enc1(10,12,cli[1],cli[2]);
	encN.push_back(enc1);
	EncomendaNormal enc2(7,12,cli[2],cli[3]);
	encN.push_back(enc2);
	EncomendaNormal enc3(2,12,cli[3],cli[4]);
	encN.push_back(enc3);
	EncomendaNormal enc4(3,12,cli[4],cli[5]);
	encN.push_back(enc4);
	EncomendaRelampago enc5(13,18,cli[5],cli[6]);
	encR.push_back(enc5);
	EncomendaRelampago enc6(6,18,cli[6],cli[7]);
	encR.push_back(enc6);
	EncomendaRelampago enc7(8,18,cli[7],cli[0]);
	encR.push_back(enc7);


	Relatorio rel( encN.size(), encR.size(), &cli[0], &encN[0] , &encR[0]);
	rel.printTodas();
	rel.printN();
	rel.printR();
	
}