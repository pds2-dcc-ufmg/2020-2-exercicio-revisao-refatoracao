#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0;
	cli0.Nome = "Thales";
	cli0.Endereco = "Rua dos Pré-Socráticos";
	cli0.Cidade = "Miletus";
	cli0.Estado = "Ionia";
	cli0.Cep = "548 a.C.";

	Cliente cli1;
	cli1.Nome = "Aristóteles";
	cli1.Endereco = "Avenida do Meio-Termo";
	cli1.Cidade = "Atenas";
	cli1.Estado = "Ática";
	cli1.Cep = "384 a.C.";

	Cliente cli2;
	cli2.Nome = "Platão";
	cli2.Endereco = "Praça das Formas";
	cli2.Cidade = "Atenas";
	cli2.Estado = "Ática";
	cli2.Cep = "348 a.C";

	Cliente cli3;
	cli3.Nome = "Sócrates";
	cli3.Endereco = "Rua do Elenchus";
	cli3.Cidade = "Atenas";
	cli3.Estado = "Ática";
	cli3.Cep = "399 a.C.";

	Cliente cli4;
	cli4.Nome = "Pitágoras";
	cli4.Endereco = "Praça dos Quadrados dos Catetos";
	cli4.Cidade = "Samos";
	cli4.Estado = "Egeu";
	cli4.Cep = "571 a.C.";

	Cliente cli5;
	cli5.Nome = "Parmênides";
	cli5.Endereco = "Rua do Não Ser";
	cli5.Cidade = "Eleia";
	cli5.Estado = "Magna Grécia";
	cli5.Cep = "460 a.C.";

	Cliente cli6;
	cli6.Nome = "Empédocles";
	cli6.Endereco = "Rua dos Quatro Elementos";
	cli6.Cidade = "Agrigento";
	cli6.Estado = "Sicília";
	cli6.Cep = "495 a.C.";

	Cliente cli7;
	cli7.Nome = "Anaxágoras";
	cli7.Endereco = "Avenida da Mente Cósmica";
	cli7.Cidade = "Clazômenas";
	cli7.Estado = "Jónia";
	cli7.Cep = "499 a.C.";

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.Peso = 5;
	enc0.Custokg = 12;
	enc0.remetente = cli0;
	enc0.dest = cli1;
	quantN++;

	EncomendaNormal enc1;
	enc1.Peso = 10;
	enc1.Custokg = 12;
	enc1.remetente = cli1;
	enc1.dest = cli2;
	quantN++;

	EncomendaNormal enc2;
	enc2.Peso = 7;
	enc2.Custokg = 12;
	enc2.remetente = cli2;
	enc2.dest = cli3;
	quantN++;

	EncomendaNormal enc3;
	enc3.Peso = 2;
	enc3.Custokg = 12;
	enc3.remetente = cli3;
	enc3.dest = cli4;
	quantN++;

	EncomendaNormal enc4;
	enc4.Peso = 3;
	enc4.Custokg = 12;
	enc4.remetente = cli4;
	enc4.dest = cli5;
	quantN++;

	EncomendaRelampago enc5;
	enc5.Peso = 13;
	enc5.Custokg = 18;
	enc5.remetente = cli5;
	enc5.dest = cli6;
	quantR++;

	EncomendaRelampago enc6;
	enc6.Peso = 6;
	enc6.Custokg = 18;
	enc6.remetente = cli6;
	enc6.dest = cli7;
	quantR++;

	EncomendaRelampago enc7;
	enc7.Peso = 8;
	enc7.Custokg = 18;
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
