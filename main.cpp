#include <iostream>
#include <string>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	// Inicialização de Clientes
	Cliente cli0 ("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cli1 ("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2 ("Platão","Praça das Formas","Atenas","Ática","348 a.C.");
	Cliente cli3 ("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4 ("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5 ("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C");
	Cliente cli6 ("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7 ("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	
	// Inicialização de Encomendas
	EncomendaNormal v1[5];
	EncomendaRelampago v2[3];

	EncomendaNormal enc0 (5,12,cli0,cli1);
	v1[0] = enc0;
	EncomendaNormal enc1(10,12,cli1,cli2);
	v1[1] = enc1;
	EncomendaNormal enc2(7,12,cli1,cli2);
	v1[2] = enc2;
	EncomendaNormal enc3(2,12,cli3,cli4);
	v1[3] = enc3;
	EncomendaNormal enc4(3,12,cli4,cli5);
	v1[4] = enc4;
	EncomendaRelampago enc5(13,18,cli5,cli6);
	v2[0] = enc5;
	EncomendaRelampago enc6(6,18,cli6,cli7);
	v2[1] = enc6;
	EncomendaRelampago enc7(8,18,cli7,cli0);
	v2[2] = enc7;
	
	// Impressao dos dados das encomendas e Calculo de custos
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;
	
	// para encomendas normais
	for(int i=0 ;i<5; i++) {
		v1[i].print();
		custN += v1[i].calcula();
		std::cout << endl;
	}
	
	// para encomendas relampago
	for(int i=0; i<3; i++ {
		v2[i].print();
		custR += v2[i].calcula();
		std::cout << endl;
	}
	 
	// Impressao das quantidades e custo total das encomendas
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
