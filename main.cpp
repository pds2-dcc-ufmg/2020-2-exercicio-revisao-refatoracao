#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <string>

using namespace std;

int main(){
	
	int qtdEntregasNormais = 0;
	int qtdEntregasRelampago = 0;
/*
    Declaração dos nomes e dados dos clientes
	Ordem dos dados pedidos: Endereço, Cidade, Estado, Cep.
*/
	Cliente cli0;
	cli0.setNome("Thales");
	cli0.setDados("Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");

	Cliente cli1;
	cli1.setNome("Aristóteles");
	cli1.setDados("Avenida do Meio-Termo","Atenas","Ática","384 a.C.");

	Cliente cli2;
	cli2.setNome("Platão");
	cli2.setDados("Praça das Formas","Atenas","Ática","348 a.C");

	Cliente cli3;
	cli3.setNome("Sócrates");
	cli3.setDados("Rua do Elenchus","Atenas","Ática","399 a.C.");

	Cliente cli4;
	cli4.setNome("Pitágoras");
	cli4.setDados("Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");

	Cliente cli5;
	cli5.setNome("Parmênides");
	cli5.setDados("Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");

	Cliente cli6;
	cli6.setNome("Empédocles");
	cli6.setDados("Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");


	Cliente cli7;
	cli7.setNome("Anaxágoras");
	cli7.setDados("Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");



	EncomendaNormal enc0;
	enc0.setPeso(5);
	enc0.setCustokg(12);
	enc0.setCaminho(cli0,cli1);
	qtdEntregasNormais++;

	EncomendaNormal enc1;
	enc1.setPeso(10);
	enc1.setCustokg(12);
	enc1.setCaminho(cli1,cli2);
	qtdEntregasNormais++;

	EncomendaNormal enc2;
	enc2.setPeso(7);
	enc2.setCustokg(12);
	enc2.setCaminho(cli2,cli3);
	qtdEntregasNormais++;

	EncomendaNormal enc3;
	enc3.setPeso(2);
	enc3.setCustokg(12);
	enc3.setCaminho(cli3,cli4);
	qtdEntregasNormais++;

	EncomendaNormal enc4;
	enc4.setPeso(3);
	enc4.setCustokg(12);
	enc4.setCaminho(cli4,cli5);
	qtdEntregasNormais++;

	EncomendaRelampago enc5;
	enc5.setPeso(13);
	enc5.setCustokg(18);
	enc5.setCaminho(cli5,cli6);
	qtdEntregasRelampago++;

	EncomendaRelampago enc6;
	enc6.setPeso(6);
	enc6.setCustokg(18);
	enc6.setCaminho(cli6,cli7);
	qtdEntregasRelampago++;

	EncomendaRelampago enc7;
	enc7.setPeso(8);
	enc7.setCustokg(18);
	enc7.setCaminho(cli7,cli0);
	qtdEntregasRelampago++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoEncomendasNormais = 0;
	double custoEncomendasRelampago = 0;

	enc0.imprimeEncomenda();
	custoEncomendasNormais += enc0.calculaValor();

	enc1.imprimeEncomenda();
	custoEncomendasNormais += enc1.calculaValor();

	enc2.imprimeEncomenda();
	custoEncomendasNormais += enc2.calculaValor();

	enc3.imprimeEncomenda();
	custoEncomendasNormais += enc3.calculaValor();

	enc4.imprimeEncomenda();
	custoEncomendasNormais += enc4.calculaValor();

	enc5.imprimeEncomenda();
	custoEncomendasRelampago += enc5.calculaValor();

	enc6.imprimeEncomenda();
	custoEncomendasRelampago += enc6.calculaValor();

	enc7.imprimeEncomenda();
	custoEncomendasRelampago += enc7.calculaValor();
	
	std::cout << "\n>> Encomendas Normais <<" 
			  << "\nQuantidade: " << qtdEntregasNormais
			  << "\nValor Total: " << custoEncomendasNormais
			  << endl
			  << "\n>> Encomendas Relâmpago <<" 
			  << "\nQuantidade: " << qtdEntregasRelampago
			  << "\nValor Total: " << custoEncomendasRelampago
			  << endl;
	
}
