#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente client_0;
	client_0.name = "Thales";
	client_0.andress = "Rua dos Pré-Socráticos";
	client_0.city = "Miletus";
	client_0.state = "Ionia";
	client_0.post_card = "548 a.C.";

	Cliente client_1;
	client_1.name = "Aristóteles";
	client_1.andress = "Avenida do Meio-Termo";
	client_1.city = "Atenas";
	client_1.state = "Ática";
	client_1.post_card = "384 a.C.";

	Cliente client_2;
	client_2.name = "Platão";
	client_2.andress = "Praça das Formas";
	client_2.city = "Atenas";
	client_2.state = "Ática";
	client_2.post_card = "348 a.C";

	Cliente client_3;
	client_3.name = "Sócrates";
	client_3.andress = "Rua do Elenchus";
	client_3.city = "Atenas";
	client_3.state = "Ática";
	client_3.post_card = "399 a.C.";

	Cliente client_4;
	client_4.name = "Pitágoras";
	client_4.andress = "Praça dos Quadrados dos Catetos";
	client_4.city = "Samos";
	client_4.state = "Egeu";
	client_4.post_card = "571 a.C.";

	Cliente client_5;
	client_5.name = "Parmênides";
	client_5.andress = "Rua do Não Ser";
	client_5.city = "Eleia";
	client_5.state = "Magna Grécia";
	client_5.post_card = "460 a.C.";

	Cliente client_6;
	client_6.name = "Empédocles";
	client_6.andress = "Rua dos Quatro Elementos";
	client_6.city = "Agrigento";
	client_6.state = "Sicília";
	client_6.post_card = "495 a.C.";

	Cliente client_7;
	client_7.name = "Anaxágoras";
	client_7.andress = "Avenida da Mente Cósmica";
	client_7.city = "Clazômenas";
	client_7.state = "Jónia";
	client_7.post_card = "499 a.C.";

	int normal_amount = 0;
	int express_amount = 0;

	EncomendaNormal enc0;
	enc0.weight = 5;
	enc0.cost_kg = 12;
	enc0.sender = client_0;
	enc0.receiver = client_1;
	normal_amount++;

	EncomendaNormal enc1;
	enc1.weight = 10;
	enc1.cost_kg = 12;
	enc1.sender = client_1;
	enc1.receiver = client_2;
	normal_amount++;

	EncomendaNormal enc2;
	enc2.weight = 7;
	enc2.cost_kg = 12;
	enc2.sender = client_2;
	enc2.receiver = client_3;
	normal_amount++;

	EncomendaNormal enc3;
	enc3.weight = 2;
	enc3.cost_kg = 12;
	enc3.sender = client_3;
	enc3.receiver = client_4;
	normal_amount++;

	EncomendaNormal enc4;
	enc4.weight = 3;
	enc4.cost_kg = 12;
	enc4.sender = client_4;
	enc4.receiver = client_5;
	normal_amount++;

	EncomendaRelampago enc5;
	enc5.weight = 13;
	enc5.cost_kg = 18;
	enc5.sender = client_5;
	enc5.receiver = client_6;
	express_amount++;

	EncomendaRelampago enc6;
	enc6.weight = 6;
	enc6.cost_kg = 18;
	enc6.sender = client_6;
	enc6.receiver = client_7;
	express_amount++;

	EncomendaRelampago enc7;
	enc7.weight = 8;
	enc7.cost_kg = 18;
	enc7.sender = client_7;
	enc7.receiver = client_0;
	express_amount++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double normal_cost = 0;
	double express_cost = 0;

	enc0.calcula();
	enc0.print();
	normal_cost += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	normal_cost += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	normal_cost += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	normal_cost += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	normal_cost += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	express_cost += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print();
	express_cost += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	express_cost += enc7.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas normais <<" 
		  << "\nQuantidade: " << normal_amount
		  << "\nValor Total: " << normal_cost
		  << endl
		  << "\n>> Encomendas Relâmpago <<" 
		  << "\nQuantidade: " << express_amount
		  << "\nValor Total: " << express_cost
		  << endl;
	
}
