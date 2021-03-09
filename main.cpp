#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main () {
	
	vector<Cliente> clientes;

	Cliente cliente_0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	clientes.push_back(cliente_0);

	Cliente cliente_1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	clientes.push_back(cliente_1);

	Cliente cliente_2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");
	clientes.push_back(cliente_2);

	Cliente cliente_3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	clientes.push_back(cliente_3);

	Cliente cliente_4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	clientes.push_back(cliente_4);

	Cliente cliente_5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	clientes.push_back(cliente_5);

	Cliente cliente_6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	clientes.push_back(cliente_6);

	Cliente cliente_7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	clientes.push_back(cliente_7);



	vector<EncomendaNormal> encomendas_normais;
	vector<EncomendaRelampago> encomendas_relampago;


	EncomendaNormal encomenda_0(5, 12, cliente_0, cliente_1);
	encomendas_normais.push_back(encomenda_0);

	EncomendaNormal encomenda_1(10, 12, cliente_1, cliente_2);
	encomendas_normais.push_back(encomenda_1);

	EncomendaNormal encomenda_2(7, 12, cliente_2, cliente_3);
	encomendas_normais.push_back(encomenda_2);

	EncomendaNormal encomenda_3(2, 12, cliente_3, cliente_4);
	encomendas_normais.push_back(encomenda_3);

	EncomendaNormal encomenda_4(3, 12, cliente_4, cliente_5);
	encomendas_normais.push_back(encomenda_4);



	EncomendaRelampago encomenda_rel_0(13, 18, cliente_5, cliente_6);
	encomendas_relampago.push_back(encomenda_rel_0);

	EncomendaRelampago encomenda_rel_1(6, 18, cliente_6, cliente_7);
	encomendas_relampago.push_back(encomenda_rel_1);

	EncomendaRelampago encomenda_rel_2(8, 18, cliente_7, cliente_0);
	encomendas_relampago.push_back(encomenda_rel_2);


	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double valor_total_encomendas_normais = 0;
	double valor_total_encomendas_relampago = 0;

	for (EncomendaNormal aux : encomendas_normais) {
		aux.printDadosEncomenda();
		valor_total_encomendas_normais += aux.calculaCustoTotal();
		cout << endl;
	}

	for (EncomendaRelampago aux : encomendas_relampago) {
		aux.printDadosEncomenda();
		valor_total_encomendas_relampago += aux.calculaCustoTotal();
		cout << endl;
	}
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendas_normais.size()
		 << "\nValor Total: " << valor_total_encomendas_normais 
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendas_relampago.size()
		 << "\nValor Total: " << valor_total_encomendas_relampago
		 << endl;

	return 0;
}