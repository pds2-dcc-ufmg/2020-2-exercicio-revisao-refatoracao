#include <iostream>
#include <vector>
#include <typeinfo>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){

	vector<Cliente> clientes;
	
	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	clientes.push_back(cli0);

	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	clientes.push_back(cli1);

	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	clientes.push_back(cli2);

	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	clientes.push_back(cli3);

	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	clientes.push_back(cli4);

	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	clientes.push_back(cli5);

	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	clientes.push_back(cli6);

	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	clientes.push_back(cli7);

	int quantN = 0;
	int quantR = 0;

	vector<Encomenda> encomendas;

	EncomendaNormal enc0(5,12);
	encomendas.push_back(enc0);

	EncomendaNormal enc1(10,12);
	encomendas.push_back(enc1);

	EncomendaNormal enc2(7,12);
	encomendas.push_back(enc2);

	EncomendaNormal enc3(2,12);
	encomendas.push_back(enc3);

	EncomendaNormal enc4(3,12);
	encomendas.push_back(enc4);

	EncomendaRelampago enc5(13,18);
	encomendas.push_back(enc5);

	EncomendaRelampago enc6(6,18);
	encomendas.push_back(enc6);

	EncomendaRelampago enc7(8,18);
	encomendas.push_back(enc7);

	for(int i=0;i<7;i++){
		encomendas[i].remetente = clientes[i];
		encomendas[i].dest = clientes[i+1];
	}
	enc7.dest=clientes[0];
	enc7.remetente=clientes[7];
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for(auto e : encomendas){
		e.calcularValor();
		e.print();
		if(typeid(e)==typeid(EncomendaNormal)){
			custN += e.calcularValor();
			quantN++;
		}else{
			custR += e.calcularValor();
			quantR++;
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
	
}