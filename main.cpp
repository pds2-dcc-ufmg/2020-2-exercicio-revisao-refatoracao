#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){
	
	Cliente cli0;
	cli0.NOME = "Thales";
	cli0.ENDERECO = "Rua dos Pré-Socráticos";
	cli0.CIDADE = "Miletus";
	cli0.ESTADO = "Ionia";
	cli0.CEP = "548 a.C.";

	Cliente cli1;
	cli1.NOME = "Aristóteles";
	cli1.ENDERECO = "Avenida do Meio-Termo";
	cli1.CIDADE = "Atenas";
	cli1.ESTADO = "Ática";
	cli1.CEP = "384 a.C.";

	Cliente cli2;
	cli2.NOME = "Platão";
	cli2.ENDERECO = "Praça das Formas";
	cli2.CIDADE = "Atenas";
	cli2.ESTADO = "Ática";
	cli2.CEP = "348 a.C";

	Cliente cli3;
	cli3.NOME = "Sócrates";
	cli3.ENDERECO = "Rua do Elenchus";
	cli3.CIDADE = "Atenas";
	cli3.ESTADO = "Ática";
	cli3.CEP = "399 a.C.";

	Cliente cli4;
	cli4.NOME = "Pitágoras";
	cli4.ENDERECO = "Praça dos Quadrados dos Catetos";
	cli4.CIDADE = "Samos";
	cli4.ESTADO = "Egeu";
	cli4.CEP = "571 a.C.";

	Cliente cli5;
	cli5.NOME = "Parmênides";
	cli5.ENDERECO = "Rua do Não Ser";
	cli5.CIDADE = "Eleia";
	cli5.ESTADO = "Magna Grécia";
	cli5.CEP = "460 a.C.";

	Cliente cli6;
	cli6.NOME = "Empédocles";
	cli6.ENDERECO = "Rua dos Quatro Elementos";
	cli6.CIDADE = "Agrigento";
	cli6.ESTADO = "Sicília";
	cli6.CEP = "495 a.C.";

	Cliente cli7;
	cli7.NOME = "Anaxágoras";
	cli7.ENDERECO = "Avenida da Mente Cósmica";
	cli7.CIDADE = "Clazômenas";
	cli7.ESTADO = "Jónia";
	cli7.CEP = "499 a.C.";

	int QUANTN = 0;
	int QUANTR = 0;

	EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOKG = 12;
	enc0.REMETENTE = cli0;
	enc0.DEST = cli1;
	QUANTN++;

	EncomendaNormal enc1;
	enc1.PESO = 10;
	enc1.CUSTOKG = 12;
	enc1.REMETENTE = cli1;
	enc1.DEST = cli2;
	QUANTN++;

	EncomendaNormal enc2;
	enc2.PESO = 7;
	enc2.CUSTOKG = 12;
	enc2.REMETENTE = cli2;
	enc2.DEST = cli3;
	QUANTN++;

	EncomendaNormal enc3;
	enc3.PESO = 2;
	enc3.CUSTOKG = 12;
	enc3.REMETENTE = cli3;
	enc3.DEST = cli4;
	QUANTN++;

	EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOKG = 12;
	enc4.REMETENTE = cli4;
	enc4.DEST = cli5;
	QUANTN++;

	EncomendaRelampago enc5;
	enc5.PESO = 13;
	enc5.CUSTOKG = 18;
	enc5.REMETENTE = cli5;
	enc5.DEST = cli6;
	QUANTR++;

	EncomendaRelampago enc6;
	enc6.PESO = 6;
	enc6.CUSTOKG = 18;
	enc6.REMETENTE = cli6;
	enc6.DEST = cli7;
	QUANTR++;

	EncomendaRelampago enc7;
	enc7.PESO = 8;
	enc7.CUSTOKG = 18;
	enc7.REMETENTE = cli7;
	enc7.DEST = cli0;
	QUANTR++;
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	double CUSTN = 0;
	double CUSTR = 0;

	enc0.calcula();
	enc0.print();
	CUSTN += enc0.calcula();
	cout << endl;

	enc1.calcula();
	enc1.print();
	CUSTN += enc1.calcula();
	cout << endl;

	enc2.calcula();
	enc2.print();
	CUSTN += enc2.calcula();
	cout << endl;

	enc3.calcula();
	enc3.print();
	CUSTN += enc3.calcula();
	cout << endl;

	enc4.calcula();
	enc4.print();
	CUSTN += enc4.calcula();
	cout << endl;

	enc5.calcula();
	enc5.print();
	CUSTR += enc5.calcula();
	cout << endl;

	enc6.calcula();
	enc6.print();
	CUSTR += enc6.calcula();
	cout << endl;

	enc7.calcula();
	enc7.print();
	CUSTR += enc7.calcula();
	cout << endl;
	
	cout << "\n>> Encomendas Normais <<"
	cout << "\nQuantidade: " << QUANTN
	cout << "\nValor Total: " << CUSTN << endl
	cout << "\n>> Encomendas Relâmpago <<" 
	cout << "\nQuantidade: " << QUANTR
	cout << "\nValor Total: " << CUSTR << endl;
}
