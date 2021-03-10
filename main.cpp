#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main()
{
	Cliente cliente0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
 	Cliente cliente1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cliente2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cliente3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cliente4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cliente5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	Cliente cliente6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cliente7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	int quantindade_EncomendaNormal = 0;
	int quantidade_EncomendaRelampago = 0;

	EncomendaNormal encomenda0(5,12,cliente0,cliente1);
	quantindade_EncomendaNormal++;
	EncomendaNormal encomenda1(10,12,cliente1,cliente2);
	quantindade_EncomendaNormal++;
	EncomendaNormal encomenda2(7,12,cliente2,cliente3);
	quantindade_EncomendaNormal++;
	EncomendaNormal encomenda3(2,12,cliente3,cliente4);
	quantindade_EncomendaNormal++;
	EncomendaNormal encomenda4(3,12,cliente4,cliente5);
    	quantindade_EncomendaNormal++;
	EncomendaRelampago encomenda5(13,18,cliente5,cliente6);
	quantidade_EncomendaRelampago++;
	EncomendaRelampago encomenda6(6,18,cliente6,cliente7);
	quantidade_EncomendaRelampago++;
	EncomendaRelampago encomenda7(8,18,cliente7,cliente0);
    	quantidade_EncomendaRelampago++;

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoTotal_EncomendaNormal = 0;
	double custoTotal_EncomendaRelampago = 0;

	encomenda0.calcula();
	encomenda0.print();
	custoTotal_EncomendaNormal += encomenda0.calcula();
	cout << endl;

	encomenda1.calcula();
	encomenda1.print();
	custoTotal_EncomendaNormal += encomenda1.calcula();
	cout << endl;

	encomenda2.calcula();
	encomenda2.print();
	custoTotal_EncomendaNormal += encomenda2.calcula();
	cout << endl;

	encomenda3.calcula();
	encomenda3.print();
	custoTotal_EncomendaNormal += encomenda3.calcula();
	std::cout << endl;

	encomenda4.calcula();
	encomenda4.print();
	custoTotal_EncomendaNormal += encomenda4.calcula();
	cout << endl;

	encomenda5.calcula();
	encomenda5.print();
	custoTotal_EncomendaRelampago += encomenda5.calcula();
	cout << endl;

	encomenda6.calcula();
	encomenda6.print();
	custoTotal_EncomendaRelampago += encomenda6.calcula();
	cout << endl;

	encomenda7.calcula();
	encomenda7.print();
	custoTotal_EncomendaRelampago += encomenda7.calcula();
	cout << endl;
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantindade_EncomendaNormal
		 << "\nValor Total: " << custoTotal_EncomendaNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<"
		 << "\nQuantidade: " << quantidade_EncomendaRelampago
		 << "\nValor Total: " << custoTotal_EncomendaRelampago
		 << endl;
	
}
