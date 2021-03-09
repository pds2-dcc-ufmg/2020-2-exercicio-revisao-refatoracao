#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	//Declaração dos clientes:
	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	
	//Colocando os clientes num vetor:
	std::vector<Cliente> clientes;
    	clientes.push_back(cli0);
    	clientes.push_back(cli1);
    	clientes.push_back(cli2);
   	 clientes.push_back(cli3);
    	clientes.push_back(cli4);
    	clientes.push_back(cli5);
    	clientes.push_back(cli6);
    	clientes.push_back(cli7);

    	//Declaração das encomendas:
	int quantN = 0;
	int quantR = 0;

	Encomenda* enc0 = new EncomendaNormal(cli0,cli2,5,12);
	quantN++;
	Encomenda* enc1 = new EncomendaNormal(cli1,cli2,10,12);
	quantN++;
	Encomenda* enc2 = new EncomendaNormal(cli2,cli3,7,12);
	quantN++;
	Encomenda* enc3 = new EncomendaNormal(cli3,cli4,2,12);
	quantN++;
	Encomenda* enc4 = new EncomendaNormal(cli4,cli5,3,12);
	quantN++;
	Encomenda* enc5 = new EncomendaRelampago(cli5,cli6,13,18);
	quantR++;
	Encomenda* enc6 = new EncomendaRelampago(cli6,cli7,6,18);
	quantR++;
	Encomenda* enc7 = new EncomendaRelampago(cli7,cli0,8,18);
	quantR++;

    	//Guardando as encomendas normais:
    	std::vector<Encomenda*> encomendasN;
    	encomendasN.push_back(enc0);
    	encomendasN.push_back(enc1);
    	encomendasN.push_back(enc2);
    	encomendasN.push_back(enc3);
    	encomendasN.push_back(enc4);

    	//Guardando as encomendas relampago:
    	std::vector<Encomenda*> encomendasR;
    	encomendasR.push_back(enc5);
    	encomendasR.push_back(enc6);
    	encomendasR.push_back(enc7);

    	//Calculando o valor total das encomendas:
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	for (auto x : encomendasN) {
		x->print();
		custN += x->calcula();
		std::cout << endl;
	}

	for (auto x : encomendasR) {
		x->print();
		custR += x->calcula();
		std::cout << endl;
	}

    	//Imprimindo os resultados:
	std::cout << "\n>> Encomendas Normais <<"
		<< "\nQuantidade: " << quantN
		<< "\nValor Total: " << custN
		<< endl
		<< "\n>> Encomendas Relâmpago <<"
		<< "\nQuantidade: " << quantR
		<< "\nValor Total: " << custR
		<< endl;

	//Desalocando a memória:
    	for (auto x : encomendasN) {
        	delete x;
    	}
    	for (auto x : encomendasR) {
        	delete x;
    	}

   	 return 0;
}
