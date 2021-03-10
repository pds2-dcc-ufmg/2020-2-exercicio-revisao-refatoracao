#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"


int main(){

	std::vector <Cliente*> Clientes;
	std::vector <Encomenda*> Encomendas;
	
	//inserindo clientes no vetor
	Clientes.emplace_back(new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.")) ; 

	Clientes.emplace_back(new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));

	Clientes.emplace_back(new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));

	Clientes.emplace_back(new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));

	Clientes.emplace_back(new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));

	Clientes.emplace_back(new Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));

	Clientes.emplace_back(new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));

	Clientes.emplace_back(new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));

    //inserindo as encomendas no vetor
	Encomendas.emplace_back(new EncomendaNormal(5.0, 12.0, Clientes[0], Clientes[1])); 

	Encomendas.emplace_back(new EncomendaNormal(10.0, 12.0, Clientes[1], Clientes[2])); 

	Encomendas.emplace_back(new EncomendaNormal(7.0, 12.0, Clientes[2], Clientes[3])); 

	Encomendas.emplace_back(new EncomendaNormal(2.0, 12.0, Clientes[3], Clientes[4]));

	Encomendas.emplace_back(new EncomendaNormal(3.0, 12.0, Clientes[4], Clientes[5])); 

	Encomendas.emplace_back(new EncomendaRelampago(13.0, 18.0, Clientes[5], Clientes[6]));

	Encomendas.emplace_back(new EncomendaRelampago(6.0, 18.0, Clientes[6], Clientes[7]));

	Encomendas.emplace_back(new EncomendaRelampago(8.0, 18.0, Clientes[7], Clientes[0]));

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;
    
    
    int Num_Normal = 0;
    int Num_Relampago = 0;
	double Valor_Normal = 0;
	double Valor_Relampago = 0;

	//imprime na tela as informações de remetente, destinatário e encomenda
    for(Encomenda* a : Encomendas){
        a->calcula();
	    a->print();
	    if(a->getCusto() == 12.0){
	        Num_Normal++;
	        Valor_Normal += a->calcula();
	    }
	    else {Num_Relampago++;Valor_Relampago += a->calcula();}
        std::cout<<std::endl;
    }
	//limpa a memória dos vetores
	for(int contador = 0; contador < Num_Normal + Num_Relampago; contador++){
		delete Encomendas[contador];
	}
	for(int contador = 0; contador < Clientes.size(); contador++){
		delete Clientes[contador];
	}
	
	std::cout << "\n>> Encomendas Normais <<" << "\nQuantidade: " << Num_Normal<< "\nValor Total: " <<
	Valor_Normal << std::endl <<"\n>> Encomendas Relâmpago <<" << "\nQuantidade: " << Num_Relampago<<
	"\nValor Total: " << Valor_Relampago<< std::endl;
		 
	
	return 0;
}
