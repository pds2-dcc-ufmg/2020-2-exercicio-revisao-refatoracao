#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

#define NUM_CLIENTES 8
#define NUM_NORMAIS 5 // quantidade de encomendas normais
#define NUM_RELAMP 3 // quantidade de encomendas relâmpago

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

	vector<string> nomes = {"Thales", "Aristóteles", "Platão", "Sócrates", "Pitágoras", "Parmênides", "Empédocles", "Anaxágoras"};

	vector<string> enderecos = {
		"Rua dos Pré-Socráticos",
		"Avenida do Meio-Termo",
		"Praça das Formas",
		"Rua do Elenchus",
		"Praça dos Quadrados dos Catetos",
		"Rua do Não Ser",
		"Rua dos Quatro Elementos",
		"Avenida da Mente Cósmica"
	};

	vector<string> cidades = {
		"Miletus",
		"Atenas",
		"Atenas",
		"Atenas",
		"Samos",
		"Eleia",
		"Agrigento",
		"Clazômenas"
	};

	vector<string> estados = {
		"Ionia",
		"Ática",
		"Ática",
		"Ática",
		"Egeu",
		"Magna Grécia",
		"Sicília",
		"Jónia"
	};

	vector<string> ceps = {"548 a.C.", "384 a.C.", "348 a.C", "399 a.C.", "571 a.C.", "460 a.C.", "495 a.C.", "499 a.C."};

	vector<Cliente> clientes;
	for (int i = 0; i < NUM_CLIENTES; i++)
	{
		clientes.push_back(Cliente(nomes[i], enderecos[i], cidades[i], estados[i], ceps[i]));
	}

	vector<double> pesos_normal = {5, 10, 7, 2, 3};
	vector<double> pesos_relam = {13, 6, 8};
	double custo_normal = 12, custo_relam = 18;

	vector<EncomendaNormal> encomendas_normais;
	for (int i = 0; i < NUM_NORMAIS; i++)
	{
		encomendas_normais.push_back(EncomendaNormal(pesos_normal[i], custo_normal, clientes[i], clientes[i+1]));
	}

	vector<EncomendaRelampago> encomendas_relamp;
	for (int i = 0; i < NUM_RELAMP-1; i++)
	{
		encomendas_relamp.push_back(EncomendaRelampago(pesos_relam[i], custo_relam, clientes[i+NUM_NORMAIS], clientes[i+NUM_NORMAIS+1]));
	}
	encomendas_relamp.push_back(EncomendaRelampago(pesos_relam[NUM_RELAMP-1], custo_relam, clientes[NUM_RELAMP-1], clientes[0]));
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for (int i = 0; i < NUM_NORMAIS; i++)
	{
		custN += metodo_normal(encomendas_normais[i]);
	}

	for (int i = 0; i < NUM_RELAMP; i++)
	{
		custR += metodo_relampago(encomendas_relamp[i]);
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << NUM_NORMAIS
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << NUM_RELAMP
		 << "\nValor Total: " << custR
		 << endl;
	
}