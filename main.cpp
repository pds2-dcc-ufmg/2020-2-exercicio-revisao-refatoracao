#include <vector>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){	

	vector <EncomendaNormal>    encomenda_normal;
	vector <EncomendaRelampago> encomenda_relampago;

	Cliente cli0 = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
	Cliente cli1 = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
	Cliente cli2 = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
	Cliente cli3 = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
	Cliente cli4 = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
	Cliente cli5 = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
	Cliente cli6 = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
	Cliente cli7 = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");	

	EncomendaNormal enc0 = EncomendaNormal(5, 12, cli0, cli1);
	EncomendaNormal enc1 = EncomendaNormal(10, 12, cli1, cli2);
	EncomendaNormal enc2 = EncomendaNormal(7, 12, cli2, cli3);
	EncomendaNormal enc3 = EncomendaNormal(2, 12, cli3, cli4);
	EncomendaNormal enc4 = EncomendaNormal(3, 12, cli4, cli5);

	EncomendaRelampago enc5 = EncomendaRelampago(13, 18, cli5, cli6);
	EncomendaRelampago enc6 = EncomendaRelampago(6, 18, cli6, cli7);
	EncomendaRelampago enc7 = EncomendaRelampago(8, 18, cli7, cli0);

	encomenda_normal.push_back(enc0);
	encomenda_normal.push_back(enc1);
	encomenda_normal.push_back(enc2);
	encomenda_normal.push_back(enc3);
	encomenda_normal.push_back(enc4);
	encomenda_relampago.push_back(enc5);
	encomenda_relampago.push_back(enc6);
	encomenda_relampago.push_back(enc7);

	cout << "\n>> Relatório de encomendas <<" << endl;

	double custo_total_normal = 0, custo_total_relapago = 0;

	for(int i = 0; i < encomenda_normal.size(); i++){
		encomenda_normal[i].calcula();
		encomenda_normal[i].print();

		custo_total_normal += encomenda_normal[i].calcula();
		cout << endl;
	}

	for(int i = 0; i < encomenda_relampago.size(); i++){
		encomenda_relampago[i].calcula();
		encomenda_relampago[i].print();
		
		custo_total_relapago += encomenda_relampago[i].calcula();
		cout << endl;
	}
	
	cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: "  << encomenda_normal.size()
		 << "\nValor Total: " << custo_total_normal   << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: "  << encomenda_relampago.size()
		 << "\nValor Total: " << custo_total_relapago << endl;	
}