#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main()
{
	// Informações a de cada cliente
	std::vector<std::string> nomes = {"Thales", "Aristóteles", "Platão", "Sócrates", "Pitágoras", "Parmênides", "Empédocles", "Anaxágoras"};
	std::vector<std::string> enderecos = {"Rua dos Pré-Socráticos", "Avenida do Meio-Termo", "Praça das Formas", "Rua do Elenchus", "Praça dos Quadrados dos Catetos", "Rua do Não Ser", "Rua dos Quatro Elementos", "Avenida da Mente Cósmica"};
	std::vector<std::string> cidades = {"Miletus", "Atenas", "Atenas", "Atenas", "Samos", "Eleia", "Agrigento", "Clazômenas"};
	std::vector<std::string> estados = {"Ionia", "Ática", "Ática", "Ática", "Egeu", "Magna Grécia", "Sicília", "Jónia"};
	std::vector<std::string> ceps = {"548 a.C.", "384 a.C.", "348 a.C", "399 a.C.", "571 a.C.", "460 a.C.", "495 a.C.", "499 a.C."};
	// Inserção dos dados dos clientes no vetor
	std::vector<Cliente> clientes;
	int total_clientes = 8;
	for (int i = 0; i < total_clientes; i++)
	{
		clientes.push_back(Cliente(nomes[i], enderecos[i], cidades[i], estados[i], ceps[i]));
	};

	std::vector<double> pesos_encomendas = {5, 10, 7, 2, 3, 13, 6, 8};

	std::vector<EncomendaNormal> encomendas_normais;
	int num_normais = 5;
	double custo_normal = 12.0;

	std::vector<EncomendaRelampago> encomendas_relampago;
	int num_relampagos = 3;
	double custo_relampago = 18.0;
	// Inserção dos dados das encomendas normais nos vetores
	for (int i = 0; i < num_normais; i++)
	{
		encomendas_normais.push_back(EncomendaNormal(pesos_encomendas[i],
													 custo_normal,
													 clientes[i],
													 clientes[i + 1]));
	};
	// Inserção dos dados das relampagos normais nos vetores
	for (int i = num_normais - 1; i < num_relampagos + num_normais - 1; i++)
	{
		encomendas_relampago.push_back(EncomendaRelampago(pesos_encomendas[i],
														  custo_relampago,
														  clientes[i],
														  clientes[i + 1]));
	};
	encomendas_relampago.push_back(EncomendaRelampago(
		pesos_encomendas[num_relampagos + num_normais - 1],
		custo_relampago,
		clientes[num_relampagos + num_normais - 1],
		clientes[0]));

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_normal_total = 0;
	double custo_relampago_total = 0;
	// Cálculo do custo total e impressão das informações de encomendas normais
	for (auto i : encomendas_normais)
	{
		custo_normal_total += i.resultado();
	}
	// Cálculo do custo total e impressão das informações de encomendas relampagos
	for (auto i : encomendas_relampago)
	{
		custo_relampago_total += i.resultado();
	}
	std::cout << "\n>> Encomendas Normais <<"
			  << "\nQuantidade: " << num_normais
			  << "\nValor Total: " << custo_normal_total
			  << std::endl
			  << "\n>> Encomendas Relâmpago <<"
			  << "\nQuantidade: " << num_relampagos
			  << "\nValor Total: " << custo_relampago_total
			  << std::endl;
}