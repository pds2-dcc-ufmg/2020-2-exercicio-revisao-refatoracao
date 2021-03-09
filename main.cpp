#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

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
	enc0.peso = 5;
	enc0.custoKg = 12;
	enc0.remetente = cli0;
	enc0.destinatario = cli1;
	quantN++;

	EncomendaNormal enc1;
	enc1.peso = 10;
	enc1.custoKg = 12;
	enc1.remetente = cli1;
	enc1.destinatario = cli2;
	quantN++;

	EncomendaNormal enc2;
	enc2.peso = 7;
	enc2.custoKg = 12;
	enc2.remetente = cli2;
	enc2.destinatario = cli3;
	quantN++;

	EncomendaNormal enc3;
	enc3.peso = 2;
	enc3.custoKg = 12;
	enc3.remetente = cli3;
	enc3.destinatario = cli4;
	quantN++;

	EncomendaNormal enc4;
	enc4.peso = 3;
	enc4.custoKg = 12;
	enc4.remetente = cli4;
	enc4.destinatario = cli5;
	quantN++;

	EncomendaRelampago enc5;
	enc5.peso = 13;
	enc5.custoKg = 18;
	enc5.remetente = cli5;
	enc5.destinatario = cli6;
	quantR++;

	EncomendaRelampago enc6;
	enc6.peso = 6;
	enc6.custoKg = 18;
	enc6.remetente = cli6;
	enc6.destinatario = cli7;
	quantR++;

	EncomendaRelampago enc7;
	enc7.peso = 8;
	enc7.custoKg = 18;
	enc7.remetente = cli7;
	enc7.destinatario = cli0;
	quantR++;
	
	std::cout << std::endl << ">> Relatório de encomendas <<" << std::endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << std::endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << std::endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << std::endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << std::endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << std::endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << std::endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << std::endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	std::cout << std::endl;
	
	std::cout << std::endl << ">> Encomendas Normais <<" 
		 << std::endl << "Quantidade: " << quantN
		 << std::endl << "Valor Total: " << custN
		 << std::endl
		 << std::endl << ">> Encomendas Relâmpago <<" 
		 << std::endl << "Quantidade: " << quantR
		 << std::endl << "Valor Total: " << custR
		 << std::endl;
	
}
