#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
#include <vector>
using namespace std;

int main(){
	const int KgNormal = 12;
	const int KgRelampago = 18;
	vector<Cliente>Clientes(8);
	
	 Clientes[0] = Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	 Clientes[1] = Cliente( "Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
     Clientes[2] = Cliente("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	 Clientes[3] = Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	 Clientes[4] = Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	 Clientes[5] = Cliente("Parmênides","Rua do Não Ser","Eleia", "Magna Grécia","460 a.C.");
	 Clientes[6] = Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	 Clientes[7] = Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");


	int QuantNormal = 0;
	int QuantRelampago = 0;
    vector<EncomendaNormal>EncNorm(5);
	EncNorm[0] = EncomendaNormal(5,KgNormal,Clientes[0],Clientes[1]);
	/*EncomendaNormal enc0;
	enc0.PESO = 5;
	enc0.CUSTOkg = 12;
	enc0.remetente = cli0;
	enc0.dest = cli1;*/
	QuantNormal++;
	EncNorm[1] = EncomendaNormal(10,KgNormal,Clientes[1],Clientes[2]);
	QuantNormal++;
	EncNorm[2] = EncomendaNormal(7,KgNormal,Clientes[2],Clientes[3]);
	QuantNormal++;
    EncNorm[3] = EncomendaNormal(2,KgNormal,Clientes[3],Clientes[4]);
	QuantNormal++;
    EncNorm[4] = EncomendaNormal(3,KgNormal,Clientes[4],Clientes[5]);
	QuantNormal++;
    
	vector<EncomendaRelampago>EncRelamp(3);
	EncRelamp[0] = EncomendaRelampago(13,KgRelampago,Clientes[5],Clientes[6]); //enc5
	QuantRelampago++;
	EncRelamp[1] = EncomendaRelampago(6,KgRelampago,Clientes[6],Clientes[7]); //enc5
	QuantRelampago++;
	EncRelamp[2] = EncomendaRelampago(8,KgRelampago,Clientes[7],Clientes[0]); //enc5
	QuantRelampago++;
	 
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double CustoNormal = 0;
	double CustRelampago = 0;

	EncNorm[0].calcula();
	EncNorm[0].print();
	CustoNormal += EncNorm[0].calcula();
	std::cout << endl;

	EncNorm[1].calcula();
	EncNorm[1].print();
	CustoNormal += EncNorm[1].calcula();
	std::cout << endl;

	EncNorm[2].calcula();
	EncNorm[2].print();
	CustoNormal += EncNorm[2].calcula();
	std::cout << endl;

	EncNorm[3].calcula();
	EncNorm[3].print();
	CustoNormal += EncNorm[3].calcula();
	std::cout << endl;

	EncNorm[4].calcula();
	EncNorm[4].print();
	CustoNormal += EncNorm[4].calcula();
	std::cout << endl;

	EncRelamp[0].calcula();
	EncRelamp[0].print();
	CustRelampago += EncRelamp[0].calcula();
	std::cout << endl;

	EncRelamp[1].calcula();
	EncRelamp[1].print();
	CustRelampago += EncRelamp[1].calcula();
	std::cout << endl;

	EncRelamp[2].calcula();
	EncRelamp[2].print();
	CustRelampago += EncRelamp[2].calcula();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << QuantNormal++
		 << "\nValor Total: " << CustoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << QuantRelampago++
		 << "\nValor Total: " << CustRelampago
		 << endl;
	
}