#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){
	double custo_total_normal=0;
	double custo_total_relampago=0;

	Cliente cli0("Thales","Rua dos Pré-Socráticos", "Miletus","Ionia", "548 a.C.");
	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5("Parmênides","Rua do Não Ser", "Eleia","Magna Grécia","460 a.C.");
	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	EncomendaNormal enc0(5,12,cli0,cli1);
	EncomendaNormal enc1(10, 12, cli1, cli2);
	EncomendaNormal enc2(7, 12, cli2, cli3);
	EncomendaNormal enc3(2, 12, cli3, cli4);	
	EncomendaNormal enc4(3, 12, cli4, cli5);
	
	EncomendaRelampago enc5(13, 18, cli5, cli6);
	EncomendaRelampago enc6(6, 18, cli6, cli7);
	EncomendaRelampago enc7(8, 18, cli7, cli0);
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	enc0.calcula();
	enc0.print();
	custo_total_normal+=enc0.get_custo_total();
	cout << endl;

	enc1.calcula();
	enc1.print();
	custo_total_normal+=enc1.get_custo_total();
	cout << endl;

	enc2.calcula();
	enc2.print();
	custo_total_normal+=enc2.get_custo_total();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custo_total_normal+=enc3.get_custo_total();
	cout << endl;

	enc4.calcula();
	enc4.print();
	custo_total_normal+=enc4.get_custo_total();
	cout << endl;

	enc5.calcula();
	enc5.print();
	custo_total_relampago+=enc5.get_custo_total();
	cout << endl;

	enc6.calcula();
	enc6.print();
	custo_total_relampago+=enc6.get_custo_total();
	cout << endl;

	enc7.calcula();
	enc7.print();
	custo_total_relampago+=enc7.get_custo_total();
	cout << endl;
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << enc4.get_quantidade()
		 << "\nValor Total: " << custo_total_normal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << enc7.get_quantidade()
		 << "\nValor Total: " << custo_total_relampago
		 << endl;
	
}