#include <iostream>
#include "../include/encomenda/EncomendaNormal.hpp"
#include "../include/encomenda/EncomendaRelampago.hpp"
#include <vector>

int main(){
	
	Cliente cliente0 = Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");

	Cliente cliente1 = Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");

	Cliente cliente2 = Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");

	Cliente cliente3 = Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");

	Cliente cliente4 = Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");

	Cliente cliente5 = Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");

	Cliente cliente6 = Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");

	Cliente cliente7 = Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");

	std::vector<EncomendaNormal> encomendasNormais;
	std::vector<EncomendaRelampago> encomendasRelampagos;

	EncomendaNormal encomendaNormal0 = EncomendaNormal(5, 12, cliente0, cliente1);
	encomendasNormais.push_back(encomendaNormal0);

	EncomendaNormal encomendaNormal1 = EncomendaNormal(10, 12, cliente1, cliente2);
	encomendasNormais.push_back(encomendaNormal1);

	EncomendaNormal encomendaNormal2 = EncomendaNormal(7, 12, cliente2, cliente3);
	encomendasNormais.push_back(encomendaNormal2);

	EncomendaNormal encomendaNormal3 = EncomendaNormal(2, 12, cliente3, cliente4);
	encomendasNormais.push_back(encomendaNormal3);

	EncomendaNormal encomendaNormal4 = EncomendaNormal(3, 12, cliente4, cliente5);
	encomendasNormais.push_back(encomendaNormal4);

	EncomendaRelampago EncomendaRelampago0 = EncomendaRelampago(13, 18, cliente5, cliente6);
	encomendasRelampagos.push_back(EncomendaRelampago0);

	EncomendaRelampago EncomendaRelampago1 = EncomendaRelampago(6, 18, cliente6, cliente7);
	encomendasRelampagos.push_back(EncomendaRelampago1);

	EncomendaRelampago EncomendaRelampago2 = EncomendaRelampago(8, 18, cliente7, cliente0);
	encomendasRelampagos.push_back(EncomendaRelampago2);
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double valorTotalEntregasNormais = 0;
	double valorTotalEntregasRelampagos = 0;

    for(long unsigned indice = 0; indice < encomendasNormais.size(); indice++){
        encomendasNormais[indice].calculaCusto();
        encomendasNormais[indice].printEncomenda();
        valorTotalEntregasNormais += encomendasNormais[indice].calculaCusto();
        std::cout << std::endl;
    }

    for(long unsigned indice = 0; indice < encomendasRelampagos.size(); indice++){
        encomendasRelampagos[indice].calculaCusto();
        encomendasRelampagos[indice].printEncomenda();
        valorTotalEntregasRelampagos += encomendasRelampagos[indice].calculaCusto();
        std::cout << std::endl;
    }
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << encomendasNormais.size()
		 << "\nValor Total: " << valorTotalEntregasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << encomendasRelampagos.size()
		 << "\nValor Total: " << valorTotalEntregasRelampagos
		 << std::endl;
}