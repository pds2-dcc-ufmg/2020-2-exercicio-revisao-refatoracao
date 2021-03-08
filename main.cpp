#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include "Relatorio.hpp"
#include <vector>

using namespace std;

int main(){

    //Inicialização armazenandos os dados dos clientes com a classe Clientes

	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");

	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");

	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");

	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");

	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");

	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");

	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");

	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	
	// Inicializaçã dos vetores que mantem as listas de emcomendas normais e remlampago
	vector<EncomendaNormal> Lista_Normal;
	vector<EncomendaRelampago> Lista_Relampago;
	
	// Atribuição dos vetores que mantem as listas de emcomendas normais e remlampago
	Lista_Normal.push_back(EncomendaNormal(cli0,cli1,5,12));

	Lista_Normal.push_back(EncomendaNormal(cli1,cli2,10,12));

	Lista_Normal.push_back(EncomendaNormal(cli2,cli3,7,12));

	Lista_Normal.push_back(EncomendaNormal(cli3,cli4,2,12));

	Lista_Normal.push_back(EncomendaNormal(cli4,cli5,3,12));

	Lista_Relampago.push_back(EncomendaRelampago(cli5,cli6,13,18));

	Lista_Relampago.push_back(EncomendaRelampago(cli6,cli7,6,18));

	Lista_Relampago.push_back(EncomendaRelampago(cli7,cli0,8,18));

	std::cout << "\n>> Relatório de encomendas <<" << endl;
	
	// Função responsável pelo print do Relatório de encomendas
	Relatorio(Lista_Normal,Lista_Relampago);

    return 0;

}
