#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){

	Cliente cli0;
	cli0.setNome("Thales");
	cli0.setEndereco("Rua dos Pré-Socráticos");
	cli0.setCidade("Miletus");
	cli0.setEstado("Ionia");
	cli0.setCep("548 a.C.");

	Cliente cli1;
	cli1.setNome("Aristóteles");
	cli1.setEndereco("Avenida do Meio-Termo");
	cli1.setCidade("Atenas");
	cli1.setEstado("Ática");
	cli1.setCep("384 a.C.");

	Cliente cli2;
	cli2.setNome("Platão");
	cli2.setEndereco("Praça das Formas");
	cli2.setCidade("Atenas");
	cli2.setEstado("Ática");
	cli2.setCep("348 a.C");

	Cliente cli3;
	cli3.setNome("Sócrates");
	cli3.setEndereco("Rua do Elenchus");
	cli3.setCidade("Atenas");
	cli3.setEstado("Ática");
	cli3.setCep("399 a.C.");

	Cliente cli4;
	cli4.setNome("Pitágoras");
	cli4.setEndereco("Praça dos Quadrados dos Catetos");
	cli4.setCidade("Samos");
	cli4.setEstado("Egeu");
	cli4.setCep("571 a.C.");

	Cliente cli5;
	cli5.setNome("Parmênides");
	cli5.setEndereco("Rua do Não Ser");
	cli5.setCidade("Eleia");
	cli5.setEstado("Magna Grécia");
	cli5.setCep("460 a.C.");

	Cliente cli6;
	cli6.setNome("Empédocles");
	cli6.setEndereco("Rua dos Quatro Elementos");
	cli6.setCidade("Agrigento");
	cli6.setEstado("Sicília");
	cli6.setCep("495 a.C.");

	Cliente cli7;
	cli7.setNome("Anaxágoras");
	cli7.setEndereco("Avenida da Mente Cósmica");
	cli7.setCidade("Clazômenas");
	cli7.setEstado("Jónia");
	cli7.setCep("499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOkg = 12;
	enc0.remetente = cli0;
	enc0.dest = cli1;
	quantN++;

	EncomendaNormal enc1;
	enc1.PESO = 10;
	enc1.CUSTOkg = 12;
	enc1.remetente = cli1;
	enc1.dest = cli2;
	quantN++;

	EncomendaNormal enc2;
	enc2.PESO = 7;
	enc2.CUSTOkg = 12;
	enc2.remetente = cli2;
	enc2.dest = cli3;
	quantN++;

	EncomendaNormal enc3;
	enc3.PESO = 2;
	enc3.CUSTOkg = 12;
	enc3.remetente = cli3;
	enc3.dest = cli4;
	quantN++;

	EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOkg = 12;
	enc4.remetente = cli4;
	enc4.dest = cli5;
	quantN++;

	EncomendaRelampago enc5;
	enc5.PESO = 13;
	enc5.CUSTOkg = 18;
	enc5.remetente = cli5;
	enc5.dest = cli6;
	quantR++;

	EncomendaRelampago enc6;
	enc6.PESO = 6;
	enc6.CUSTOkg = 18;
	enc6.remetente = cli6;
	enc6.dest = cli7;
	quantR++;

	EncomendaRelampago enc7;
	enc7.PESO = 8;
	enc7.CUSTOkg = 18;
	enc7.remetente = cli7;
	enc7.dest = cli0;
	quantR++;

	cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	cout << endl;

	cout << "\n>> Encomendas Normais <<"
	cout << "\nQuantidade: " << quantN
	cout << "\nValor Total: " << custN
	cout << endl
	cout << "\n>> Encomendas Relâmpago <<"
	cout << "\nQuantidade: " << quantR
	cout << "\nValor Total: " << custR
	cout << endl;

}
