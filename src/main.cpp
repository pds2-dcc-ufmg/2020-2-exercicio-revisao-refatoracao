#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main()
{
	const int QUANT_CLIENTES = 8;
	const int QUANT_ENCOMENDAS_NORMAIS = 5;
	const int QUANT_ENCOMENDAS_RELAMPAGO = 3;

	Cliente::Cliente cli0 = Cliente::Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente::Cliente cli1 = Cliente::Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente::Cliente cli2 = Cliente::Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente::Cliente cli3 = Cliente::Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente::Cliente cli4 = Cliente::Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente::Cliente cli5 = Cliente::Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente::Cliente cli6 = Cliente::Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente::Cliente cli7 = Cliente::Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	Cliente::Cliente clientes[QUANT_CLIENTES] = {cli0, cli1, cli2, cli3, cli4, cli5, cli6, cli7};

	Encomenda::EncomendaNormal enc0 = Encomenda::EncomendaNormal(5, 12, cli0, cli1);
	Encomenda::EncomendaNormal enc1 = Encomenda::EncomendaNormal(10, 12, cli1, cli2);
	Encomenda::EncomendaNormal enc2 = Encomenda::EncomendaNormal(7, 12, cli2, cli3);
	Encomenda::EncomendaNormal enc3 = Encomenda::EncomendaNormal(2, 12, cli3, cli4);
	Encomenda::EncomendaNormal enc4 = Encomenda::EncomendaNormal(3, 12, cli4, cli5);
	Encomenda::EncomendaNormal encomendas_normais[QUANT_ENCOMENDAS_NORMAIS] = {enc0, enc1, enc2, enc3, enc4};

	Encomenda::EncomendaRelampago enc5 = Encomenda::EncomendaRelampago(13, 18, cli5, cli6);
	Encomenda::EncomendaRelampago enc6 = Encomenda::EncomendaRelampago(6, 18, cli6, cli7);
	Encomenda::EncomendaRelampago enc7 = Encomenda::EncomendaRelampago(8, 18, cli7, cli0);
	Encomenda::EncomendaRelampago encomendas_relampago[QUANT_ENCOMENDAS_RELAMPAGO] = {enc5, enc6, enc7};

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custo_encomendas_normais = 0;
	double custo_encomendas_relampago = 0;

	for (int i = 0; i < QUANT_ENCOMENDAS_NORMAIS; ++i)
	{
		encomendas_normais[i].getCustoTotal();
		encomendas_normais[i].print();
		custo_encomendas_normais += encomendas_normais[i].getCustoTotal();
		std::cout << std::endl;
	}

	for (int i = 0; i < QUANT_ENCOMENDAS_RELAMPAGO; ++i)
	{
		encomendas_relampago[i].getCustoTotal();
		encomendas_relampago[i].print();
		custo_encomendas_relampago += encomendas_relampago[i].getCustoTotal();
		std::cout << std::endl;
	}

	std::cout << "\n>> Encomendas Normais <<"
						<< "\nQuantidade: " << QUANT_ENCOMENDAS_NORMAIS
						<< "\nValor Total: " << custo_encomendas_normais
						<< std::endl
						<< "\n>> Encomendas Relâmpago <<"
						<< "\nQuantidade: " << QUANT_ENCOMENDAS_RELAMPAGO
						<< "\nValor Total: " << custo_encomendas_relampago
						<< std::endl;
}