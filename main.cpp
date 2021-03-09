#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"


int main(){
	
    Cliente cli0 = new Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
    Cliente cli1 = new Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
    Cliente cli2 = new Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
    Cliente cli3 = new Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática","399 a.C." );
    Cliente cli4 = new Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
    Cliente cli5 = new Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
    Cliente cli6 = new Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
    Cliente cli7 = new Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	int quantN = 0;
	int quantR = 0;

    EncomendaNormal enc0 = new EncomendaNormal(5, 12, cli0, cli1);
	quantN++;
    EncomendaNormal enc1 = new EncomendaNormal(10, 12, cli1, cli2);
	quantN++;
    EncomendaNormal enc2 = new EncomendaNormal(7, 12, cli2, cli3);
	quantN++;
    EncomendaNormal enc3 = new EncomendaNormal(2, 12, cli3, cli4);
	quantN++;
    EncomendaNormal enc4 = new EncomendaNormal(3, 12, cli4, cli5);
	quantN++;
    EncomendaRelampago enc5 = new EncomendaRelampago(13, 18, cli5, cli6);
	quantR++;
    EncomendaRelampago enc6 = new EncomendaRelampago(6, 18, cli6, cli7);
	quantR++;
    EncomendaRelampago enc7 = new EncomendaRelampago(8, 18, cli7, cli0);
	quantR++;
	
	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
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
