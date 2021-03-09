#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

int main(){
	Cliente cli0 = Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cli1 = Cliente("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2 = Cliente("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cli3 = Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4 = Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5 = Cliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	Cliente cli6 = Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7 = Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	EncomendaNormal enc0 = EncomendaNormal(5,12,0,cli0,cli1);
	EncomendaNormal enc1 = EncomendaNormal(10,12,0,cli1,cli2);
	EncomendaNormal enc2 = EncomendaNormal(7,12,0,cli2,cli3);
	EncomendaNormal enc3 = EncomendaNormal(2,12,0,cli3,cli4);
	EncomendaNormal enc4 = EncomendaNormal(3,12,0,cli4,cli5);
	std::vector<EncomendaNormal> encomendasNormais = {enc0, enc1, enc2, enc3, enc4};

	EncomendaRelampago enc5 = EncomendaRelampago(13,18,0,cli5,cli6);
	EncomendaRelampago enc6 = EncomendaRelampago(6,18,0,cli6,cli7);
	EncomendaRelampago enc7 = EncomendaRelampago(8,18,0,cli7,cli0);
	std::vector<EncomendaRelampago> encomendasRelampago = {enc5, enc6, enc7};

	int quantN = encomendasNormais.size();
	int quantR = encomendasRelampago.size();
	std::cout << "\n>> Relatório de encomendas <<" << endl;
	double custN = 0;
	double custR = 0;

	for(int i = 0; i < 5; i++){
		encomendasNormais[i].print();
		custN += encomendasNormais[i].calcula();
	}
	for(int j = 0; j < 3; j++){
		encomendasRelampago[j].print();
		custR += encomendasRelampago[j].calcula();
	}
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
}