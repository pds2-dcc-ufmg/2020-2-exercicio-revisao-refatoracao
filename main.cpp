#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

void gerarRelatorio(EncomendaNormal enc){
	enc.calcula();
	enc.print();
}
void gerarRelatorio(EncomendaRelampago enc){
	enc.calcula();
	enc.print();
}

int main(){
	
	Cliente cli0;
	cli0.cadastrar("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cli1;
	cli1.cadastrar("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cli2;
	cli2.cadastrar("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cli3;
	cli3.cadastrar("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cli4;
	cli4.cadastrar("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cli5;
	cli5.cadastrar("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cli6;
	cli6.cadastrar("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cli7;
	cli7.cadastrar("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	

	int quantN = 0;
	int quantR = 0;

	EncomendaNormal enc0;
	enc0.registrarEncomenda(5, 12, cli0, cli1);
	quantN++;

	EncomendaNormal enc1;
	enc1.registrarEncomenda(10, 12, cli1, cli2);
	quantN++;

	EncomendaNormal enc2;
	enc2.registrarEncomenda(7, 12, cli2, cli3);
	quantN++;

	EncomendaNormal enc3;
	enc3.registrarEncomenda(2, 12, cli3, cli4);
	quantN++;

	EncomendaNormal enc4;
	enc4.registrarEncomenda(3, 12, cli4, cli5);
	quantN++;

	EncomendaRelampago enc5;
	enc5.registrarEncomenda(13, 18, cli5, cli6);
	quantR++;

	EncomendaRelampago enc6;
	enc6.registrarEncomenda(6, 18, cli6, cli7);
	quantR++;

	EncomendaRelampago enc7;
	enc7.registrarEncomenda(8, 18, cli7, cli0);
	quantR++;
	
	
	cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	vector<EncomendaNormal> encomendasNormais = {enc0, enc1, enc2, enc3, enc4};
	vector<EncomendaRelampago> encomendasRelampago = {enc5, enc6, enc7};

	int i;

	for(i = 0; i < encomendasNormais.size(); i++){
		gerarRelatorio(encomendasNormais[i]);
		custN += encomendasNormais[i].calcula();
		cout << endl;
	}

	for(i = 0; i < encomendasRelampago.size(); i++){
		gerarRelatorio(encomendasRelampago[i]);
		custR += encomendasRelampago[i].calcula();
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