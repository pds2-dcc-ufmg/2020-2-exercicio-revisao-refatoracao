#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente primeiroCliente;
	primeiroCliente.nome = "Thales";
	primeiroCliente.endereco = "Rua dos Pré-Socráticos";
	primeiroCliente.cidade = "Miletus";
	primeiroCliente.estado = "Ionia";
	primeiroCliente.cep = "548 a.C.";

	Cliente segundoCliente;
	segundoCliente.nome = "Aristóteles";
	segundoCliente.endereco = "Avenida do Meio-Termo";
	segundoCliente.cidade = "Atenas";
	segundoCliente.estado = "Ática";
	segundoCliente.cep = "384 a.C.";

	Cliente terceiroCliente;
	terceiroCliente.nome = "Platão";
	terceiroCliente.endereco = "Praça das Formas";
	terceiroCliente.cidade = "Atenas";
	terceiroCliente.estado = "Ática";
	terceiroCliente.cep = "348 a.C";

	Cliente quartoCliente;
	quartoCliente.nome = "Sócrates";
	quartoCliente.endereco = "Rua do Elenchus";
	quartoCliente.cidade = "Atenas";
	quartoCliente.estado = "Ática";
	quartoCliente.cep = "399 a.C.";

	Cliente quintoCliente;
	quintoCliente.nome = "Pitágoras";
	quintoCliente.endereco = "Praça dos Quadrados dos Catetos";
	quintoCliente.cidade = "Samos";
	quintoCliente.estado = "Egeu";
	quintoCliente.cep = "571 a.C.";

	Cliente sextoCliente;
	sextoCliente.nome = "Parmênides";
	sextoCliente.endereco = "Rua do Não Ser";
	sextoCliente.cidade = "Eleia";
	sextoCliente.estado = "Magna Grécia";
	sextoCliente.cep = "460 a.C.";

	Cliente setimoCliente;
	setimoCliente.nome = "Empédocles";
	setimoCliente.endereco = "Rua dos Quatro Elementos";
	setimoCliente.cidade = "Agrigento";
	setimoCliente.estado = "Sicília";
	setimoCliente.cep = "495 a.C.";

	Cliente oitavoCliente;
	oitavoCliente.nome = "Anaxágoras";
	oitavoCliente.endereco = "Avenida da Mente Cósmica";
	oitavoCliente.cidade = "Clazômenas";
	oitavoCliente.estado = "Jónia";
	oitavoCliente.cep = "499 a.C.";

	int quantidadeNormal = 0;
	int quantidadeRelampago = 0;

	EncomendaNormal primeiraEncomenda;
	primeiraEncomenda.peso = 5;
	primeiraEncomenda.custoKg = 12;
	primeiraEncomenda.remetente = primeiroCliente;
	primeiraEncomenda.destinatario = segundoCliente;
	quantidadeNormal++;

	EncomendaNormal segundaEncomenda;
	segundaEncomenda.peso = 10;
	segundaEncomenda.custoKg = 12;
	segundaEncomenda.remetente = segundoCliente;
	segundaEncomenda.destinatario = terceiroCliente;
	quantidadeNormal++;

	EncomendaNormal terceiraEncomenda;
	terceiraEncomenda.peso = 7;
	terceiraEncomenda.custoKg = 12;
	terceiraEncomenda.remetente = terceiroCliente;
	terceiraEncomenda.destinatario = quartoCliente;
	quantidadeNormal++;

	EncomendaNormal quartaEncomenda;
	quartaEncomenda.peso = 2;
	quartaEncomenda.custoKg = 12;
	quartaEncomenda.remetente = quartoCliente;
	quartaEncomenda.destinatario = quintoCliente;
	quantidadeNormal++;

	EncomendaNormal quintaEncomenda;
	quintaEncomenda.peso = 3;
	quintaEncomenda.custoKg = 12;
	quintaEncomenda.remetente = quintoCliente;
	quintaEncomenda.destinatario = sextoCliente;
	quantidadeNormal++;

	EncomendaRelampago sextaEncomenda;
	sextaEncomenda.peso = 13;
	sextaEncomenda.custoKg = 18;
	sextaEncomenda.remetente = sextoCliente;
	sextaEncomenda.destinatario = setimoCliente;
	quantidadeRelampago++;

	EncomendaRelampago setimaEncomenda;
	setimaEncomenda.peso = 6;
	setimaEncomenda.custoKg = 18;
	setimaEncomenda.remetente = setimoCliente;
	setimaEncomenda.destinatario = oitavoCliente;
	quantidadeRelampago++;

	EncomendaRelampago oitavaEncomenda;
	oitavaEncomenda.peso = 8;
	oitavaEncomenda.custoKg = 18;
	oitavaEncomenda.remetente = oitavoCliente;
	oitavaEncomenda.destinatario = primeiroCliente;
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