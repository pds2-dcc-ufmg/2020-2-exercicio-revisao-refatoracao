#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

int main(){
	
	Cliente cli0("Thales","Miletus","Ionia");
	cli0.set_endereco("Rua dos Pré-Socráticos");
	cli0.set_cep("548 a.C.");

	Cliente cli1("Aristóteles","Aristóteles","Ática");
	cli1.set_endereco("Avenida do Meio-Termo");
	cli1.set_cep("384 a.C.");

	Cliente cli2("Platão","Atenas","Ática");
	cli2.set_endereco("Praça das Formas");
	cli2.set_cep("348 a.C");

	Cliente cli3("Sócrates","Atenas","Ática");
	cli3.set_endereco("Rua do Elenchus");
	cli3.set_cep("399 a.C.");

	Cliente cli4("Pitágoras","Samos","Egeu");
	cli4.set_endereco("Praça dos Quadrados dos Catetos");
	cli4.set_cep("571 a.C.");

	Cliente cli5("Parmênides","Eleia","Magna Grécia");
	cli5.set_endereco("Rua do Não Ser");
	cli5.set_cep("460 a.C.");

	Cliente cli6("Empédocles","Agrigento","Sicília");
	cli6.set_endereco( "495 a.C.");
	cli6.set_cep( "495 a.C.");

	Cliente cli7("Anaxágoras","Clazômenas","Jónia");
	cli7.set_endereco("Avenida da Mente Cósmica");
	cli7.set_cep("499 a.C.");

	int quantN = 0;
	int quantR = 0;
	vector<EncomendaNormal> encN;
	vector<EncomendaRelampago> encR;

	EncomendaNormal enc0(5.0,12.0,&cli0,&cli1);
	quantN++;
	encN.push_back(enc0);

	EncomendaNormal enc1(10.0,12.0,&cli1,&cli2);
	quantN++;
	encN.push_back(enc1);

	EncomendaNormal enc2(7.0,12.0,&cli2,&cli3);
	quantN++;
	encN.push_back(enc2);

	EncomendaNormal enc3(2.0,12.0,&cli3,&cli4);
	quantN++;
	encN.push_back(enc3);

	EncomendaNormal enc4(3.0,12.0,&cli4,&cli5);
	quantN++;
	encN.push_back(enc4);

	EncomendaRelampago enc5(13.0,18.0,&cli5,&cli6);
	quantR++;
	encR.push_back(enc5);

	EncomendaRelampago enc6(6.0,18.0,&cli6,&cli7);
	quantR++;
	encR.push_back(enc6);

	EncomendaRelampago enc7(8.0,18.0,&cli7,&cli0);
	quantR++;
	encR.push_back(enc7);

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for (int i=0 ;i<encN.size();i++){
		encN[i].relatorio_enc(&custN);
	}
	for (int i=0 ;i<encN.size();i++){
		encR[i].relatorio_enc(&custR);
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