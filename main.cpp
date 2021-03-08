#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	Cliente cliente[8] = {
	Cliente cli0 ("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia" , "548 a.C."),
        Cliente cli1 ("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática" , "384 a.C."),
	Cliente cli2 ("Platão", "Praça das Formas", "Atenas", "Ática" , "348 a.C"),
	Cliente cli3 ("Sócrates", "Rua do Elenchus", "Atenas", "Ática" , "399 a.C."),
	Cliente cli4 ("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu" , "571 a.C."),
	Cliente cli5 ("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia" , "460 a.C."),
	Cliente cli6 ("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília" , "495 a.C."),
	Cliente cli7 ("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia" , "499 a.C.")
	};
	
	int quantNormal = 5, quantRel = 3;
        
	EncomendaNormal encomendas [8] = {
	EncomendaNormal enc0 (5, 12, cliente[0], cliente[1]),
        EncomendaNormal enc1 (10, 12, cliente[1], cliente[2]),
        EncomendaNormal enc2 (7, 12, cliente[2], cliente[3]),
        EncomendaNormal enc3 (2, 12, cliente[3], cliente[4]),
	EncomendaNormal enc4 (3, 12, cliente[4], cliente[5]),
	EncomendaRelampago enc5 (13, 18, cliente[5], cliente[6]),
        EncomendaRelampago enc6 (6, 18, cliente[6], cliente[7]),
	EncomendaRelampago enc7 (8, 18, cliente[7], cliente[0]),
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0;
	double custoRel = 0;
        int i = 0;
	for(i=0; i<8; i++){
	encomendas[i].calcula();
	encomendas[i].print();
		if(i<=4) custoNormal += encomendas[i].calcula();
		else custoRel += enc5.calcula();
	std::cout << endl;
	}

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
