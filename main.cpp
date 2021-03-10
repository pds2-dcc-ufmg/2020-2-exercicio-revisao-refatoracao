#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0;
	cli0.NOME = "Thales";
	cli0.endereco = "Rua dos Pré-Socráticos";
	cli0.CIDADE = "Miletus";
	cli0.ESTADO = "Ionia";
	cli0.cep = "548 a.C.";

	Cliente cli1;
	cli1.NOME = "Aristóteles";
	cli1.endereco = "Avenida do Meio-Termo";
	cli1.CIDADE = "Atenas";
	cli1.ESTADO = "Ática";
	cli1.cep = "384 a.C.";

	Cliente cli2;
	cli2.NOME = "Platão";
	cli2.endereco = "Praça das Formas";
	cli2.CIDADE = "Atenas";
	cli2.ESTADO = "Ática";
	cli2.cep = "348 a.C";

	Cliente cli3;
	cli3.NOME = "Sócrates";
	cli3.endereco = "Rua do Elenchus";
	cli3.CIDADE = "Atenas";
	cli3.ESTADO = "Ática";
	cli3.cep = "399 a.C.";

	Cliente cli4;
	cli4.NOME = "Pitágoras";
	cli4.endereco = "Praça dos Quadrados dos Catetos";
	cli4.CIDADE = "Samos";
	cli4.ESTADO = "Egeu";
	cli4.cep = "571 a.C.";

	Cliente cli5;
	cli5.NOME = "Parmênides";
	cli5.endereco = "Rua do Não Ser";
	cli5.CIDADE = "Eleia";
	cli5.ESTADO = "Magna Grécia";
	cli5.cep = "460 a.C.";

	Cliente cli6;
	cli6.NOME = "Empédocles";
	cli6.endereco = "Rua dos Quatro Elementos";
	cli6.CIDADE = "Agrigento";
	cli6.ESTADO = "Sicília";
	cli6.cep = "495 a.C.";

	Cliente cli7;
	cli7.NOME = "Anaxágoras";
	cli7.endereco = "Avenida da Mente Cósmica";
	cli7.CIDADE = "Clazômenas";
	cli7.ESTADO = "Jónia";
	cli7.cep = "499 a.C.";

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
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}