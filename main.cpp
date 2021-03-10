#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){

    Cliente *Cli0 = new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
    Cliente *Cli1 = new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
    Cliente *Cli2 = new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
    Cliente *Cli3 = new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
    Cliente *Cli4 = new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
    Cliente *Cli5 = new Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
    Cliente *Cli6 = new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
    Cliente *Cli7 = new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int QuantN = 0; //Quantidade de encomendas normais.
	int QuantR = 0; //Quantidade de encomendas relampago.

    EncomendaNormal *Enc0 = new EncomendaNormal(5 , 12, &(QuantN), *(Cli0), *(Cli1));
    EncomendaNormal *Enc1 = new EncomendaNormal(10, 12, &(QuantN), *(Cli1), *(Cli2));
    EncomendaNormal *Enc2 = new EncomendaNormal(7 , 12, &(QuantN), *(Cli2), *(Cli3));
    EncomendaNormal *Enc3 = new EncomendaNormal(2 , 12, &(QuantN), *(Cli3), *(Cli4));
    EncomendaNormal *Enc4 = new EncomendaNormal(3 , 12, &(QuantN), *(Cli4), *(Cli5));
    EncomendaRelampago *Enc5 = new EncomendaRelampago(13, 18, &(QuantR), *(Cli5), *(Cli6));
    EncomendaRelampago *Enc6 = new EncomendaRelampago(6 , 18, &(QuantR), *(Cli6), *(Cli7));
    EncomendaRelampago *Enc7 = new EncomendaRelampago(8 , 18, &(QuantR), *(Cli7), *(Cli0));

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double CustN = 0;//Custo total de encomendas normais.
	double CustR = 0;//Custo total de encomendas relampago.

	CustN += Enc0->DefinirPreco();
	CustN += Enc1->DefinirPreco();
	CustN += Enc2->DefinirPreco();
	CustN += Enc3->DefinirPreco();
	CustN += Enc4->DefinirPreco();
	CustR += Enc5->DefinirPreco();
	CustR += Enc6->DefinirPreco();
	CustR += Enc7->DefinirPreco();

	std::cout << "\n>> Encomendas Normais <<"
		 << "\nQuantidade: " << QuantN
		 << "\nValor Total: " << CustN
		 << endl
		 << "\n>> Encomendas Relâmpago <<"
		 << "\nQuantidade: " << QuantR
		 << "\nValor Total: " << CustR
		 << endl;

}
