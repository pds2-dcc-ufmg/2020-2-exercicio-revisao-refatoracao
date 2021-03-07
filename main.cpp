#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "ListaEncomendas.hpp"
#include "Show.hpp"

int main(){
	
	/*
	Para compilar use :
	g++ -std=c++11 -Wall main.cpp Cliente.cpp Encomenda.cpp 
	EncomendaNormal.cpp EncomendaRelampago.cpp
	*/
	
	/* Declarando os clientes com construtores */
	std::vector<Cliente> clientes;
	clientes.push_back({"Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C."});
	clientes.push_back({"Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C."});
	clientes.push_back({"Platão","Praça das Formas","Atenas","Ática","348 a.C"});
	clientes.push_back({"Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C."});
	clientes.push_back({"Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C."});
	clientes.push_back({"Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C."});
	clientes.push_back({"Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C."});
	clientes.push_back({"Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C."});

	/* Encomendas Normais */
	std::vector<EncomendaNormal> encomendasNormais;
	encomendasNormais.push_back({5,12,&clientes[0],&clientes[1]});
	encomendasNormais.push_back({10,12,&clientes[1],&clientes[2]});
	encomendasNormais.push_back({7,12,&clientes[2],&clientes[3]});
	encomendasNormais.push_back({2,12,&clientes[3],&clientes[4]});
	encomendasNormais.push_back({3,12,&clientes[4],&clientes[5]});
	
	/* Encomendas Relâmpago */
	std::vector<EncomendaRelampago> encomendasRelampagos ;
	encomendasRelampagos.push_back({13,18,&clientes[5],&clientes[6]});
	encomendasRelampagos.push_back({6,18,&clientes[6],&clientes[7]});
	encomendasRelampagos.push_back({8,18,&clientes[7],&clientes[0]});
	
	ListaEncomendas<EncomendaNormal> listaEncomendasNormais(&encomendasNormais) ;
	ListaEncomendas<EncomendaRelampago> listaEncomendasRelampagos(&encomendasRelampagos) ;

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;
	listaEncomendasNormais.calcularTodos();
	listaEncomendasRelampagos.calcularTodos();
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << listaEncomendasNormais.getQuantidadeEncomendas()
		 << "\nValor Total: " << listaEncomendasNormais.getValorTotalEncomendas()
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << listaEncomendasRelampagos.getQuantidadeEncomendas()
		 << "\nValor Total: " << listaEncomendasRelampagos.getValorTotalEncomendas()
		 << std::endl;
	
}