#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente primeiroCliente;
	primeiroCliente.NOME = "Thales";
	primeiroCliente.endereco = "Rua dos Pré-Socráticos";
	primeiroCliente.CIDADE = "Miletus";
	primeiroCliente.ESTADO = "Ionia";
	primeiroCliente.cep = "548 a.C.";

	Cliente segundoCliente;
	segundoCliente.NOME = "Aristóteles";
	segundoCliente.endereco = "Avenida do Meio-Termo";
	segundoCliente.CIDADE = "Atenas";
	segundoCliente.ESTADO = "Ática";
	segundoCliente.cep = "384 a.C.";

	Cliente terceiroCliente;
	terceiroCliente.NOME = "Platão";
	terceiroCliente.endereco = "Praça das Formas";
	terceiroCliente.CIDADE = "Atenas";
	terceiroCliente.ESTADO = "Ática";
	terceiroCliente.cep = "348 a.C";

	Cliente quartoCliente;
	quartoCliente.NOME = "Sócrates";
	quartoCliente.endereco = "Rua do Elenchus";
	quartoCliente.CIDADE = "Atenas";
	quartoCliente.ESTADO = "Ática";
	quartoCliente.cep = "399 a.C.";

	Cliente quintoCliente;
	quintoCliente.NOME = "Pitágoras";
	quintoCliente.endereco = "Praça dos Quadrados dos Catetos";
	quintoCliente.CIDADE = "Samos";
	quintoCliente.ESTADO = "Egeu";
	quintoCliente.cep = "571 a.C.";

	Cliente sextoCliente;
	sextoCliente.NOME = "Parmênides";
	sextoCliente.endereco = "Rua do Não Ser";
	sextoCliente.CIDADE = "Eleia";
	sextoCliente.ESTADO = "Magna Grécia";
	sextoCliente.cep = "460 a.C.";

	Cliente setimoCliente;
	setimoCliente.NOME = "Empédocles";
	setimoCliente.endereco = "Rua dos Quatro Elementos";
	setimoCliente.CIDADE = "Agrigento";
	setimoCliente.ESTADO = "Sicília";
	setimoCliente.cep = "495 a.C.";

	Cliente oitavoCliente;
	oitavoCliente.NOME = "Anaxágoras";
	oitavoCliente.endereco = "Avenida da Mente Cósmica";
	oitavoCliente.CIDADE = "Clazômenas";
	oitavoCliente.ESTADO = "Jónia";
	oitavoCliente.cep = "499 a.C.";

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	EncomendaNormal primeiraEncomenda;
	primeiraEncomenda.PESO = 5;
	primeiraEncomenda.CUSTOkg = 12;
	primeiraEncomenda.remetente = primeiroCliente;
	primeiraEncomenda.dest = segundoCliente;
	quantidadeNormal++;

	EncomendaNormal segundaEncomenda;
	segundaEncomenda.PESO = 10;
	segundaEncomenda.CUSTOkg = 12;
	segundaEncomenda.remetente = segundoCliente;
	segundaEncomenda.dest = terceiroCliente;
	quantidadeNormal++;

	EncomendaNormal terceiraEncomenda;
	terceiraEncomenda.PESO = 7;
	terceiraEncomenda.CUSTOkg = 12;
	terceiraEncomenda.remetente = terceiroCliente;
	terceiraEncomenda.dest = quartoCliente;
	quantidadeNormal++;

	EncomendaNormal quartaEncomenda;
	quartaEncomenda.PESO = 2;
	quartaEncomenda.CUSTOkg = 12;
	quartaEncomenda.remetente = quartoCliente;
	quartaEncomenda.dest = quintoCliente;
	quantidadeNormal++;

	EncomendaNormal quintaEncomenda;
	quintaEncomenda.PESO = 3;
	quintaEncomenda.CUSTOkg = 12;
	quintaEncomenda.remetente = quintoCliente;
	quintaEncomenda.dest = sextoCliente;
	quantidadeNormal++;

	EncomendaRelampago sextaEncomenda;
	sextaEncomenda.PESO = 13;
	sextaEncomenda.CUSTOkg = 18;
	sextaEncomenda.remetente = sextoCliente;
	sextaEncomenda.dest = setimoCliente;
	quantidadeRelampago++;

	EncomendaRelampago setimaEncomenda;
	setimaEncomenda.PESO = 6;
	setimaEncomenda.CUSTOkg = 18;
	setimaEncomenda.remetente = setimoCliente;
	setimaEncomenda.dest = oitavoCliente;
	quantidadeRelampago++;

	EncomendaRelampago oitavaEncomenda;
	oitavaEncomenda.PESO = 8;
	oitavaEncomenda.CUSTOkg = 18;
	oitavaEncomenda.remetente = oitavoCliente;
	oitavaEncomenda.dest = primeiroCliente;
	quantidadeRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	primeiraEncomenda.calcula();
	primeiraEncomenda.print();
	custoNormal += primeiraEncomenda.calcula();
	std::cout << endl;

	segundaEncomenda.calcula();
	segundaEncomenda.print();
	custoNormal += segundaEncomenda.calcula();
	std::cout << endl;

	terceiraEncomenda.calcula();
	terceiraEncomenda.print();
	custoNormal += terceiraEncomenda.calcula();
	std::cout << endl;

	quartaEncomenda.calcula();
	quartaEncomenda.print();
	custoNormal += quartaEncomenda.calcula();
	std::cout << endl;

	quintaEncomenda.calcula();
	quintaEncomenda.print();
	custoNormal += quintaEncomenda.calcula();
	std::cout << endl;

	sextaEncomenda.calcula();
	sextaEncomenda.print();
	custoRelampago += sextaEncomenda.calcula();
	std::cout << endl;

	setimaEncomenda.calcula();
	setimaEncomenda.print();
	custoRelampago += setimaEncomenda.calcula();
	std::cout << endl;

	oitavaEncomenda.calcula();
	oitavaEncomenda.print();
	custoRelampago += oitavaEncomenda.calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeNormal
		 << "\nValor Total: " << custoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeRelampago
		 << "\nValor Total: " << custoRelampago
		 << endl;
	
}