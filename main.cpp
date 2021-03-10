#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){

    vector< Cliente > clientes;

	clientes.push_back( Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.") );
	clientes.push_back( Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.") );
	clientes.push_back( Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C") );	
	clientes.push_back( Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.") );
	clientes.push_back( Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.") );
	clientes.push_back( Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.") );
	clientes.push_back( Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.") );
	clientes.push_back( Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.") );

	int quantN = 0;
	int quantR = 0;

    vector< Encomenda* > enc;		

	enc.push_back( new EncomendaNormal(5, 12, clientes.at(0), clientes.at(1)) );
	quantN++;

	enc.push_back( new EncomendaNormal(10, 12, clientes.at(1), clientes.at(2)) );	
	quantN++;

	enc.push_back( new EncomendaNormal(7, 12, clientes.at(2), clientes.at(3)) );	
	quantN++;

	enc.push_back( new EncomendaNormal(2, 12, clientes.at(3), clientes.at(4)) );	
	quantN++;

	enc.push_back( new EncomendaNormal(3, 12, clientes.at(4), clientes.at(5)) );	
	quantN++;

	enc.push_back( new EncomendaRelampago(13, 18, clientes.at(5), clientes.at(6)) );	
	quantR++;

	enc.push_back( new EncomendaRelampago(6, 18, clientes.at(6), clientes.at(7)) );
	quantR++;

	enc.push_back( new EncomendaRelampago(8, 18, clientes.at(7), clientes.at(0)) );
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

    const int NUM_ENCOMENDAS_N = 5;
	const int NUM_ENCOMENDAS_R = 3;

    for( int i=0; i<NUM_ENCOMENDAS_N; ++i ) {
	    enc.at(i)->calcula();
	    enc.at(i)->print();

        custN += enc.at(i)->calcula();
	    
	    std::cout << endl;
	}

    for( int i=0; i<NUM_ENCOMENDAS_R; ++i ) {
	    enc.at(i+NUM_ENCOMENDAS_N)->calcula();
	    enc.at(i+NUM_ENCOMENDAS_N)->print();

        custR += enc.at(i+NUM_ENCOMENDAS_N)->calcula();
	    
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
	
	for( int i=0; i<NUM_ENCOMENDAS_N + NUM_ENCOMENDAS_R; ++i )  {

		delete( enc.at(i) );
	}
}