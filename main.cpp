#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"

#include <vector>

int main(){

	vector<Cliente> cliente;
	vector<EncomendaNormal> encomendaNormal;
	vector<EncomendaRelampago> encomendaRelampago;
	
	Cliente cliente0 = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cliente1 = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cliente2 = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cliente3 = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cliente4 = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cliente5 = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cliente6 = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cliente7 = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	cliente.push_back(cliente0); cliente.push_back(cliente1); cliente.push_back(cliente2); cliente.push_back(cliente3);
	cliente.push_back(cliente4); cliente.push_back(cliente5); cliente.push_back(cliente6); cliente.push_back(cliente7);

	EncomendaNormal encomenda0 	  = EncomendaNormal( 5, 12, cliente[0], cliente[1]);
	EncomendaNormal encomenda1    = EncomendaNormal(10, 12, cliente[1], cliente[2]);
	EncomendaNormal encomenda2    = EncomendaNormal( 7, 12, cliente[2], cliente[3]);
	EncomendaNormal encomenda3    = EncomendaNormal( 2, 12, cliente[3], cliente[4]);
	EncomendaNormal encomenda4    = EncomendaNormal( 3, 12, cliente[4], cliente[5]);
	EncomendaRelampago encomenda5 = EncomendaRelampago(13, 18, cliente[5], cliente[6]);
	EncomendaRelampago encomenda6 = EncomendaRelampago( 6, 18, cliente[6], cliente[7]);
	EncomendaRelampago encomenda7 = EncomendaRelampago( 8, 18, cliente[7], cliente[0]);

	encomendaNormal.push_back(encomenda0); encomendaNormal.push_back(encomenda1); 
	encomendaNormal.push_back(encomenda2); encomendaNormal.push_back(encomenda3); 
	encomendaNormal.push_back(encomenda4); 
	
	encomendaRelampago.push_back(encomenda5); encomendaRelampago.push_back(encomenda6); 
	encomendaRelampago.push_back(encomenda7);

	std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custoNormal = 0, custoRelampago = 0;
	int qtdNormal = encomendaNormal.size(), qtdRelampago = encomendaRelampago.size();

	for(int i=0; i<qtdNormal; i++){
		encomendaNormal[i].setCustoTotal(encomendaNormal[i].calcula());
		encomendaNormal[i].print();
		custoNormal += encomendaNormal[i].getCustoTotal();
		std::cout << endl;
	}

	for(int i=0; i<qtdRelampago; i++){
		encomendaRelampago[i].setCustoTotal(encomendaRelampago[i].calcula());
		encomendaRelampago[i].print();
		custoRelampago += encomendaRelampago[i].getCustoTotal();
		std::cout << endl;
	}
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << qtdNormal
		 << "\nValor Total: " << custoNormal
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << qtdRelampago
		 << "\nValor Total: " << custoRelampago
		 << endl;
	
}