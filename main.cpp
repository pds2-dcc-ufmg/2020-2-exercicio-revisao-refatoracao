#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

using namespace std;

int main(){

	Cliente cli0("Thales", "Rua dos Pré-Socráticos", "Miletus",	"Ionia", "548 a.C.");

	Cliente cli1("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2("Platão", "Praça das Formas", "Atenas", "Ática", "384 a.C.");

	Cliente cli3("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7 ("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantidade_normais = 0;
	int quantidade_relampagos = 0;

	EncomendaNormal enc0(12, 5, cli0, cli1);
	quantidade_normais++;

	EncomendaNormal enc1(12, 10, cli1, cli2);
	quantidade_normais++;

	EncomendaNormal enc2(12, 7, cli2, cli3);
	quantidade_normais++;

	EncomendaNormal enc3(12, 2, cli3, cli4);
	quantidade_normais++;

	EncomendaNormal enc4(12, 3, cli4, cli5);
	quantidade_normais++;

	EncomendaRelampago enc5(18, 13, cli5, cli6);
	quantidade_relampagos++;

	EncomendaRelampago enc6(18, 6, cli6, cli7);
	quantidade_relampagos++;

	EncomendaRelampago enc7(18, 8, cli7, cli0);
	quantidade_relampagos++;

	cout << "\n>> Relatório de encomendas <<" << endl;

	double custos_normais = 0;
	double custos_relampagos = 0;

    custos_normais += enc0.calcular();
    enc0.print();
	cout << endl;

	custos_normais += enc1.calcular();
	enc1.print();
	cout << endl;

	custos_normais += enc2.calcular();
	enc2.print();
	cout << endl;

	custos_normais += enc3.calcular();
	enc3.print();
	cout << endl;

	custos_normais += enc4.calcular();
	enc4.print();
	cout << endl;

	custos_relampagos += enc5.calcular();
	enc5.print();
	cout << endl;

    custos_relampagos += enc6.calcular();
    enc6.print();
	cout << endl;

	custos_relampagos += enc7.calcular();
	enc7.print();
	cout << endl;

	cout << "\n>> Encomendas Normais <<"
    << "\nQuantidade: " << quantidade_normais
    << "\nValor Total: " << custos_normais
    << endl
    << "\n>> Encomendas Relâmpago <<"
    << "\nQuantidade: " << quantidade_relampagos
    << "\nValor Total: " << custos_relampagos
    << endl;

}
