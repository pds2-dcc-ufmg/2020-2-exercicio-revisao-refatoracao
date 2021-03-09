#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

#define MAX_CLIENTES 8
#define MAX_ENCOMENDAS_NORMAIS 5
#define MAX_ENCOMENDAS_RELAMPAGO 3

int main(){
	Cliente clientes[MAX_CLIENTES];
	EncomendaNormal encomendas_normais[MAX_ENCOMENDAS_NORMAIS];
	EncomendaRelampago encomendas_relampago[MAX_ENCOMENDAS_RELAMPAGO];
	int quantidade_encomendas_normais = 0;
	int quantidade_encomendas_relampago = 0;
	double custo_encomendas_normais = 0;
	double custo_encomendas_relampago = 0;


	//armazenar os clientes
	clientes[0] = Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	clientes[1] = Cliente("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	clientes[2] = Cliente("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	clientes[3] = Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	clientes[4] = Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	clientes[5] = Cliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	clientes[6] = Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	clientes[7] = Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	//armazenar encomendas normais
	encomendas_normais[0] = EncomendaNormal(5,12, clientes[0], clientes[1]);
	quantidade_encomendas_normais++;
	encomendas_normais[1] = EncomendaNormal(10,12, clientes[1], clientes[2]);
	quantidade_encomendas_normais++;
	encomendas_normais[2] = EncomendaNormal(7,12, clientes[2], clientes[3]);
	quantidade_encomendas_normais++;
	encomendas_normais[3] = EncomendaNormal(2,12, clientes[3], clientes[4]);
	quantidade_encomendas_normais++;
	encomendas_normais[4] = EncomendaNormal(3,12, clientes[4], clientes[5]);
	quantidade_encomendas_normais++;

	//armazenar encomendas relampago
	encomendas_relampago[0] = EncomendaRelampago(13,18, clientes[5], clientes[6]);
	quantidade_encomendas_relampago++;
	encomendas_relampago[1] = EncomendaRelampago(6,18, clientes[6], clientes[7]);
	quantidade_encomendas_relampago++;
	encomendas_relampago[2] = EncomendaRelampago(8,18, clientes[7], clientes[0]);
	quantidade_encomendas_relampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	for( int i = 0; i < MAX_ENCOMENDAS_NORMAIS; i++ ){
		encomendas_normais[i].print();
		custo_encomendas_normais += encomendas_normais[i].calcula();
		std::cout << std::endl;
	}
	for( int j = 0; j < MAX_ENCOMENDAS_RELAMPAGO; j++ ){
		encomendas_normais[j].print();
		custo_encomendas_relampago += encomendas_relampago[j].calcula();
		std::cout << std::endl;
	}

	std::cout << "\n>> Encomendas Normais <<";
	std::cout << "\nQuantidade: " << quantidade_encomendas_normais;
	std::cout << "\nValor Total: " << custo_encomendas_normais;
	std::cout << std::endl;
	std::cout << "\n>> Encomendas Relâmpago <<";
	std::cout << "\nQuantidade: " << quantidade_encomendas_relampago;
	std::cout << "\nValor Total: " << custo_encomendas_relampago;
	std::cout << std::endl;
	return 0;
}