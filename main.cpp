#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
	int quantN = 0;
	int quantR = 0;
	double custN = 0;
	double custR = 0;

	Cliente cli0;
	cli0.setDadosCliente("Thales","Rua dos Pré-Socráticos","Miletu","Ionia","548 a.C");

	Cliente cli1;
	cli1.setDadosCliente("Aristóteles","Avenida do Meio-Termo","Atena","Ática","384 a.C.");

	Cliente cli2;
	cli2.setDadosCliente("Platão","Praca das Formas","Atenas","Ática","348 a.C");

	Cliente cli3;
	cli3.setDadosCliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");

	Cliente cli4;
	cli4.setDadosCliente("Pitágoras","Praça dos Quadrados dos Cateto","Samos","Egeu","571 a.C.");

	Cliente cli5;
	cli5.setDadosCliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");

	Cliente cli6;
	cli6.setDadosCliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");

	Cliente cli7;
	cli7.setDadosCliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	Encomenda enc0;
	enc0.setDadosEncomenda(cli0, cli1, 5, 12, false);
	quantN++;

	Encomenda enc1;
  enc1.setDadosEncomenda(cli1,cli2,10,12,false);
	quantN++;

	Encomenda enc2;
  enc2.setDadosEncomenda(cli2,cli3,7,12,false);
	quantN++;

	Encomenda enc3;
  enc3.setDadosEncomenda(cli3,cli4,2,12,false);
	quantN++;

	Encomenda enc4;
  enc4.setDadosEncomenda(cli4,cli5,3,12,false);
	quantN++;

	Encomenda enc5;
  enc5.setDadosEncomenda(cli5,cli6,13,18,true);
	quantR++;

	Encomenda enc6;
  enc6.setDadosEncomenda(cli6,cli7,6,18,true);
	quantR++;

	Encomenda enc7;
  enc7.setDadosEncomenda(cli7,cli0,8,18,true);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	enc0.printDadosEncomenda();
	custN += enc0.calculaTotal();
	std::cout << endl;

	enc1.printDadosEncomenda();
	custN += enc1.calculaTotal();
	std::cout << endl;

	enc2.printDadosEncomenda();
	custN += enc2.calculaTotal();
	std::cout << endl;

	enc3.printDadosEncomenda();
	custN += enc3.calculaTotal();
	std::cout << endl;

	enc4.printDadosEncomenda();
	custN += enc4.calculaTotal();
	std::cout << endl;

	enc5.printDadosEncomenda();
	custR += enc5.calculaTotal();
	std::cout << endl;

	enc6.printDadosEncomenda();
	custR += enc6.calculaTotal();
	std::cout << endl;

	enc7.printDadosEncomenda();
	custR += enc7.calculaTotal();
	std::cout << endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
}
