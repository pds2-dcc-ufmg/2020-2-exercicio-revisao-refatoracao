#include <iostream>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

#define NUM_CLIENTES 8
#define NUM_ENCOMENDAS_NORMAIS 5
#define NUM_ENCOMENDAS_RELAMPAGO 3

using namespace std;

int main() {
    
    Cliente *cliente[NUM_CLIENTES];
	
    cliente[0] = new Cliente("Thales","Rua dos Pré-Socráticos","Miletus","Ionia","548 a.C.");
	cliente[1] = new Cliente("Aristóteles","Avenida do Meio-Termo","Atenas","Ática","384 a.C.");
	cliente[2] = new Cliente("Platão","Praça das Formas","Atenas","Ática","348 a.C");
	cliente[3] = new Cliente("Sócrates","Rua do Elenchus","Atenas","Ática","399 a.C.");
	cliente[4] = new Cliente("Pitágoras","Praça dos Quadrados dos Catetos","Samos","Egeu","571 a.C.");
	cliente[5] = new Cliente("Parmênides","Rua do Não Ser","Eleia","Magna Grécia","460 a.C.");
	cliente[6] = new Cliente("Empédocles","Rua dos Quatro Elementos","Agrigento","Sicília","495 a.C.");
	cliente[7] = new Cliente("Anaxágoras","Avenida da Mente Cósmica","Clazômenas","Jónia","499 a.C.");
	
    EncomendaNormal *encomendaNormal[NUM_ENCOMENDAS_NORMAIS];
    EncomendaRelampago *encomendaRelampago[NUM_ENCOMENDAS_RELAMPAGO];

	encomendaNormal[0] = new EncomendaNormal(5,12,cliente[0],cliente[1]);
	encomendaNormal[1] = new EncomendaNormal(10,12,cliente[1],cliente[2]);
	encomendaNormal[2] = new EncomendaNormal(7,12,cliente[2],cliente[3]);
	encomendaNormal[3] = new EncomendaNormal(2,12,cliente[3],cliente[4]);
	encomendaNormal[4] = new EncomendaNormal(3,12,cliente[4],cliente[5]);
	encomendaRelampago[0] = new EncomendaRelampago(13,18,cliente[5],cliente[6]);
	encomendaRelampago[1] = new EncomendaRelampago(6,18,cliente[6],cliente[7]);
	encomendaRelampago[2] = new EncomendaRelampago(8,18,cliente[7],cliente[0]);

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoTotalEncomendasNormais = 0;
	double custoTotalEncomendasRelampago = 0;

    for (int i = 0; i < NUM_ENCOMENDAS_NORMAIS; i++) {
        encomendaNormal[i]->calculaCustoTotal();
        encomendaNormal[i]->imprimeDados();
        custoTotalEncomendasNormais += encomendaNormal[i]->calculaCustoTotal();
        std::cout << std::endl;
    }

    for (int i = 0; i < NUM_ENCOMENDAS_RELAMPAGO; i++) {
        encomendaRelampago[i]->calculaCustoTotal();
        encomendaRelampago[i]->imprimeDados();
        custoTotalEncomendasRelampago += encomendaRelampago[i]->calculaCustoTotal();
        std::cout << std::endl;
    }
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << NUM_ENCOMENDAS_NORMAIS
		 << "\nValor Total: " << custoTotalEncomendasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << NUM_ENCOMENDAS_RELAMPAGO
		 << "\nValor Total: " << custoTotalEncomendasRelampago
		 << std::endl;
	
	// Desalocação da memória reservada para os arrays de Clientes e Encomendas:

    for (int i = 0; i < NUM_CLIENTES; i++) {
        delete cliente[i];
    }
    
    for (int i = 0; i < NUM_ENCOMENDAS_NORMAIS; i++) {
        delete encomendaNormal[i];
    }

    for (int i = 0; i < NUM_ENCOMENDAS_RELAMPAGO; i++) {
        delete encomendaRelampago[i];
    }
}
