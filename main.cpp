#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){

	Cliente cliente0;
	cliente0.nome = "Thales";
	cliente0.endereco = "Rua dos Pré-Socráticos";
	cliente0.cidade = "Miletus";
	cliente0.estado = "Ionia";
	cliente0.cep = "548 a.C.";

	Cliente cliente1;
	cliente1.nome = "Aristóteles";
	cliente1.endereco = "Avenida do Meio-Termo";
	cliente1.cidade = "Atenas";
	cliente1.estado = "Ática";
	cliente1.cep = "384 a.C.";

	Cliente cliente2;
	cliente2.nome = "Platão";
	cliente2.endereco = "Praça das Formas";
	cliente2.cidade = "Atenas";
	cliente2.estado = "Ática";
	cliente2.cep = "348 a.C";

	Cliente cliente3;
	cliente3.nome = "Sócrates";
	cliente3.endereco = "Rua do Elenchus";
	cliente3.cidade = "Atenas";
	cliente3.estado = "Ática";
	cliente3.cep = "399 a.C.";

	Cliente cliente4;
	cliente4.nome = "Pitágoras";
	cliente4.endereco = "Praça dos Quadrados dos Catetos";
	cliente4.cidade = "Samos";
	cliente4.estado = "Egeu";
	cliente4.cep = "571 a.C.";

	Cliente cliente5;
	cliente5.nome = "Parmênides";
	cliente5.endereco = "Rua do Não Ser";
	cliente5.cidade = "Eleia";
	cliente5.estado = "Magna Grécia";
	cliente5.cep = "460 a.C.";

	Cliente cliente6;
	cliente6.nome = "Empédocles";
	cliente6.endereco = "Rua dos Quatro Elementos";
	cliente6.cidade = "Agrigento";
	cliente6.estado = "Sicília";
	cliente6.cep = "495 a.C.";

	Cliente cliente7;
	cliente7.nome = "Anaxágoras";
	cliente7.endereco = "Avenida da Mente Cósmica";
	cliente7.cidade = "Clazômenas";
	cliente7.estado = "Jónia";
	cliente7.cep = "499 a.C.";

	int quantidadeNormal = 0;
	int quantR = 0;

	EncomendaNormal encomenda0;
	encomenda0.peso = 5;
	encomenda0.custoKg = 12;
	encomenda0.remetente = cliente0;
	encomenda0.destinatario = cliente1;
	quantidadeNormal++;

	EncomendaNormal encomenda1;
	encomenda1.peso = 10;
	encomenda1.custoKg = 12;
	encomenda1.remetente = cliente1;
	encomenda1.destinatario = cliente2;
	quantidadeNormal++;

	EncomendaNormal encomenda2;
	encomenda2.peso = 7;
	encomenda2.custoKg = 12;
	encomenda2.remetente = cliente2;
	encomenda2.destinatario = cliente3;
	quantidadeNormal++;

	EncomendaNormal encomenda3;
	encomenda3.peso = 2;
	encomenda3.custoKg = 12;
	encomenda3.remetente = cliente3;
	encomenda3.destinatario = cliente4;
	quantidadeNormal++;

	EncomendaNormal encomenda4;
	encomenda4.peso = 3;
	encomenda4.custoKg = 12;
	encomenda4.remetente = cliente4;
	encomenda4.destinatario = cliente5;
	quantidadeNormal++;

	EncomendaRelampago encomenda5;
	encomenda5.peso = 13;
	encomenda5.custoKg = 18;
	encomenda5.remetente = cliente5;
	encomenda5.destinatario = cliente6;
	quantidadeRelampago++;

	EncomendaRelampago encomenda6;
	encomenda6.peso = 6;
	encomenda6.custoKg = 18;
	encomenda6.remetente = cliente6;
	encomenda6.destinatario = cliente7;
	quantidadeRelampago++;

	EncomendaRelampago encomenda7;
	encomenda7.peso = 8;
	encomenda7.custoKg = 18;
	encomenda7.remetente = cliente7;
	encomenda7.destinatario = cliente0;
	quantidadeRelampago++;

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRelampago = 0;

	encomenda0.calculaPreco();
	encomenda0.printEncomenda();
	custoNormal += encomenda0.calculaPreco();
	std::cout << endl;

	encomenda1.calculaPreco();
	encomenda1.printEncomenda();
	custoNormal += encomenda1.calculaPreco();
	std::cout << endl;

	encomenda2.calculaPreco();
	encomenda2.printEncomenda();
	custoNormal += encomenda2.calculaPreco();
	std::cout << endl;

	encomenda3.calculaPreco();
	encomenda3.printEncomenda();
	custoNormal += encomenda3.calculaPreco();
	std::cout << endl;

	encomenda4.calculaPreco();
	encomenda4.printEncomenda();
	custoNormal += encomenda4.calculaPreco();
	std::cout << endl;

	encomenda5.calculaPreco();
	encomenda5.printEncomenda();
	custoRelampago += encomenda5.calculaPreco();
	std::cout << endl;

	encomenda6.calculaPreco();
	encomenda6.printEncomenda();
	custoRelampago += encomenda6.calculaPreco();
	std::cout << endl;

	encomenda7.calculaPreco();
	encomenda7.printEncomenda();
	custoRelampago += encomenda7.calculaPreco();
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
