#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	int quantN = 0;  //quantidade de encomendas normais, inicialmente 0
	int quantR = 0;  //quantidade de encomendas relampagos, inicialmente 0
	double custo_kg_normal = 12.0;  //custo do kg da encomenda normal
	double custo_kg_relampago = 18.0;  //custo do kg da encomenda relampago
	double custN = 0;  //soma do custo de todas as encomendas normais, inicialmente 0
	double custR = 0;  //soma do custo de todas as encomendas relampagos, inicialmente 0
	
	//clientes:
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

	//encomendas:

	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustoKg(custo_kg_normal);
	enc0.setRemetente(cli0);
	enc0.setDest(cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustoKg(custo_kg_normal);
	enc1.setRemetente(cli1);
	enc1.setDest(cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustoKg(custo_kg_normal);
	enc2.setRemetente(cli2);
	enc2.setDest(cli3;)
	quantN++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustoKg(custo_kg_normal);
	enc3.setRemetente(cli3);
	enc3.setDest(cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustoKg(custo_kg_normal);
	enc4.setRemetente(cli4);
	enc4.setDest(cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustoKg(custo_kg_relampago);
	enc5.setRemetente(cli5);
	enc5.setDest(cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustoKg(custo_kg_relampago);
	enc6.setRemetente(cli6);
	enc6.setDest(cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustoKg(custo_kg_relampago);
	enc7.setRemetente(cli7);
	enc7.setDest(cli0);
	quantR++;
	
	//relatorio de encomendas:
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	enc0.getCustoTotal(getTaxa());
	enc0.print();
	custN += enc0.getCustoTotal(getTaxa());
	std::cout << endl;

	enc1.getCustoTotal(getTaxa());
	enc1.print();
	custN += enc1.getCustoTotal(getTaxa());
	std::cout << endl;

	enc2.getCustoTotal(getTaxa());
	enc2.print();
	custN += enc2.getCustoTotal(getTaxa());
	std::cout << endl;

	enc3.getCustoTotal(getTaxa());
	enc3.print();
	custN += enc3.getCustoTotal(getTaxa());
	std::cout << endl;

	enc4.getCustoTotal(getTaxa());
	enc4.print();
	custN += enc4.getCustoTotal(getTaxa());
	std::cout << endl;

	enc5.getCustoTotal(getTaxa());
	enc5.print();
	custR += enc5.getCustoTotal(getTaxa());
	std::cout << endl;

	enc6.getCustoTotal(getTaxa());
	enc6.print();
	custR += enc6.getCustoTotal(getTaxa());
	std::cout << endl;

	enc7.getCustoTotal(getTaxa());
	enc7.print();
	custR += enc7.getCustoTotal(getTaxa());
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
