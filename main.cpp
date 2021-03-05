#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
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

	EncomendaNormal encomendas_normais[] = {
		EncomendaNormal(5, 12, clientes[0], clientes[1]),
		EncomendaNormal(10, 12, clientes[1], clientes[2]),
		EncomendaNormal(7, 12, clientes[2], clientes[3]),
		EncomendaNormal(2, 12, clientes[3], clientes[4]),
		EncomendaNormal(3, 12, clientes[4], clientes[5])
	};

	EncomendaRelampago encomendas_relampago[] = {
		EncomendaRelampago(13, 18, clientes[5], clientes[6]),
		EncomendaRelampago(6, 18, clientes[6], clientes[7]),
		EncomendaRelampago(8, 18, clientes[7], clientes[0])
	};
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	// imprime os dados de cada encomenda normal
	for (int i = 0; i < EncomendaNormal::quantidade; i++) {
		encomendas_normais[i].print();
		std::cout << endl;
	}

	// imprime os dados de cada encomenda relampago
	for (int i = 0; i < EncomendaRelampago::quantidade; i++) {
		encomendas_relampago[i].print();
		std::cout << endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << EncomendaNormal::quantidade
		 << "\nValor Total: " << EncomendaNormal::custo
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << EncomendaRelampago::quantidade
		 << "\nValor Total: " << EncomendaRelampago::custo
		 << endl;
	
}