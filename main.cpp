#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli[8];
	
	cli[0].set("Thales","Rua dos Pré-Socráticos", "Miletus", "Ionia","548 a.C.");
	cli[1].set("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	cli[2].set("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");
	cli[3].set("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	cli[4].set("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	cli[5].set("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	cli[6].set("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	cli[7].set("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	
	Encomenda enc[8];
	
	enc[0].set(0,5,12,cli[0],cli[1]);
	enc[1].set(0,10,12,cli[1],cli[2]);
	enc[2].set(0,7,12,cli[2],cli[3]);
	enc[3].set(0,2,12,cli[3],cli[4]);
	enc[4].set(0,3,12,cli[4],cli[5]);
	enc[5].set(1,13,18,cli[5],cli[6]);
	enc[6].set(1,6,18,cli[6],cli[7]);
	enc[7].set(1,8,18,cli[7],cli[0]);

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	int quantN = 0;
	double custN = 0;
	int quantR = 0;
	double custR = 0;
	
	for(int i=0; i<8; i++){
		enc[i].calcula();
		enc[i].print();
		std::cout << std::endl;
		if(enc[i].prioridade()){
			quantR++;
			custR+=enc[i].calcula();
		}
		else{
			quantN++;
			custN+=enc[i].calcula();
		}
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << std::endl;
	
}
