#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>


int main(){
	
	std::vector<Cliente> clientes;
	Cliente cli0 ("Thales", "Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
    clientes.push_back(cli0);

	Cliente cli1 ("Aristóteles", "Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	clientes.push_back(cli1);

	Cliente cli2("Platão", "Praça das Formas","Atenas","Ática","348 a.C");
	clientes.push_back(cli2);

	Cliente cli3("Sócrates", "Rua do Elenchus","Atenas","Ática","399 a.C.");
	clientes.push_back(cli3);

	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos", "Egeu","571 a.C.");
	clientes.push_back(cli4);

	Cliente cli5("Parmênides","Rua do Não Ser","Eleia", "Magna Grécia","460 a.C.");
	clientes.push_back(cli5);

	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	clientes.push_back(cli6);

	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	clientes.push_back(cli7);

    std::vector<Encomenda*> EncomendasNormais;
	std::vector<Encomenda*> EncomendasRelampago;
	
	EncomendasNormais.push_back(new EncomendaNormal (5.0,12.0,cli0,cli1));
    EncomendasNormais.push_back(new EncomendaNormal (10.0,12.0,cli1,cli2));
	EncomendasNormais.push_back(new EncomendaNormal (7.0,12.0,cli2,cli3));
	EncomendasNormais.push_back(new EncomendaNormal (2.0,12.0,cli3,cli4));
	EncomendasNormais.push_back(new EncomendaNormal (3.0,12.0,cli4,cli5));
    EncomendasRelampago.push_back(new EncomendaRelampago(13.0,18.0,cli5,cli6));
	EncomendasRelampago.push_back(new EncomendaRelampago(6.0,18.0,cli6,cli7));
    EncomendasRelampago.push_back(new EncomendaRelampago(8.0,18.0,cli7,cli0));
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custN = 0;
	double custR = 0;

    for(unsigned int i=0;i<EncomendasNormais.size();i++)
	{
		EncomendasNormais[i]->print();
		custN+=EncomendasNormais[i]->gettotal();
		std::cout<<std::endl;
	}
    
	for(unsigned int i=0;i<EncomendasRelampago.size();i++)
	{
		EncomendasRelampago[i]->print();
		custR+=EncomendasRelampago[i]->gettotal();
		std::cout<<std::endl;
	}

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << EncomendasNormais.size()
		 << "\nValor Total: " << custN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << EncomendasRelampago.size()
		 << "\nValor Total: " << custR
		 << std::endl;
	
}
