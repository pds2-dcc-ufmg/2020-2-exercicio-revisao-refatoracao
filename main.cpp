#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <string>
#include <typeinfo>

using namespace std;


//void CadastroClientes()



int main()
{
	Cliente clientes[9];
	int quantEncNormais = 5;
	int quantEncRelampagos = 3;
	int quantClientes = 8;
	string nomesClientes[] = {"Thales", "Aristóteles", "Platão", "Sócrates" , "Pitágoras", "Parmênides", "Empédocles", "Anaxágoras"};
	string enderecosClientes[] = {"Rua dos Pré-Socráticos", "Avenida do Meio-Termo", "Praça das Formas", "Rua do Elenchus", "Praça dos Quadrados dos Catetos", "Rua do Não Ser", "Rua dos Quatro Elementos", "Avenida da Mente Cósmica"};
	string cidadeClientes[] = {"Miletus", "Atenas", "Atenas", "Atenas", "Samos", "Eleia", "Agrigento", "Clazômenas"};
	string estadoClientes[] = {"Ionia", "Ática", "Ática", "Ática", "Egeu", "Magna Grécia", "Sicília", "Jónia"};
	string cepClientes[] = {"548 a.C.", "384 a.C.", "384 a.C.", "399 a.C.", "571 a.C.", "460 a.C.", "495 a.C.", "499 a.C."};

	for (int i = 0; i < quantClientes; i++)
	{
		//Cliente atual(nomesClientes[i], enderecosClientes[i], cidadeClientes[i], estadoClientes[i], cepClientes[i]

		clientes[i].setNome(nomesClientes[i]);
		clientes[i].setEndereco(enderecosClientes[i]);
		clientes[i].setCidade(cidadeClientes[i]);
		clientes[i].setEstado(estadoClientes[i]);
		clientes[i].setCep(cepClientes[i]);
	}
	
	EncomendaNormal EncomendasNormais[quantEncNormais+1];
	double pesoEncNormais[] = {5, 10, 7, 2, 3};
	double custoKgEncNormais = 12;
	int remet = 0;
	int dest = 0;

	for (int i = 0; i < quantEncNormais; i++)
	{
		remet = i;
		dest = i+1;

		EncomendasNormais[i].setPeso(pesoEncNormais[i]);
		EncomendasNormais[i].setCustokg(custoKgEncNormais);
		EncomendasNormais[i].setRemetente(clientes[remet]);
		EncomendasNormais[i].setDest(clientes[dest]);
	}

	EncomendaRelampago EncomendasRelampagos[quantEncRelampagos+1];
	double pesoEncRelampagos[] = {13, 6, 8};
	double custoKgEncRelampago = 18;

	for (int i = 0; i < quantEncRelampagos; i++)
	{
		if(i+5 == 7)
		{
			remet = 7;
			dest = 0;
		}
		else
		{
			remet = i + 5;
			dest = remet + 1; 
		}

		EncomendasRelampagos[i].setPeso(pesoEncRelampagos[i]);
		EncomendasRelampagos[i].setCustokg(custoKgEncRelampago);
		EncomendasRelampagos[i].setRemetente(clientes[remet]);
		EncomendasRelampagos[i].setDest(clientes[dest]);
		
	}
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;
	double custEncNormais = 0;
	double custEncRelampagos = 0;


	for (int j = 0; j < quantEncNormais; j++)
	{
		//EncomendasNormais[j].calculaCustoFinal;
		custEncNormais += EncomendasNormais[j].calculaCustoFinal();
		EncomendasNormais[j].printEncomendaNormal();
		std::cout << endl;
	}

	for (int j = 0; j < quantEncRelampagos; j++)
	{
		//EncomendasNormais[j].calculaCustoFinal;
		custEncRelampagos += EncomendasNormais[j].calculaCustoFinal();
		EncomendasRelampagos[j].printEncomendaRelampago();
		std::cout << endl;
	}

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantEncNormais
		 << "\nValor Total: " << custEncNormais
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantEncRelampagos
		 << "\nValor Total: " << custEncRelampagos
		 << endl;
}