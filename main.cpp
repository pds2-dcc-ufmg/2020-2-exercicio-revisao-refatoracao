#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	//Criacao e armazenamento de todos clientes.
	vector<Cliente*> Clientes;
	
	Clientes.push_back(new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
	
	Clientes.push_back(new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
	
	Clientes.push_back(new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
	
	Clientes.push_back(new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
	
	Clientes.push_back(new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));
	
	Clientes.push_back(new Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
	
	Clientes.push_back(new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
	
	Clientes.push_back(new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));
	
	//Criacao e armazenamento de todas encomendas.
	vector<Encomenda*> Encomendas;
	
	Encomendas.push_back(new EncomendaNormal(5, 12, *Clientes[0], *Clientes[1]));
	
	Encomendas.push_back(new EncomendaNormal(10, 12, *Clientes[1], *Clientes[2]));
	
	Encomendas.push_back(new EncomendaNormal(7, 12, *Clientes[2], *Clientes[3]));
	
	Encomendas.push_back(new EncomendaNormal(2, 12, *Clientes[3], *Clientes[4]));
	
	Encomendas.push_back(new EncomendaNormal(3, 12, *Clientes[4], *Clientes[5]));
	
	Encomendas.push_back(new EncomendaRelampago(13, 18, *Clientes[5], *Clientes[6]));
	
	Encomendas.push_back(new EncomendaRelampago(6, 18, *Clientes[6], *Clientes[7]));
	
	Encomendas.push_back(new EncomendaRelampago(8, 18, *Clientes[7], *Clientes[0]));

	//Saida do relatorio de encomendas.
	std::cout << "\n>> Relatório de encomendas <<" << endl;
	
	int quantN = 0;	//Quantidade de encomendas normais.
	int quantR = 0;	//Quantidade de encomendas relampago.
	double custN = 0; //Custo das encomendas normais.
	double custR = 0; //Custo das encomendas relampago.
	for(int i = 0; i < (int)Encomendas.size(); i++){
		Encomendas[i]->print(); //Imprime os dados da encomenda.
		if(Encomendas[i]->gettype() == "Normal"){ //Se a encomenda e normal. 
			custN += Encomendas[i]->calcula(); //Adiciona o custo da normal.
			quantN++; //Adiciona uma encomenda normal.
		} else if (Encomendas[i]->gettype() == "Relampago") { //Se a encomenda e relampago.
			custR += Encomendas[i]->calcula(); //Adiciona o custo da relampago
			quantR++; //Adiciona uma encomenda relampago.
		}
	}
	//Saida final.
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	//Liberando memoria.
	for(int i = 0; i < (int)Encomendas.size(); i++){
		delete Encomendas[i];
	}
	for(int i = 0; i < (int)Clientes.size(); i++){
		delete Clientes[i];
	}
}