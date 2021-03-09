#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente *cli = new Cliente[8];
	
	cli[0].registro("Thalles","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	cli[1].registro("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	cli[2].registro("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	cli[3].registro("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	cli[4].registro("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	cli[5].registro("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	cli[6].registro("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	cli[7].registro("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	int quantEncomendaNormal = 0;
	int quantEncomendaRelampago = 0;
	
	EncomendaNormal enc0 (5,12,cli[0],cli[1]);
	quantEncomendaNormal++;
	
	EncomendaNormal enc1 (10,12,cli[1],cli[2]);
	quantEncomendaNormal++;

	EncomendaNormal enc2 (7,12,cli[2], cli[3]);
	quantEncomendaNormal++;

	EncomendaNormal enc3 (2,12,cli[3],cli[4]);
	quantEncomendaNormal++;

	EncomendaNormal enc4 (3,12,cli[4],cli[5]);
	quantEncomendaNormal++;

	EncomendaRelampago enc5 (13,18,cli[5],cli[6]);
	quantEncomendaRelampago++;

	EncomendaRelampago enc6 (6,18,cli[6],cli[7]);
	quantEncomendaRelampago++;

	EncomendaRelampago enc7 (8,18,cli[7],cli[0]);
	quantEncomendaRelampago++;
		
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoTotalEncomendaNormal = 0;
	double custoTotalEncomendaRelampago = 0;
	
	enc0.calculaCustoTotal();
	enc0.print();
	custoTotalEncomendaNormal += enc0.calculaCustoTotal();
	std::cout << endl;
  
	enc1.calculaCustoTotal();
	enc1.print();
	custoTotalEncomendaNormal += enc1.calculaCustoTotal();
	std::cout << endl;

	enc2.calculaCustoTotal();
	enc2.print();
	custoTotalEncomendaNormal += enc2.calculaCustoTotal();
	std::cout << endl;

	enc3.calculaCustoTotal();
	enc3.print();
	custoTotalEncomendaNormal += enc3.calculaCustoTotal();
	std::cout << endl;

	enc4.calculaCustoTotal();
	enc4.print();
	custoTotalEncomendaNormal += enc4.calculaCustoTotal();
	std::cout << endl;

	enc5.calculaCustoTotal();
	enc5.print();
	custoTotalEncomendaRelampago += enc5.calculaCustoTotal();
	std::cout << endl;

	enc6.calculaCustoTotal();
	enc6.print();
	custoTotalEncomendaRelampago += enc6.calculaCustoTotal();
	std::cout << endl;

	enc7.calculaCustoTotal();
	enc7.print();
	custoTotalEncomendaRelampago += enc7.calculaCustoTotal();
	std::cout << endl;
		
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantEncomendaNormal
		 << "\nValor Total: " << custoTotalEncomendaNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantEncomendaRelampago
		 << "\nValor Total: " << custoTotalEncomendaRelampago
		 << endl;
}
