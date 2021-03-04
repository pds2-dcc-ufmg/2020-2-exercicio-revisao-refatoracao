#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

#define NUM_CLIENTES 8

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

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0 = EncomendaNormal(5, 12, clientes[0], clientes[1]);
	quantN++;

	EncomendaNormal enc1 = EncomendaNormal(10, 12, clientes[1], clientes[2]);
	quantN++;

	EncomendaNormal enc2 = EncomendaNormal(7, 12, clientes[2], clientes[3]);
	quantN++;

	EncomendaNormal enc3 = EncomendaNormal(2, 12, clientes[3], clientes[4]);
	quantN++;

	EncomendaNormal enc4 = EncomendaNormal(3, 12, clientes[4], clientes[5]);
	quantN++;

	EncomendaRelampago enc5 = EncomendaRelampago(13, 18, clientes[5], clientes[6]);
	quantR++;

	EncomendaRelampago enc6 = EncomendaRelampago(6, 18, clientes[6], clientes[7]);
	quantR++;

	EncomendaRelampago enc7 = EncomendaRelampago(8, 18, clientes[7], clientes[0]);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	custN += metodo_normal(enc0);
	custN += metodo_normal(enc1);
	custN += metodo_normal(enc2);
	custN += metodo_normal(enc3);
	custN += metodo_normal(enc4);

	custR += metodo_relampago(enc5);
	custR += metodo_relampago(enc6);
	custR += metodo_relampago(enc7);
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}