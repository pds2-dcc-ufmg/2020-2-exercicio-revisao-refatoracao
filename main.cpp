#include <iostream>
#include <string>
#include "Encomenda.hpp"
#include "Cliente.hpp"

int main(){
	
	Cliente cliente[8];
	
	cliente[0].set("Thales","Rua dos Pré-Socráticos", "Miletus", "Ionia","548 a.C.");
	cliente[1].set("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	cliente[2].set("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C.");
	cliente[3].set("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	cliente[4].set("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	cliente[5].set("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	cliente[6].set("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	cliente[7].set("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	
	Encomenda encomenda[8];
	
	encomenda[0].set(0,5,12,cli[0],cli[1]);
	encomenda[1].set(0,10,12,cli[1],cli[2]);
	encomenda[2].set(0,7,12,cli[2],cli[3]);
	encomenda[3].set(0,2,12,cli[3],cli[4]);
	encomenda[4].set(0,3,12,cli[4],cli[5]);
	encomenda[5].set(1,13,18,cli[5],cli[6]);
	encomenda[6].set(1,6,18,cli[6],cli[7]);
	encomenda[7].set(1,8,18,cli[7],cli[0]);

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	int QuantN = 0;
	double CustoN = 0;
	int QuantR = 0;
	double CustoR = 0;
	
	for(int i=0; i<8; i++){
		
		encomenda[i].calcula();
		encomenda[i].print();
		
		std::cout << std::endl;
		
		if(encomenda[i].prioridade()){
			QuantN++;
			CustoR+=encomenda[i].calcula();
		}
		else{
			QuantiaR++;
			CustoN+=encomenda[i].calcula();
		}
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << QuantN
		 << "\nValor Total: " << CustoN
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << QuantR
		 << "\nValor Total: " << CustoR
		 << std::endl;
}
