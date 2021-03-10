#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");

	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");

	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");

	Cliente cli3( "Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");

	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");

	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");

	Cliente cli6("Empédocles","Rua dos Quatro Elementos", "Agrigento","Sicília","495 a.C.");

	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0(5,12,cli0,cli1);
	
	quantN++;

	EncomendaNormal enc1(10,12,cli1,cli2);
	
	quantN++;

	EncomendaNormal enc2(7,12,cli2,cli3);
	
	quantN++;

	EncomendaNormal enc3(2,12,cli3,cli4);
	
	quantN++;

	EncomendaNormal enc4(3,12,cli4,cli5);
	
	quantN++;

	EncomendaRelampago enc5(13,18,cli5,cli6);

	quantR++;

	EncomendaRelampago enc6(6,18,cli6,cli7);

	quantR++;

	EncomendaRelampago enc7(8,18,cli7,cli0);

	quantR++;
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
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