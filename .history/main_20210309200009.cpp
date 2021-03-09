#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>

using namespace std;

int main(){
	
	vector<Cliente> clientes;

	vector<EncomendaNormal> encomendas_normais;

	vector<EncomendaRelampago> encomendas_relampago;

	double custN = 0;
	double custR = 0;
	int quantN = 0;
	int quantR = 0;
 

//
	Cliente cli0;
	cli0.NOME = "Thales";
	cli0.endereco = "Rua dos Pré-Socráticos";
	cli0.CIDADE = "Miletus";
	cli0.ESTADO = "Ionia";
	cli0.cep = "548 a.C.";
	clientes.push_back(cli0);
	

	Cliente cli1;
	cli1.NOME = "Aristóteles";
	cli1.endereco = "Avenida do Meio-Termo";
	cli1.CIDADE = "Atenas";
	cli1.ESTADO = "Ática";
	cli1.cep = "384 a.C.";
	clientes.push_back(cli1);

	Cliente cli2;
	cli2.NOME = "Platão";
	cli2.endereco = "Praça das Formas";
	cli2.CIDADE = "Atenas";
	cli2.ESTADO = "Ática";
	cli2.cep = "348 a.C";
	clientes.push_back(cli2);

	Cliente cli3;
	cli3.NOME = "Sócrates";
	cli3.endereco = "Rua do Elenchus";
	cli3.CIDADE = "Atenas";
	cli3.ESTADO = "Ática";
	cli3.cep = "399 a.C.";
	clientes.push_back(cli3);

	Cliente cli4;
	cli4.NOME = "Pitágoras";
	cli4.endereco = "Praça dos Quadrados dos Catetos";
	cli4.CIDADE = "Samos";
	cli4.ESTADO = "Egeu";
	cli4.cep = "571 a.C.";
	clientes.push_back(cli4);

	Cliente cli5;
	cli5.NOME = "Parmênides";
	cli5.endereco = "Rua do Não Ser";
	cli5.CIDADE = "Eleia";
	cli5.ESTADO = "Magna Grécia";
	cli5.cep = "460 a.C.";
	clientes.push_back(cli5);

	Cliente cli6;
	cli6.NOME = "Empédocles";
	cli6.endereco = "Rua dos Quatro Elementos";
	cli6.CIDADE = "Agrigento";
	cli6.ESTADO = "Sicília";
	cli6.cep = "495 a.C.";
	clientes.push_back(cli6);

	Cliente cli7;
	cli7.NOME = "Anaxágoras";
	cli7.endereco = "Avenida da Mente Cósmica";
	cli7.CIDADE = "Clazômenas";
	cli7.ESTADO = "Jónia";
	cli7.cep = "499 a.C.";
	clientes.push_back(cli7);



	EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOkg = 12;
	enc0.remetente = cli0;
	enc0.dest = cli1;
	quantN++;
	encomendas_normais.push_back(enc0);

	EncomendaNormal enc1;
	enc1.PESO = 10;
	enc1.CUSTOkg = 12;
	enc1.remetente = cli1;
	enc1.dest = cli2;
	quantN++;
	encomendas_normais.push_back(enc1);

	EncomendaNormal enc2;
	enc2.PESO = 7;
	enc2.CUSTOkg = 12;
	enc2.remetente = cli2;
	enc2.dest = cli3;
	quantN++;
	encomendas_normais.push_back(enc2);	

	EncomendaNormal enc3;
	enc3.PESO = 2;
	enc3.CUSTOkg = 12;
	enc3.remetente = cli3;
	enc3.dest = cli4;
	quantN++;
	encomendas_normais.push_back(enc3);

	EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOkg = 12;
	enc4.remetente = cli4;
	enc4.dest = cli5;
	quantN++;
	encomendas_normais.push_back(enc4);

	EncomendaRelampago enc5;
	enc5.PESO = 13;
	enc5.CUSTOkg = 18;
	enc5.remetente = cli5;
	enc5.dest = cli6;
	quantR++;
	encomendas_relampago.push_back(enc5);

	EncomendaRelampago enc6;
	enc6.PESO = 6;
	enc6.CUSTOkg = 18;
	enc6.remetente = cli6;
	enc6.dest = cli7;
	quantR++;
	encomendas_relampago.push_back(enc6);

	EncomendaRelampago enc7;
	enc7.PESO = 8;
	enc7.CUSTOkg = 18;
	enc7.remetente = cli7;
	enc7.dest = cli0;
	quantR++;
	encomendas_relampago.push_back(enc7);

	std::cout << "\n>> Relatório de encomendas <<" << endl;



    for(int i = 0; i < quantN; i++){
		encomendas_normais[i].print();
    	custN += encomendas_normais[i].calcula_custo_total();
		std::cout << endl;
   }	

    for(int i = 0; i < quantR; i++){
		encomendas_relampago[i].print();
    	custR += encomendas_relampago[i].calcula_custo_total();
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