#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>


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


	int quantNormal = 0;
	int quantRelampago = 0;

	std::vector<Encomenda> encomendas;
	encomendas.push_back(EncomendaNormal(5, 12, clientes[0], clientes[1]));
	quantNormal++;
	encomendas.push_back(EncomendaNormal(10, 12, clientes[1], clientes[2]));
	quantNormal++;
	encomendas.push_back(EncomendaNormal(7, 12, clientes[2], clientes[3]));
	quantNormal++;
	encomendas.push_back(EncomendaNormal(2, 12, clientes[3], clientes[4]));
	quantNormal++;
	encomendas.push_back(EncomendaNormal(3, 12, clientes[4], clientes[5]));
	quantNormal++;
	encomendas.push_back(EncomendaRelampago(13, 18, clientes[5], clientes[6]));
	quantRelampago++;
	encomendas.push_back(EncomendaRelampago(6, 18, clientes[6], clientes[7]));
	quantRelampago++;
	encomendas.push_back(EncomendaRelampago(8, 18, clientes[7], clientes[0]));
	quantRelampago++;


	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	for(int i = 0; i < encomendas.size(); i++){
		encomendas[i].calcula();
		encomendas[i].print();
		if(encomendas[i].getClassType() == 1){
			custoNormal += encomendas[i].calcula();
		} else if (encomendas[i].getClassType() == 2){
			custoRelampago += encomendas[i].calcula();
		}
	}

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
