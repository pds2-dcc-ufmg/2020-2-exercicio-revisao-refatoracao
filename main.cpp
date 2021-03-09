#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main()
{
	/* Foram criadas duas funções para receber os valores dos objetos Cliente
	e Encomenda, pois passar os valores pelo main como estava sendo feito deixa
	o código muito poluído. */

	Cliente cli0, cli1, cli2, cli3, cli4, cli5, cli6, cli7;
	EncomendaNormal enc0, enc1, enc2, enc3, enc4, enc5, enc6, enc7;

	int quantN = 0, quantR = 0;
	double custN = 0, custR = 0;

	cli0.cadastro("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	cli1.cadastro("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	cli2.cadastro("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	cli3.cadastro("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	cli4.cadastro("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	cli5.cadastro("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	cli6.cadastro("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	cli7.cadastro("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	enc0.encomenda(5, 12, cli0, cli1);
	quantN++;

	enc1.encomenda(10, 12, cli1, cli2);
	quantN++;

	enc2.encomenda(7, 12, cli2, cli3);
	quantN++;

	enc3.encomenda(2, 12, cli3, cli4);
	quantN++;

	enc4.encomenda(3, 12, cli4, cli5);
	quantN++;

	enc5.encomenda(13, 18, cli5, cli6);
	quantR++;

	enc6.encomenda(6, 18, cli6, cli7);
	quantR++;

	enc7.encomenda(8, 18, cli7, cli0);
	quantR++;

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	/*Todas as instancias que chamam o método calcula que
	estão antes da chamada de impressão foram colocadas como
	comentários pq o método calcula estava sendo chamado 2 vezes
	sem necesidade, pois ele é chamado de novo após a chamada do
	método print.*/

	//enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	//enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	//enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	//enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	//enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	//enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	//enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

	//enc7.calcula();
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