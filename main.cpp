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

	int QuantidadeEntregasNormal = 0;
	int QuantidadeEntregasRelampago = 0;

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	QuantidadeEntregasNormal++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	QuantidadeEntregasNormal++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	QuantidadeEntregasNormal++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	QuantidadeEntregasNormal++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5); 
	QuantidadeEntregasNormal++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	QuantidadeEntregasRelampago++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	QuantidadeEntregasRelampago++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	QuantidadeEntregasRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double TotalCustoNormal = 0;
	double TotalCustoRelampago = 0;

	enc0.print();
	TotalCustoNormal += enc0.getCustoTotal();
	std::cout << endl;

	enc1.print();
	TotalCustoNormal += enc1.getCustoTotal();
	std::cout << endl;

	enc2.print();
	TotalCustoNormal += enc2.getCustoTotal();
	std::cout << endl;

	enc3.print();
	TotalCustoNormal += enc3.getCustoTotal();
	std::cout << endl;

	enc4.print();
	TotalCustoNormal += enc4.getCustoTotal();
	std::cout << endl;

	enc5.print();
	TotalCustoRelampago += enc5.getCustoTotal();
	std::cout << endl;

	enc6.print();
	TotalCustoRelampago += enc6.getCustoTotal();
	std::cout << endl;

	enc7.print();
	TotalCustoRelampago += enc7.getCustoTotal();
	std::cout << endl;
	

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << QuantidadeEntregasNormal
		 << "\nValor Total: " << TotalCustoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << QuantidadeEntregasRelampago
		 << "\nValor Total: " << TotalCustoRelampago
		 << endl;
	
}