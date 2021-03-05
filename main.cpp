#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main() {
	
	Cliente cliente0;
	cliente0.NOME = "Thales";
	cliente0.endereco = "Rua dos Pré-Socráticos";
	cliente0.CIDADE = "Miletus";
	cliente0.ESTADO = "Ionia";
	cliente0.cep = "548 a.C.";

	Cliente cliente1;
	cliente1.NOME = "Aristóteles";
	cliente1.endereco = "Avenida do Meio-Termo";
	cliente1.CIDADE = "Atenas";
	cliente1.ESTADO = "Ática";
	cliente1.cep = "384 a.C.";

	Cliente cliente2;
	cliente2.NOME = "Platão";
	cliente2.endereco = "Praça das Formas";
	cliente2.CIDADE = "Atenas";
	cliente2.ESTADO = "Ática";
	cliente2.cep = "348 a.C";

	Cliente cliente3;
	cliente3.NOME = "Sócrates";
	cliente3.endereco = "Rua do Elenchus";
	cliente3.CIDADE = "Atenas";
	cliente3.ESTADO = "Ática";
	cliente3.cep = "399 a.C.";

	Cliente cliente4;
	cliente4.NOME = "Pitágoras";
	cliente4.endereco = "Praça dos Quadrados dos Catetos";
	cliente4.CIDADE = "Samos";
	cliente4.ESTADO = "Egeu";
	cliente4.cep = "571 a.C.";

	Cliente cliente5;
	cliente5.NOME = "Parmênides";
	cliente5.endereco = "Rua do Não Ser";
	cliente5.CIDADE = "Eleia";
	cliente5.ESTADO = "Magna Grécia";
	cliente5.cep = "460 a.C.";

	Cliente cliente6;
	cliente6.NOME = "Empédocles";
	cliente6.endereco = "Rua dos Quatro Elementos";
	cliente6.CIDADE = "Agrigento";
	cliente6.ESTADO = "Sicília";
	cliente6.cep = "495 a.C.";

	Cliente cliente7;
	cliente7.NOME = "Anaxágoras";
	cliente7.endereco = "Avenida da Mente Cósmica";
	cliente7.CIDADE = "Clazômenas";
	cliente7.ESTADO = "Jónia";
	cliente7.cep = "499 a.C.";

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOkg = 12;
	enc0.remetente = cliente0;
	enc0.dest = cliente1;
	quantN++;

	EncomendaNormal enc1;
	enc1.PESO = 10;
	enc1.CUSTOkg = 12;
	enc1.remetente = cliente1;
	enc1.dest = cliente2;
	quantN++;

	EncomendaNormal enc2;
	enc2.PESO = 7;
	enc2.CUSTOkg = 12;
	enc2.remetente = cliente2;
	enc2.dest = cliente3;
	quantN++;

	EncomendaNormal enc3;
	enc3.PESO = 2;
	enc3.CUSTOkg = 12;
	enc3.remetente = cliente3;
	enc3.dest = cliente4;
	quantN++;

	EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOkg = 12;
	enc4.remetente = cliente4;
	enc4.dest = cliente5;
	quantN++;

	EncomendaRelampago enc5;
	enc5.PESO = 13;
	enc5.CUSTOkg = 18;
	enc5.remetente = cliente5;
	enc5.dest = cliente6;
	quantR++;

	EncomendaRelampago enc6;
	enc6.PESO = 6;
	enc6.CUSTOkg = 18;
	enc6.remetente = cliente6;
	enc6.dest = cliente7;
	quantR++;

	EncomendaRelampago enc7;
	enc7.PESO = 8;
	enc7.CUSTOkg = 18;
	enc7.remetente = cliente7;
	enc7.dest = cliente0;
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
