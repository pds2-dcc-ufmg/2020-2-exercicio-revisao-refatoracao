#include <iostream>
#include <vector>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "ListaEncomendas.hpp"
using namespace std;

int main(){
	ListaEncomendas listaEncomendas;

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");
	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	EncomendaNormal enc0(5, 12, cli0, cli1);
	EncomendaNormal enc1(10, 12, cli1, cli2);
	EncomendaNormal enc2(7, 12, cli2, cli3);
	EncomendaNormal enc3(2, 12, cli3, cli4);
	EncomendaNormal enc4(3, 12, cli4, cli5);
	EncomendaRelampago enc5(13, 18, cli5, cli6);
	EncomendaRelampago enc6(6, 18, cli6, cli7);
	EncomendaRelampago enc7(8, 18, cli7, cli0);
	
	listaEncomendas.push_back(enc0);
	listaEncomendas.push_back(enc1);
	listaEncomendas.push_back(enc2);
	listaEncomendas.push_back(enc3);
	listaEncomendas.push_back(enc4);
	listaEncomendas.push_back(enc5);
	listaEncomendas.push_back(enc6);
	listaEncomendas.push_back(enc7);

	listaEncomendas.printRelatorio();
}