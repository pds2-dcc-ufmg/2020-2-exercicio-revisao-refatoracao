#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

int main(){
	
	vector <Cliente> clientes;
	
	Cliente cliente_0 ("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	clientes.push_back(cliente_0);
	Cliente cliente_1 ("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	clientes.push_back(cliente_1);
	Cliente cliente_2 ("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	clientes.push_back(cliente_2);
	Cliente cliente_3 ("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	clientes.push_back(cliente_3);
	Cliente cliente_4 ("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	clientes.push_back(cliente_4);
	Cliente cliente_5 ("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	clientes.push_back(cliente_5);
	Cliente cliente_6 ("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	clientes.push_back(cliente_6);
	Cliente cliente_7 ("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	clientes.push_back(cliente_7);

	vector <EncomendaNormal> encomendasN;
	vector <EncomendaRelampago> encomendasR;

	EncomendaNormal encomenda_0 (5,12,cliente_0,cliente_1);
	encomendasN.push_back(encomenda_0);
	EncomendaNormal encomenda_1 (10,12,cliente_1,cliente_2);
	encomendasN.push_back(encomenda_1);
	EncomendaNormal encomenda_2 (7,12,cliente_2,cliente_3);
	encomendasN.push_back(encomenda_2);
	EncomendaNormal encomenda_3 (2,12,cliente_3,cliente_4);
	encomendasN.push_back(encomenda_3);
	EncomendaNormal encomenda_4 (3,12,cliente_4,cliente_5);
	encomendasN.push_back(encomenda_4);
	EncomendaRelampago encomenda_5 (13,18,cliente_5,cliente_6);
	encomendasR.push_back(encomenda_5);
	EncomendaRelampago encomenda_6 (6,18,cliente_6,cliente_7);
	encomendasR.push_back(encomenda_6);
	EncomendaRelampago encomenda_7 (8,18,cliente_7,cliente_0);
	encomendasR.push_back(encomenda_7);
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custo_encomendasN = 0;
	double custo_encomendasR = 0;

	for (int i = 0; i < encomendasN.size(); i++) {
		encomendasN[i].calcula();
		custo_encomendasN += encomendasN[i]._custo_total;
		encomendasN[i].print();
		std::cout << endl;
	}
	
	for (int j = 0; j < encomendasR.size(); j++) {
		encomendasR[j].calcula();
		custo_encomendasR += encomendasR[j]._custo_total;
		encomendasR[j].print();
		std::cout << endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendasN.size()
		 << "\nValor Total: " << custo_encomendasN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendasR.size()
		 << "\nValor Total: " << custo_encomendasR
		 << endl;
	
}
