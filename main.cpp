#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

double metodo_normal(EncomendaNormal enc)
{
	enc.calcula();
	enc.print();
	std::cout << endl;
	return enc.calcula();
}

double metodo_relampago(EncomendaRelampago enc)
{
	enc.calcula();
	enc.print();
	std::cout << endl;
	return enc.calcula();
}

int main(){

	Cliente cli0 = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1 = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2 = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli3 = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4 = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5 = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6 = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7 = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0 = EncomendaNormal(5, 12, cli0, cli1);
	quantN++;

	EncomendaNormal enc1 = EncomendaNormal(10, 12, cli1, cli2);
	quantN++;

	EncomendaNormal enc2 = EncomendaNormal(7, 12, cli2, cli3);
	quantN++;

	EncomendaNormal enc3 = EncomendaNormal(2, 12, cli3, cli4);
	quantN++;

	EncomendaNormal enc4 = EncomendaNormal(3, 12, cli4, cli5);
	quantN++;

	EncomendaRelampago enc5 = EncomendaRelampago(13, 18, cli5, cli6);
	quantR++;

	EncomendaRelampago enc6 = EncomendaRelampago(6, 18, cli6, cli7);
	quantR++;

	EncomendaRelampago enc7 = EncomendaRelampago(8, 18, cli7, cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	custN += metodo_normal(enc0);
	custN += metodo_normal(enc1);
	custN += metodo_normal(enc2);
	custN += metodo_normal(enc3);
	custN += metodo_normal(enc4);

	custR += metodo_relampago(enc5);
	custR += metodo_relampago(enc6);
	custR += metodo_relampago(enc7);
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}