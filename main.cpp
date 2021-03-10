#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

#define CLIENTES 8
#define ENCOMENDAS_NORMAIS 5
#define ENCOMENDAS_RELAMPAGO 3

int main()
{

	Cliente *clientes[CLIENTES];

	clientes[0] = new Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	clientes[1] = new Cliente("Aristóteles","Avenida do Meio-Termo","Atenas","Ática", "384 a.C.");
	clientes[2] = new Cliente( "Platão","Praça das Formas","Atenas","Ática","348 a.C");
	clientes[3] = new Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	clientes[4] = new Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	clientes[5] = new Cliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	clientes[6] = new Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C." );
	clientes[7] = new Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	EncomendaNormal *encNormal[ENCOMENDAS_NORMAIS];
	EncomendaRelampago *encRelampago[ENCOMENDAS_RELAMPAGO];

	encNormal[0] = new EncomendaNormal(5, 12,clientes[0],clientes[1]);
	encNormal[1] = new EncomendaNormal(10,12,clientes[1],clientes[2]);
	encNormal[2] = new EncomendaNormal(7,12,clientes[2],clientes[3]);
	encNormal[3] = new EncomendaNormal(2,12,clientes[3],clientes[4]);
	encNormal[4] = new EncomendaNormal(3,12,clientes[4],clientes[5]);
	encRelampago[0] = new EncomendaRelampago(13,18,clientes[5],clientes[6]);
	encRelampago[1] = new EncomendaRelampago(6,18,clientes[6],clientes[7]);
	encRelampago[2] = new EncomendaRelampago(8,18,clientes[7],clientes[0]);

	double custNormal = 0;
	double custRelampago = 0;

	cout << "\n>> Relatório de encomendas <<" << endl;

	for (int i = 0; i < ENCOMENDAS_NORMAIS; i++){
		encNormal[i]->calculaCustoTotal();
		encNormal[i]->print();
		cout << endl;
		custNormal += encNormal[i]->calculaCustoTotal();
	}
	for (int i = 0; i < ENCOMENDAS_RELAMPAGO; i++){
		encRelampago[i]->calculaCustoTotal();
		encRelampago[i]->print();
		cout << endl;
		custRelampago += encRelampago[i]->calculaCustoTotal();
	}
	
	cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: " << ENCOMENDAS_NORMAIS
			  << "\nValor Total: " << custNormal
			  << endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: " << ENCOMENDAS_RELAMPAGO
			  << "\nValor Total: " << custRelampago
			  << endl;
}
