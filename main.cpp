#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente *cli0= new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente *cli1= new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente *cli2= new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente *cli3= new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente *cli4= new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente *cli5= new Cliente("Parmênides", "Rua do Não Ser", "Eleia",  "Magna Grécia", "460 a.C.");

	Cliente *cli6= new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente *cli7= new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 5;
	int quantR = 3;
	EncomendaNormal encN[5];
	EncomendaRelampago encR[3];
	
	encN[0]= new EncomendaNormal(5, 12, cli0, cli1);

	encN[1]= new EncomendaNormal(10, 12, cli1, cli2);

	encN[2]= new EncomendaNormal(7, 12, cli2, cli3);

	encN[3]= new Encomenda Normal(2, 12, cli3, cli4);

	encN[4]= new EncomendaNormal(3, 12, cli4, cli5);

	encR[0]= new EncomendaRelampago(13, 18, cli5, cli6);
	
	encR[1]= new EncomendaRelampago(6, 18, cli6, cli7);

	encR[2]= new EncomendaRelampago(8, 18, cli7, cli0);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for(i=0; i<5; i++){
	
	encN[i].calcula();
	encN[i].print();
	custN += encN[i].calcula();
	std::cout << endl;
	}
	
	for(i=0; i<3; i++){
	
	encR[i].calcula();
	encR[i].print();
	custR += encR[i].calcula();
	std::cout << endl;
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
