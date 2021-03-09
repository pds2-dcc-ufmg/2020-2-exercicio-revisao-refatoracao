#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	double custN = 0;
	double custR = 0;
	int quantN = 0;
	int quantR = 0;

	std::vector<Cliente> listaClientes;
		
	listaClientes.push_back(Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
	listaClientes.push_back(Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
	listaClientes.push_back(Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
	listaClientes.push_back(Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
	listaClientes.push_back(Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));
	listaClientes.push_back(Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
	listaClientes.push_back(Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
	listaClientes.push_back(Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));


	std::vector<Encomenda*> listaEncomendasN;
	listaEncomendasN.push_back(new EncomendaNormal(5, 12, listaClientes[0], listaClientes[1]));
	listaEncomendasN.push_back(new EncomendaNormal(10, 12, listaClientes[1], listaClientes[2]));
	listaEncomendasN.push_back(new EncomendaNormal(7, 12, listaClientes[2], listaClientes[3]));
	listaEncomendasN.push_back(new EncomendaNormal(2, 12, listaClientes[3], listaClientes[4]));
	listaEncomendasN.push_back(new EncomendaNormal(3, 12, listaClientes[4], listaClientes[5]));

	std::vector<Encomenda*> listaEncomendasR;
		
	listaEncomendasR.push_back(new EncomendaRelampago(13, 18, listaClientes[5], listaClientes[6]));
	listaEncomendasR.push_back(new EncomendaRelampago(6, 18, listaClientes[6], listaClientes[7]));
	listaEncomendasR.push_back(new EncomendaRelampago(8, 18, listaClientes[7], listaClientes[0]));
	
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;
	
	quantN = listaEncomendasN.size();
	quantR = listaEncomendasR.size();
	
	for(int i = 0; i < listaEncomendasN.size();i++) {
		listaEncomendasN[i]->print();
		custN += listaEncomendasN[i]->calcula();
	}
	for(int i = 0; i < listaEncomendasR.size();i++) {
		listaEncomendasR[i]->print();
		custR += listaEncomendasR[i]->calcula();
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << std::endl;
	
}