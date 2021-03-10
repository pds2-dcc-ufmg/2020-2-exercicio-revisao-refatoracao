#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

void finaliza(EncomendaNormal enc, double &custo){
  enc.calcula();
	enc.print();
	custo += enc.calcula();
	std::cout << endl;
}

void finaliza(EncomendaRelampago enc, double &custo){
  enc.calcula();
	enc.print();
	custo += enc.calcula();
	std::cout << endl;
}

int main(){
	
	Cliente cli0;
	cli0.preencher_cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1;
	cli1.preencher_cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas",  "Ática", "384 a.C.");

	Cliente cli2;
	cli2.preencher_cliente("Platão",  "Praça das Formas", "Atenas",	"Ática", "348 a.C");
	
	Cliente cli3;
	cli3.preencher_cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	
	Cliente cli4;
	cli4.preencher_cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	
	Cliente cli5;
	cli5.preencher_cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	
	Cliente cli6;
	cli6.preencher_cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7;
	cli7.preencher_cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
  enc0.preencher_enc(5, 12, cli0, cli1);
	quantN++;

	EncomendaNormal enc1;
  enc1.preencher_enc(10, 12, cli1, cli2);
	quantN++;

	EncomendaNormal enc2;
  enc2.preencher_enc(7, 12, cli2, cli3);
	quantN++;

	EncomendaNormal enc3;
  enc3.preencher_enc(2, 12, cli3, cli4);
	quantN++;

	EncomendaNormal enc4;
  enc4.preencher_enc(3, 12, cli4, cli5);
	quantN++;

	EncomendaRelampago enc5;
  enc5.preencher_enc(13, 18, cli5, cli6);
	quantR++;

	EncomendaRelampago enc6;
  enc6.preencher_enc(6, 18, cli6, cli7);
	quantR++;

	EncomendaRelampago enc7;
  enc7.preencher_enc(8, 18, cli7, cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

  finaliza(enc0, custN);
  finaliza(enc1, custN);
	finaliza(enc2, custN);
  finaliza(enc3, custN);
	finaliza(enc4, custN);

  finaliza(enc5, custR);
  finaliza(enc6, custR);
  finaliza(enc7, custR);

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}