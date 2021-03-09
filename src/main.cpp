#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){

	const int QUANTIDADE_ENCOMENDAS_NORMAIS = 5;
	const int QUANTIDADE_ENCOMENDAS_RELAMPAGO = 3;

	Cliente clientes [8];
	EncomendaNormal encomendas_normal [QUANTIDADE_ENCOMENDAS_NORMAIS];
	EncomendaRelampago encomendas_relampago [QUANTIDADE_ENCOMENDAS_RELAMPAGO];

	double custo_total_encomendas_normais = 0;
	double custo_total_encomendas_relampago = 0;

	clientes[0] = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	clientes[1] = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	clientes[2] = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	clientes[3] = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	clientes[4] = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	clientes[5] = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	clientes[6] = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	clientes[7] = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");


	encomendas_normal[0] = EncomendaNormal(5, 12, clientes[0], clientes[1]);
	encomendas_normal[1] = EncomendaNormal(10, 12, clientes[1], clientes[2]);
	encomendas_normal[2] = EncomendaNormal(7, 12, clientes[2], clientes[3]);
	encomendas_normal[3] = EncomendaNormal(2, 12, clientes[3], clientes[4]);
	encomendas_normal[4] = EncomendaNormal(3, 12, clientes[4], clientes[5]);

	encomendas_relampago[0] = EncomendaRelampago(13, 18, clientes[5], clientes[6]);
	encomendas_relampago[1] = EncomendaRelampago(6, 18, clientes[6], clientes[7]);
	encomendas_relampago[2] = EncomendaRelampago(8, 18, clientes[7], clientes[0]);

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	for(int i=0; i<QUANTIDADE_ENCOMENDAS_NORMAIS; i++){
		encomendas_normal[i].calcula_tarifa_total();
		encomendas_normal[i].print();
		custo_total_encomendas_normais += encomendas_normal[i].get_tarifa_total();
		std::cout << std::endl;
	}

	for(int i=0; i<QUANTIDADE_ENCOMENDAS_RELAMPAGO; i++){
		encomendas_relampago[i].calcula_tarifa_total();
		encomendas_relampago[i].print();
		custo_total_encomendas_relampago += encomendas_relampago[i].get_tarifa_total();
		std::cout << std::endl;
	}

	
	std::cout << "\n>> Encomendas Normais <<"; 
	std::cout << "\nQuantidade: " << QUANTIDADE_ENCOMENDAS_NORMAIS;
	std::cout << "\nValor Total: " << custo_total_encomendas_normais << std::endl;
	std::cout << "\n>> Encomendas Relâmpago <<"; 
	std::cout << "\nQuantidade: " << QUANTIDADE_ENCOMENDAS_RELAMPAGO;
	std::cout << "\nValor Total: " << custo_total_encomendas_relampago << std::endl;
	
}