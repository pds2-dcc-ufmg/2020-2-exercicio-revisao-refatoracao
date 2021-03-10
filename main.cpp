#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

void carregarClientes( vector< Cliente >& clientes ); 
void carregarEncomendas( vector< Encomenda* >& encomendas,
                         vector< Cliente >& clientes,
                         int& quantN, 
						 int& quantR  ); 


int main(){

    // Carrega os Clientes
    vector< Cliente > clientes;
    carregarClientes( clientes );

    // Carrega as encomendas
	int quantN = 0;
	int quantR = 0;
    vector< Encomenda* > encomendas;	
	carregarEncomendas( encomendas, clientes, quantN, quantR );


	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

    for(Encomenda* e: encomendas) {
	    e->calcula();
	    e->print();		

		if( typeid( *(e) ) == typeid(EncomendaNormal) )  {
			custN += e->calcula();
		} else if( typeid( *(e) ) == typeid(EncomendaRelampago) )  {
			custR += e->calcula();
		}

	    std::cout << endl;		
    }	

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
	for(Encomenda* e: encomendas)  {
		delete( e );
	}
}



void carregarClientes( vector< Cliente >& clientes ) {

	clientes.push_back( Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.") );
	clientes.push_back( Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.") );
	clientes.push_back( Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C") );	
	clientes.push_back( Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.") );
	clientes.push_back( Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.") );
	clientes.push_back( Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.") );
	clientes.push_back( Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.") );
	clientes.push_back( Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.") );	
}


void carregarEncomendas( vector< Encomenda* >& encomendas,
                         vector< Cliente >& clientes,
                         int& quantN, 
						 int& quantR  )  {

	encomendas.push_back( new EncomendaNormal(5, 12, clientes.at(0), clientes.at(1)) );
	quantN++;

	encomendas.push_back( new EncomendaNormal(10, 12, clientes.at(1), clientes.at(2)) );	
	quantN++;

	encomendas.push_back( new EncomendaNormal(7, 12, clientes.at(2), clientes.at(3)) );	
	quantN++;

	encomendas.push_back( new EncomendaNormal(2, 12, clientes.at(3), clientes.at(4)) );	
	quantN++;

	encomendas.push_back( new EncomendaNormal(3, 12, clientes.at(4), clientes.at(5)) );	
	quantN++;

	encomendas.push_back( new EncomendaRelampago(13, 18, clientes.at(5), clientes.at(6)) );	
	quantR++;

	encomendas.push_back( new EncomendaRelampago(6, 18, clientes.at(6), clientes.at(7)) );
	quantR++;

	encomendas.push_back( new EncomendaRelampago(8, 18, clientes.at(7), clientes.at(0)) );
	quantR++;	
}