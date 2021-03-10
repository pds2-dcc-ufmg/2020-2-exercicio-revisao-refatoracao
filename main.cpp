#include <iostream>
#include <vector>

#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	Cliente cliente0("Thales",
					 "Rua dos Pré-Socráticos",
					 "Miletus",
					 "Ionia",
					 "548 a.C."
	);

	Cliente cliente1("Aristóteles",
					 "Avenida do Meio-Termo",
					 "Atenas",
					 "Ática",
					 "384 a.C."
	);

	Cliente cliente2("Platão",
				 	 "Praça das Formas",
				 	 "Atenas",
				 	 "Ática",
				 	 "348 a.C"
	);

	Cliente cliente3("Sócrates",
				 	 "Rua do Elenchus",
				 	 "Atenas",
				 	 "Ática",
				 	 "399 a.C."
	);

	Cliente cliente4("Pitágoras",
				 	 "Praça dos Quadrados dos Catetos",
				 	 "Samos",
				 	 "Egeu",
				 	 "571 a.C."
	);

	Cliente cliente5("Parmênides",
				 	 "Rua do Não Ser",
				 	 "Eleia",
				 	 "Magna Grécia",
				 	 "460 a.C."
	);

	Cliente cliente6("Empédocles",
				 	 "Rua dos Quatro Elementos",
				 	 "Agrigento",
				 	 "Sicília",
				 	 "495 a.C."
	);

	Cliente cliente7("Anaxágoras",
				 	 "Avenida da Mente Cósmica",
				 	 "Clazômenas",
				 	 "Jónia",
				 	 "499 a.C."
	);
	
	std::vector<EncomendaNormal> encomendas_normais;
	std::vector<EncomendaRelampago> encomendas_relampago;

	EncomendaNormal encomenda0(5,
							   12,
							   cliente0,
							   cliente1
	);
	encomendas_normais.push_back(encomenda0);

	EncomendaNormal encomenda1(10,
							   12,
							   cliente1,
							   cliente2
	);
	encomendas_normais.push_back(encomenda1);

	EncomendaNormal encomenda2(7,
							   12,
							   cliente2,
							   cliente3
	);
	encomendas_normais.push_back(encomenda2);

	EncomendaNormal encomenda3(2,
							   12,
							   cliente3,
							   cliente4
	);
	encomendas_normais.push_back(encomenda3);

	EncomendaNormal encomenda4(3,
							   12,
							   cliente4,
							   cliente5
	);
	encomendas_normais.push_back(encomenda4);

	EncomendaRelampago encomenda5(13,
								  18,
								  cliente5,
								  cliente6
	);
	encomendas_relampago.push_back(encomenda5);

	EncomendaRelampago encomenda6(6,
								  18,
								  cliente6,
								  cliente7
	);
	encomendas_relampago.push_back(encomenda6);

	EncomendaRelampago encomenda7(8,
								  18,
								  cliente7,
								  cliente0
	);
	encomendas_relampago.push_back(encomenda7);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double valor_total_normais = 0;
	double valor_total_relampago = 0;

	for (EncomendaNormal encomenda : encomendas_normais) {
		encomenda.print();
		std::cout << std::endl;
		valor_total_normais += encomenda.custo_total();
	}

	for (EncomendaRelampago encomenda : encomendas_relampago) {
		encomenda.print();
		std::cout << std::endl;
		valor_total_relampago += encomenda.custo_total();
	}
	
	std::cout << ">> Encomendas Normais <<" << std::endl;
	std::cout << "Quantidade: " << encomendas_normais.size() << std::endl;
	std::cout << "Valor Total: " << valor_total_normais << std::endl;
	std::cout << std::endl;
	std::cout << ">> Encomendas Relâmpago <<" << std::endl;
	std::cout << "Quantidade: " << encomendas_relampago.size() << std::endl;
	std::cout << "Valor Total: " << valor_total_relampago << std::endl;
	std::cout << std::endl;	
}