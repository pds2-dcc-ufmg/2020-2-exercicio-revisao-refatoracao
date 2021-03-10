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

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustoKg(12);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustoKg(12);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustoKg(12);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	quantN++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustoKg(12);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustoKg(12);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustoKg(18);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustoKg(18);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustoKg(18);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	quantR++;

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

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
