#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli0;
	cli0.setNome("Thales");
	cli0.setEndereco("Rua dos Pre-Socráticos");
	cli0.setCidade("Miletus");
	cli0.setEstado( "Ionia");
	cli0.setCep("548 a.C.");

	Cliente cli1;
	cli1.setNome("Aristoteles");
	cli1.setEndereco("Avenida do Meio-Termo");
	cli1.setCidade("Atenas");
	cli1.setEstado("Atica");
	cli1.setCep("384 a.C.");

	Cliente cli2;
	cli2.setNome("Platao");
	cli2.setEndereco("Praca das Formas");
	cli2.setCidade("Atenas");
	cli2.setEstado("Atica");
	cli2.setCep("348 a.C");

	Cliente cli3;
	cli3.setNome("Socrates");
	cli3.setEndereco("Rua do Elenchus") ;
	cli3.setCidade("Atenas");
	cli3.setEstado("Atica");
	cli3.setCep("399 a.C.");

	Cliente cli4;
	cli4.setNome("Pitagoras");
	cli4.setEndereco("Praca dos Quadrados dos Catetos");
	cli4.setCidade("Samos");
	cli4.setEstado("Egeu");
	cli4.setCep("571 a.C.");

	Cliente cli5;
	cli5.setNome("Parmenides");
	cli5.setEndereco("Rua do Nao Ser");
	cli5.setCidade("Eleia");
	cli5.setEstado("Magna Grecia");
	cli5.setCep("460 a.C.");

	Cliente cli6;
	cli6.setNome("Empedocles");
	cli6.setEndereco("Rua dos Quatro Elementos");
	cli6.setCidade("Agrigento");
	cli6.setEstado("Sicilia");
	cli6.setCep("495 a.C");

	Cliente cli7;
	cli7.setNome("Anaxagoras");
	cli7.setEndereco("Avenida da Mente Cosmica");
	cli7.setCidade("Clazomenas");
	cli7.setEstado("Jonia");
	cli7.setCep("499 a.C.");

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCusto(12);
	enc0.setRemetente(cli0);
	enc0.setDestinatario(cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCusto(12);
	enc1.setRemetente(cli1);
	enc1.setDestinatario(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCusto(12);
	enc2.setRemetente(cli2);
	enc2.setDestinatario(cli3);
	quantN++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCusto(12);
	enc3.setRemetente(cli3);
	enc3.setDestinatario(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCusto(12);
	enc4.setRemetente(cli4);
	enc4.setDestinatario(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCusto(18);
	enc5.setRemetente(cli5);
	enc5.setDestinatario(cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCusto(18);
	enc6.setRemetente(cli6);
	enc6.setDestinatario(cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCusto(18);
	enc7.setRemetente(cli7);
	enc7.setDestinatario(cli0);
	quantR++;
	
	std::cout << "\n>> Relatorio de encomendas <<" << endl;

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
		 << "\n>> Encomendas Relampago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
	return 0;
}