#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){

	Cliente cli0("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	Cliente cli1("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	Cliente cli2("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	Cliente cli3("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	Cliente cli4("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	Cliente cli5("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	Cliente cli6("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	Cliente cli7("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");

	int quantidadeNormais = 5;
	int quantidadeRelampago = 3;

	EncomendaNormal enc0(5,12,cli0,cli1); 
	EncomendaNormal enc1(10,12,cli1,cli2);
	EncomendaNormal enc2(7,12,cli2,cli3);
	EncomendaNormal enc3(2,12,cli3,cli4);
	EncomendaNormal enc4(3,12,cli4,cli5);
	EncomendaRelampago enc5(13,18,cli5,cli6);
	EncomendaRelampago enc6(6,18,cli6,cli7);
	EncomendaRelampago enc7(8,18,cli7,cli0);

	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoNormais = 0;
	double custoRelampago = 0;

	enc0.relatarEncomenda(&custoNormais);
	enc1.relatarEncomenda(&custoNormais);
	enc2.relatarEncomenda(&custoNormais);
	enc3.relatarEncomenda(&custoNormais);
	enc4.relatarEncomenda(&custoNormais);
	enc5.relatarEncomenda(&custoRelampago);
	enc6.relatarEncomenda(&custoRelampago);
	enc7.relatarEncomenda(&custoRelampago);
	
	std::cout << "\n>> Encomendas Normais <<" << "\nQuantidade: " << quantidadeNormais
		<< "\nValor Total: " << custoNormais << std::endl
		<< "\n>> Encomendas Relâmpago <<" 
		<< "\nQuantidade: " << quantidadeRelampago
		<< "\nValor Total: " << custoRelampago << std::endl;
	
}