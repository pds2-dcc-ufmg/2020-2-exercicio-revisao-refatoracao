#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "Cliente.cpp"
using namespace std;

int main() {
	int quantidadeEncomendasNormais = 5, quantidadeEncomendasRelampago = 3;
	double custoEncomendasNormais = 0, custoEncomendasRelampago = 0;

	Cliente clientes[8];
	EncomendaNormal encomendasNormais[quantidadeEncomendasNormais];
	EncomendaRelampago encomendasRelampago[quantidadeEncomendasRelampago];
	
	clientes[0].nome = "Thales";
	clientes[0].endereco = "Rua dos Pré-Socráticos";
	clientes[0].cidade = "Miletus";
	clientes[0].estado = "Ionia";
	clientes[0].cep = "548 a.C.";

	clientes[1].nome = "Aristóteles";
	clientes[1].endereco = "Avenida do Meio-Termo";
	clientes[1].cidade = "Atenas";
	clientes[1].estado = "Ática";
	clientes[1].cep = "384 a.C.";

	clientes[2].nome = "Platão";
	clientes[2].endereco = "Praça das Formas";
	clientes[2].cidade = "Atenas";
	clientes[2].estado = "Ática";
	clientes[2].cep = "348 a.C";

	clientes[3].nome = "Sócrates";
	clientes[3].endereco = "Rua do Elenchus";
	clientes[3].cidade = "Atenas";
	clientes[3].estado = "Ática";
	clientes[3].cep = "399 a.C.";

	clientes[4].nome = "Pitágoras";
	clientes[4].endereco = "Praça dos Quadrados dos Catetos";
	clientes[4].cidade = "Samos";
	clientes[4].estado = "Egeu";
	clientes[4].cep = "571 a.C.";

	clientes[5].nome = "Parmênides";
	clientes[5].endereco = "Rua do Não Ser";
	clientes[5].cidade = "Eleia";
	clientes[5].estado = "Magna Grécia";
	clientes[5].cep = "460 a.C.";

	clientes[6].nome = "Empédocles";
	clientes[6].endereco = "Rua dos Quatro Elementos";
	clientes[6].cidade = "Agrigento";
	clientes[6].estado = "Sicília";
	clientes[6].cep = "495 a.C.";

	clientes[7].nome = "Anaxágoras";
	clientes[7].endereco = "Avenida da Mente Cósmica";
	clientes[7].cidade = "Clazômenas";
	clientes[7].estado = "Jónia";
	clientes[7].cep = "499 a.C.";

	encomendasNormais[0].peso = 5;
	encomendasNormais[0].custoKg = 12;
	encomendasNormais[0].remetente = clientes[0];
	encomendasNormais[0].destinatario = clientes[1];

	encomendasNormais[1].peso = 10;
	encomendasNormais[1].custoKg = 12;
	encomendasNormais[1].remetente = clientes[1];
	encomendasNormais[1].destinatario = clientes[2];

	encomendasNormais[2].peso = 7;
	encomendasNormais[2].custoKg = 12;
	encomendasNormais[2].remetente = clientes[2];
	encomendasNormais[2].destinatario = clientes[3];

	encomendasNormais[3].peso = 2;
	encomendasNormais[3].custoKg = 12;
	encomendasNormais[3].remetente = clientes[3];
	encomendasNormais[3].destinatario = clientes[4];

	encomendasNormais[4].peso = 3;
	encomendasNormais[4].custoKg = 12;
	encomendasNormais[4].remetente = clientes[4];
	encomendasNormais[4].destinatario = clientes[5];

	encomendasRelampago[0].peso = 13;
	encomendasRelampago[0].custoKg = 18;
	encomendasRelampago[0].remetente = clientes[5];
	encomendasRelampago[0].destinatario = clientes[6];

	encomendasRelampago[1].peso = 6;
	encomendasRelampago[1].custoKg = 18;
	encomendasRelampago[1].remetente = clientes[6];
	encomendasRelampago[1].destinatario = clientes[7];

	encomendasRelampago[2].peso = 8;
	encomendasRelampago[2].custoKg = 18;
	encomendasRelampago[2].remetente = clientes[7];
	encomendasRelampago[2].destinatario = clientes[0];
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	for (int i = 0; i < quantidadeEncomendasNormais; i++) {
		custoEncomendasNormais += encomendasNormais[i].calcula();
		encomendasNormais[i].print();
		cout << endl;
	}

	for (int i = 0; quantidadeEncomendasRelampago; i++) {
		custoEncomendasRelampago += encomendasRelampago[i].calcula();
		encomendasRelampago[i].print();
		cout << endl;
	}

	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeEncomendasNormais
		 << "\nValor Total: " << custoEncomendasNormais
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeEncomendasRelampago
		 << "\nValor Total: " << custoEncomendasRelampago
		 << endl;
}