#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente* cli0 = new Cliente(
    "Thales",
    "Rua dos Pré-Socráticos",
    "Miletus",
    "Ionia",
    "548 a.C.");

  Cliente* cli1 = new Cliente(
    "Aristóteles",
    "Avenida do Meio-Termo",
    "Atenas",
    "Ática",
    "384 a.C.");

  Cliente* cli2 = new Cliente (
    "Platão",
    "Praça das Formas",
    "Atenas",
    "Ática",
    "348 a.C");

  Cliente* cli3 = new Cliente (
    "Sócrates",
    "Rua do Elenchus",
    "Atenas",
    "Ática",
    "399 a.C.");

  Cliente* cli4 = new Cliente (
    "Pitágoras",
    "Praça dos Quadrados dos Catetos",
    "Samos",
    "Egeu",
    "571 a.C.");

  Cliente* cli5 = new Cliente (
    "Parmênides",
    "Rua do Não Ser",
    "Eleia",
    "Magna Grécia",
    "460 a.C.");

  Cliente* cli6 = new Cliente (
    "Empédocles",
    "Rua dos Quatro Elementos",
    "Agrigento",
    "Sicília",
    "495 a.C.");

  Cliente* cli7 = new Cliente (
    "Anaxágoras",
    "Avenida da Mente Cósmica",
    "Clazômenas",
    "Jónia",
    "499 a.C.");

	int quantN = 5;
	int quantR = 3;

  double custN = 0;
	double custR = 0;

  EncomendaNormal* enc0 = new EncomendaNormal(5, 12, *cli0, *cli1);
  EncomendaNormal* enc1 = new EncomendaNormal(10, 12, *cli1, *cli2);
  EncomendaNormal* enc2 = new EncomendaNormal(7, 12, *cli2, *cli3);
  EncomendaNormal* enc3 = new EncomendaNormal(2, 12, *cli3, *cli4);
  EncomendaNormal* enc4 = new EncomendaNormal(3, 12, *cli4, *cli5);
  EncomendaRelampago* enc5 = new EncomendaRelampago(13, 18, *cli5, *cli6);
  EncomendaRelampago* enc6 = new EncomendaRelampago(6, 18, *cli6, *cli7);
  EncomendaRelampago* enc7 = new EncomendaRelampago(8, 18, *cli7, *cli0);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	enc0->print();
	custN += enc0->getTotal();
	std::cout << endl;

	enc1->print();
	custN += enc1->getTotal();
	std::cout << endl;

	enc2->print();
	custN += enc2->getTotal();
	std::cout << endl;

	enc3->print();
	custN += enc3->getTotal();
	std::cout << endl;

	enc4->print();
	custN += enc4->getTotal();
	std::cout << endl;

	enc5->print();
	custR += enc5->getTotal();
	std::cout << endl;

	enc6->print();
	custR += enc6->getTotal();
	std::cout << endl;

	enc7->print();
	custR += enc7->getTotal();
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