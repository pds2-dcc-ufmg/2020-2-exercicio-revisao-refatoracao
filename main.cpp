#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){
	
	Cliente cli0 ("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1 ("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2 ("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3 ("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4 ("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5 ("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6 ("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7 ("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int qtd_encomendas_normais = 0;
	int qtd_encomendas_relampago = 0;

	vector<EncomendaNormal> encomendas_normais;
	vector<EncomendaRelampago> encomendas_relampago;

	EncomendaNormal enc0 (5, 12, cli0, cli1);
	encomendas_normais.push_back(enc0);
	qtd_encomendas_normais++;

	EncomendaNormal enc1 (10, 12, cli1, cli2);
	encomendas_normais.push_back(enc1);	
	qtd_encomendas_normais++;

	EncomendaNormal enc2 (7, 12, cli2, cli3);
	encomendas_normais.push_back(enc2);
	qtd_encomendas_normais++;


	EncomendaNormal enc3 (2, 12, cli3, cli4);
	encomendas_normais.push_back(enc3);
	qtd_encomendas_normais++;

	EncomendaNormal enc4 (3, 12, cli4, cli5);
	encomendas_normais.push_back(enc4);
	qtd_encomendas_normais++;

	EncomendaRelampago enc5 (13, 18, cli5, cli6);
	encomendas_relampago.push_back(enc5);
	qtd_encomendas_relampago++;


	EncomendaRelampago enc6 (6, 18, cli6, cli7);	
	encomendas_relampago.push_back(enc6);
	qtd_encomendas_relampago++;

	EncomendaRelampago enc7 (8, 18, cli7, cli0);
	encomendas_relampago.push_back(enc7);
	qtd_encomendas_relampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custo_total_encomendas_normais = 0;
	double custo_total_encomendas_relampago = 0;

	// Loops
	for (EncomendaNormal &enc: encomendas_normais) {
		enc.calcula();
		enc.print();
		custo_total_encomendas_normais += enc.get_total();
		cout << endl;
	}

	for (EncomendaRelampago &enc: encomendas_relampago) {
		enc.calcula();
		enc.print();
		custo_total_encomendas_relampago += enc.get_total();
		cout << endl;
	}

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendas_normais.size()
		 << "\nValor Total: " << custo_total_encomendas_normais
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendas_relampago.size()
		 << "\nValor Total: " << custo_total_encomendas_relampago
		 << endl;
	
}