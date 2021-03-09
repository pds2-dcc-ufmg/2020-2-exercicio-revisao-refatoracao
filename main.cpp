#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

#define NUM_CLIENTES 8 // quantidade total de clientes
#define NUM_NORMAIS 5 // quantidade de encomendas normais
#define NUM_RELAMP 3 // quantidade de encomendas relâmpago

int main()
{
	// Criação de vetores com as informações dos clientes
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

	// Criação e inicialização do vetor de clientes
	vector<Cliente> clientes;
	for (int i = 0; i < NUM_CLIENTES; i++)
	{
		clientes.push_back(Cliente(nomes[i], enderecos[i], cidades[i], estados[i], ceps[i]));
	}

	// Criação de vetores com as informações das encomendas
	vector<double> peso_normal = {5, 10, 7, 2, 3};
	vector<double> peso_relamp = {13, 6, 8};
	double custo_normal = 12, custo_relamp = 18;

	// Criação e inicialização do vetor de encomendas normais
	vector<EncomendaNormal> encomendas_normais;
	for (int i = 0; i < NUM_NORMAIS; i++)
	{
		encomendas_normais.push_back(EncomendaNormal(peso_normal[i], custo_normal, clientes[i], clientes[i+1]));
	}

	// Criação e inicialização do vetor de encomendas relâmpago
	vector<EncomendaRelampago> encomendas_relamp;
	for (int i = 0; i < NUM_RELAMP-1; i++)
	{
		encomendas_relamp.push_back(EncomendaRelampago(peso_relamp[i], custo_relamp, clientes[i+NUM_NORMAIS], clientes[i+NUM_NORMAIS+1]));
	}
	encomendas_relamp.push_back(EncomendaRelampago(peso_relamp[NUM_RELAMP-1], custo_relamp, clientes[NUM_NORMAIS+NUM_RELAMP-1], clientes[0]));
	
	// Impressão das informações das encomendas e dos respectivos clientes envolvidos
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_total_normal = 0; // Custo total das encomendas normais
	double custo_total_relam = 0; // Custo total das encomendas relâmpago

	for (auto & enc : encomendas_normais)
	{
		custo_total_normal += enc.metodo();
	}

	for (auto & enc: encomendas_relamp)
	{
		custo_total_relam += enc.metodo();
	}

	std::cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: " << NUM_NORMAIS
			  << "\nValor Total: " << custo_total_normal
			  << std::endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: " << NUM_RELAMP
			  << "\nValor Total: " << custo_total_relam
			  << std::endl;
}