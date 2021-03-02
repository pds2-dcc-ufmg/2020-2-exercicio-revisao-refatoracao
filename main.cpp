#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	
	Cliente cli[8];
	
	cli[0] = new Cliente(Thales, Rua dos Pré-Socráticos, Miletus, Ionia, 548 a.C.);
	cli[1] = new Cliente(Aristóteles, Avenida do Meio-Termo, Atenas, Ática, 384 a.C.);
	cli[2] = new Cliente(Platão, Praça das Formas, Atenas, Ática, 348 a.C.);
	cli[3] = new Cliente(Sócrates, Rua do Elenchus, Atenas, Ática, 399 a.C.);
	cli[4] = new Cliente(Pitágoras, Praça dos Quadrados dos Catetos, Samos, Egeu, 571 a.C.);
	cli[5] = new Cliente(Parmênides, Rua do Não Ser, Eleia, Magna Grécia, 460 a.C.);
	cli[6] = new Cliente(Empédocles, Rua dos Quatro Elementos, Agrigento, Sicília, 495 a.C.);
	cli[7] = new Cliente(Anaxágoras, Avenida da Mente Cósmica, Clazômenas, Jónia, 499 a.C.);
	
	int quantN = 0;
	int quantR = 0;
	
	Encomenda enc[8];
	
	enc[0] = new Encomenda(0,5,12,cli[0],cli[1]);
	enc[1] = new Encomenda(0,10,12,cli[1],cli[2]);
	enc[2] = new Encomenda(0,7,12,cli[2],cli[3]);
	enc[3] = new Encomenda(0,2,12,cli[3],cli[4]);
	enc[4] = new Encomenda(0,3,12,cli[4],cli[5]);
	enc[5] = new Encomenda(1,13,18,cli[5],cli[6]);
	enc[6] = new Encomenda(1,6,18,cli[6],cli[7]);
	enc[7] = new Encomenda(1,8,18,cli[7],cli[0]);

	/*EncomendaNormal enc4;
	enc4.PESO = 3;
	enc4.CUSTOkg = 12;
	enc4.remetente = cli4;
	enc4.dest = cli5;
	quantN++;*/

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	int quantN = 0;
	double custN = 0;
	int quantR = 0;
	double custR = 0;
	
	for(int i=0; i<enc.size(); i++){
		enc[i].calcula();
		enc[i].print();
		cout << endl;
		if(enc[i].Prioridade()){
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
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
