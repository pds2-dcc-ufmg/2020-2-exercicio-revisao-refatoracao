#include <iostream>
#include <string>
#include <vector>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "Registro.cpp"

using namespace std;
using namespace Registro;

int main(){

	vector<EncomendaNormal> normal;
	vector<EncomendaRelampago> relampago;

	/** registrando os clientes pela função do módulo Registro, passando nome, endereço, cidade, estado e CEP como parâmetros */

	Cliente cli0 = registrarCliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1 = registrarCliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2 = registrarCliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3 = registrarCliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4 = registrarCliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5 = registrarCliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6 = registrarCliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7 = registrarCliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	/** registrando as encomendas normais pela função do módulo Registro, passando peso, remetente e destinatário como parâmetros */

	EncomendaNormal enc0 = registrarNormal(5, cli0, cli1);
	normal.push_back(enc0);

	EncomendaNormal enc1 = registrarNormal(10, cli1, cli2);
	normal.push_back(enc1);

	EncomendaNormal enc2 = registrarNormal(7, cli2, cli3);
	normal.push_back(enc2);

	EncomendaNormal enc3 = registrarNormal(2, cli3, cli4);
	normal.push_back(enc3);

	EncomendaNormal enc4 = registrarNormal(3, cli4, cli5);
	normal.push_back(enc4);

	/** registrando as encomendas relâmpago pela função do módulo Registro, passando peso, remetente e destinatário como parâmetros */

	EncomendaRelampago enc5 = registrarRelampago(13, cli5, cli6);
	relampago.push_back(enc5);

	EncomendaRelampago enc6 = registrarRelampago(6, cli6, cli7);
	relampago.push_back(enc6);

	EncomendaRelampago enc7 = registrarRelampago(8, cli7, cli0);
	relampago.push_back(enc7);

	cout << "\n>> Relatório de encomendas <<" << endl;

	int quantN = normal.size();
	int quantR = relampago.size();

	double custN = 0;
	double custR = 0;

	/** iterando pelos vetores de encomendas para somar os custos totais */

	for(auto enc: normal) {
		enc.print();
		custN += enc.calculaTotal();
		cout << endl;
	}

	for(auto enc: relampago) {
		enc.print();
		custR += enc.calculaTotal();
		cout << endl;
	}

	cout << "\n>> Encomendas Normais <<"
	     << "\nQuantidade: " << quantN
	     << "\nValor Total: " << custN
	     << endl
	     << "\n>> Encomendas Relâmpago <<"
	     << "\nQuantidade: " << quantR
	     << "\nValor Total: " << custR
	     << endl;

}
