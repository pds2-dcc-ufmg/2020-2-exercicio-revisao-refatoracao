#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){
	
	//cliente normal
	Cliente cli0("Thales","Rua dos Pré-Socráticos", "Miletus","Ionia", "548 a.C.");
	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5("Parmênides","Rua do Não Ser", "Eleia","Magna Grécia","460 a.C.");
	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	

	//encomenda normal
	EncomendaNormal enc0(5,12,cli0,cli1);

	EncomendaNormal enc1(10, 12, cli1, cli2);

	EncomendaNormal enc2(7, 12, cli2, cli3);

	EncomendaNormal enc3(2, 12, cli3, cli4);

	EncomendaNormal enc4(3, 12, cli4, cli5);

	//encomenda relampago
	EncomendaRelampago enc5(13, 18, cli5, cli6);

	EncomendaRelampago enc6(6, 18, cli6, cli7);

	EncomendaRelampago enc7(8, 18, cli7, cli0);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.getCustoTotal();
	cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.getCustoTotal();
	cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.getCustoTotal();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.getCustoTotal();
	cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.getCustoTotal();
	cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.getCustoTotal();
	cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.getCustoTotal();
	cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.getCustoTotal();
	cout << endl;
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << enc0.getQntd()
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << enc5.getQntd()
		 << "\nValor Total: " << custR
		 << endl;
	
}