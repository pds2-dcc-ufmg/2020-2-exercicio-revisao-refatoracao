#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente *cliente = new Cilente[8];
	int _cliente = 0
	
	cliente[_cliente].name = "Thales";
	cliente[_cliente].andress = "Rua dos Pré-Socráticos";
	cliente[_cliente].city = "Miletus";
	cliente[_cliente].state = "Ionia";
	cliente[_cliente].post_card = "548 a.C.";
	_cliente += 1;
	
	cliente[_cliente].name = "Aristóteles";
	cliente[_cliente].andress = "Avenida do Meio-Termo";
	cliente[_cliente].city = "Atenas";
	cliente[_cliente].state = "Ática";
	cliente[_cliente].post_card = "384 a.C.";
	_cliente += 1;
	
	cliente[_cliente].name = "Platão";
	cliente[_cliente].andress = "Praça das Formas";
	cliente[_cliente].city = "Atenas";
	cliente[_cliente].state = "Ática";
	cliente[_cliente].post_card = "348 a.C";
	_cliente += 1;
	
	cliente[_cliente].name = "Sócrates";
	cliente[_cliente].andress = "Rua do Elenchus";
	cliente[_cliente].city = "Atenas";
	cliente[_cliente].state = "Ática";
	cliente[_cliente].post_card = "399 a.C.";
	_cliente += 1;

	cliente[_cliente].name = "Pitágoras";
	cliente[_cliente].andress = "Praça dos Quadrados dos Catetos";
	cliente[_cliente].city = "Samos";
	cliente[_cliente].state = "Egeu";
	cliente[_cliente].post_card = "571 a.C.";

	_cliente += 1;
	cliente[_cliente].name = "Parmênides";
	cliente[_cliente].andress = "Rua do Não Ser";
	cliente[_cliente].city = "Eleia";
	cliente[_cliente].state = "Magna Grécia";
	cliente[_cliente].post_card = "460 a.C.";

	_cliente += 1;
	cliente[_cliente].name = "Empédocles";
	cliente[_cliente].andress = "Rua dos Quatro Elementos";
	cliente[_cliente].city = "Agrigento";
	cliente[_cliente].state = "Sicília";
	cliente[_cliente].post_card = "495 a.C.";
	
	_cliente += 1;
	cliente[_cliente].name = "Anaxágoras";
	cliente[_cliente].andress = "Avenida da Mente Cósmica";
	cliente[_cliente].city = "Clazômenas";
	cliente[_cliente].state = "Jónia";
	cliente[_cliente].post_card = "499 a.C.";

	int normal_amount = 0;
	int express_amount = 0;
	
	EncomendaNormal *_EncomendaNormal = new EncomendaNormal[5];
	EncomendaRelampago *_EncomendaRelampago = new EncomendaRelampago[3];
	int _encomendaNormal = 0;
	int _encomendaRelampago = 0;
	_cliente = 0;
	
	EncomendaNormal[_encomendaNormal].weight = 5;
	EncomendaNormal[_encomendaNormal].cost_kg = 12;
	EncomendaNormal[_encomendaNormal].sender = cliente[_cliente];
	EncomendaNormal[_encomendaNormal].receiver = cliente[_cliente + 1];
	normal_amount++;
	_cliente =+ 1;
	_encomendaNormal += 1;

	EncomendaNormal[_encomendaNormal].weight = 10;
	EncomendaNormal[_encomendaNormal].cost_kg = 12;
	EncomendaNormal[_encomendaNormal].sender = cliente[_cliente];
	EncomendaNormal[_encomendaNormal].receiver = cliente[_cliente + 1];
	normal_amount++;
	_cliente += 1;
	_encomendaNormal += 1;

	EncomendaNormal[_encomendaNormal].weight = 7;
	EncomendaNormal[_encomendaNormal].cost_kg = 12;
	EncomendaNormal[_encomendaNormal].sender = cliente[_cliente];
	EncomendaNormal[_encomendaNormal].receiver = cliente[_cliente + 1];
	normal_amount++;
	_cliente += 1;
	_encomendaNormal += 1;

	EncomendaNormal[_encomendaNormal].weight = 2;
	EncomendaNormal[_encomendaNormal].cost_kg = 12;
	EncomendaNormal[_encomendaNormal].sender = cliente[_cliente];
	EncomendaNormal[_encomendaNormal].receiver = cliente[_cliente + 1];
	normal_amount++;
	_cliente += 1;
	_encomendaNormal += 1;

	EncomendaNormal[_encomendaNormal].weight = 3;
	EncomendaNormal[_encomendaNormal].cost_kg = 12;
	EncomendaNormal[_encomendaNormal].sender = cliente[_cliente];
	EncomendaNormal[_encomendaNormal].receiver = cliente[_cliente + 1];
	normal_amount++;
	_cliente += 1;

	EncomendaRelampago[_encomendaRelampago].weight = 13;
	EncomendaRelampago[_encomendaRelampago].cost_kg = 18;
	EncomendaRelampago[_encomendaRelampago].sender = cliente[_cliente];
	EncomendaRelampago[_encomendaRelampago].receiver = cliente[_cliente + 1];
	express_amount++;
	_cliente += 1;
	_encomendaRelampago += 1;

	EncomendaRelampago enc6;
	EncomendaRelampago[_encomendaRelampago].weight = 6;
	EncomendaRelampago[_encomendaRelampago].cost_kg = 18;
	EncomendaRelampago[_encomendaRelampago].sender = cliente[_cliente];
	EncomendaRelampago[_encomendaRelampago].receiver = cliente[_cliente + 1];
	express_amount++;
	_cliente += 1;
	_encomendaRelampago += 1;
	
	EncomendaRelampago enc7;
	EncomendaRelampago[_encomendaRelampago].weight = 8;
	EncomendaRelampago[_encomendaRelampago].cost_kg = 18;
	EncomendaRelampago[_encomendaRelampago].sender = cliente[_cliente];
	EncomendaRelampago[_encomendaRelampago].receiver = cliente[0];
	express_amount++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double normal_cost = 0;
	double express_cost = 0;
	
	for(int i = 0; i < 8; i++)
	{
		if(i < 5)
		{
		normal_cost += EncomendaNormal[i].normal_price_calculate();
		EncomendaNormal[i].print();
		std::cout << endl;
		}
		else
		{
		express_cost += EncomendaRelampago[i-5].express_price_calculate();
		EncomendaRelampago[i-5].print();
		std::cout << endl;
		}
	}
	
	std::cout << "\n>> Encomendas normais <<" 
		  << "\nQuantidade: " << normal_amount
		  << "\nValor Total: " << normal_cost
		  << endl
		  << "\n>> Encomendas Relâmpago <<" 
		  << "\nQuantidade: " << express_amount
		  << "\nValor Total: " << express_cost
		  << endl;
	
}
