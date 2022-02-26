#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"


int main(){
	
	std::vector<Cliente> clientes;

	clientes.push_back(Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
	clientes.push_back(Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
	clientes.push_back(Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
	clientes.push_back(Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
	clientes.push_back(Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C"));
	clientes.push_back(Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
	clientes.push_back(Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
	clientes.push_back(Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	std::vector<Encomenda> encomendas;
	
	encomendas.push_back(Encomenda(5, 12, clientes[0], clientes[1]));
	quantidadeNormal++;
	encomendas.push_back(Encomenda(10, 12, clientes[1], clientes[2]));
	quantidadeNormal++;
	encomendas.push_back(Encomenda(7, 12, clientes[2], clientes[3]));
	quantidadeNormal++;
	encomendas.push_back(Encomenda(2, 12, clientes[3], clientes[4]));
	quantidadeNormal++;
	encomendas.push_back(Encomenda(3, 12, clientes[4], clientes[5]));
	quantidadeNormal++;
	encomendas.push_back(EncomendaRelampago(13, 18, clientes[5], clientes[6]));
	quantidadeRelampago++;
	encomendas.push_back(EncomendaRelampago(6, 18, clientes[6], clientes[7]));
	quantidadeRelampago++;
	encomendas.push_back(EncomendaRelampago(8, 18, clientes[7], clientes[0]));
	quantidadeRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormal = 0;
	double custoRelampago = 0;
	
	for(int i = 0; i < encomendas.size(); i++){
		encomendas[i].calculaCusto();
		encomendas[i].print();
		if(encomendas[i].taxaAdicional == 1.0)	custoNormal += encomendas[i].calculaCusto(); 
		else if (encomendas[i].taxaAdicional > 1) custoRelampago += encomendas[i].calculaCusto();
		
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeNormal
		 << "\nValor Total: " << custoNormal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeRelampago
		 << "\nValor Total: " << custoRelampago
		 << std::endl;
	
}