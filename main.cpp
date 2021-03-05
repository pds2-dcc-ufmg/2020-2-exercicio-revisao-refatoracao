#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente clientes[] = {
		Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."),
		Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."),
		Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"),
		Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."),
		Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."),
		Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."),
		Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."),
		Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.")
	};

	Encomenda encomendas_normais[] = {
		Encomenda(5, 12, clientes[0], clientes[1]),
		Encomenda(10, 12, clientes[1], clientes[2]),
		Encomenda(7, 12, clientes[2], clientes[3]),
		Encomenda(2, 12, clientes[3], clientes[4]),
		Encomenda(3, 12, clientes[4], clientes[5])
	};

	EncomendaRelampago encomendas_relampago[] = {
		EncomendaRelampago(13, 18, clientes[5], clientes[6]),
		EncomendaRelampago(6, 18, clientes[6], clientes[7]),
		EncomendaRelampago(8, 18, clientes[7], clientes[0])
	};

	int quantidade_encomendas_normais = sizeof(encomendas_normais)/sizeof(Encomenda);
	int quantidade_encomendas_relampago = sizeof(encomendas_relampago)/sizeof(EncomendaRelampago);

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custo_encomendas_normais = 0;
	double custo_encomendas_relampago = 0;

	for (int i = 0; i < quantidade_encomendas_normais; i++) {
		encomendas_normais[i].print();
		custo_encomendas_normais += encomendas_normais[i].getCustoTotal();
		std::cout << endl;
	}

	for (int i = 0; i < quantidade_encomendas_relampago; i++) {
		encomendas_relampago[i].print();
		custo_encomendas_relampago += encomendas_relampago[i].getCustoTotal();
		std::cout << endl;
	}

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidade_encomendas_normais
		 << "\nValor Total: " << custo_encomendas_normais
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidade_encomendas_relampago
		 << "\nValor Total: " << custo_encomendas_relampago
		 << endl;
	
}