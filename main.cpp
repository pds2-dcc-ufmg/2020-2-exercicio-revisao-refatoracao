#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main()
{

	Cliente *cli = new Cliente[8];

	cli[0] = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	cli[1] = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	cli[2] = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	cli[3] = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	cli[4] = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	cli[5] = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	cli[6] = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	cli[7] = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	// Informações de todos os clientes

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal *encN = new EncomendaNormal[5];
	EncomendaRelampago *encR = new EncomendaRelampago[3];

	encN[0] = EncomendaNormal(5, 12, cli[0], cli[1]);
	quantN++;

	encN[1] = EncomendaNormal(10, 12, cli[1], cli[2]);
	quantN++;

	encN[2] = EncomendaNormal(7, 12, cli[2], cli[3]);
	quantN++;

	encN[3] = EncomendaNormal(2, 12, cli[3], cli[4]);
	quantN++;

	encN[4] = EncomendaNormal(3, 12, cli[4], cli[5]);
	quantN++;
	// Informações de todas as entregas Normais

	encR[0] = EncomendaRelampago(13, 18, cli[5], cli[6]);
	quantR++;

	encR[1] = EncomendaRelampago(6, 18, cli[6], cli[7]);
	quantR++;

	encR[2] = EncomendaRelampago(8, 18, cli[7], cli[0]);
	quantR++;
	// Informações de todas as entregas Relampago

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for (int i; i < 5; i++)
	{
		encN[i].printEncomenda();
		custN += encN[i].calcula();
		std::cout << endl;
	} // Calcula o preço total de todas as entregas Normais

	for (int i; i < 3; i++)
	{
		encR[i].printEncomenda();
		custR += encR[i].calcula();
		std::cout << endl;
	} // Calcula o preço total de todas as entregas Relampago

	std::cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: " << quantN
			  << "\nValor Total: " << custN
			  << endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: " << quantR
			  << "\nValor Total: " << custR
			  << endl;
	// Imprime todas a quantidade e preço total de cada tipo de entrega

	delete cli;
	delete encN;
	delete encR;
}
