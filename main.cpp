#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	Cliente clientes[] = {
	    Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."),
        Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."),
        Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"),
        Cliente("Sócrates","Rua do Elenchus", "Atenas", "Ática", "399 a.C."),
        Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."),
        Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."),
        Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."),
        Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.")
    };

	int quantidadeEncomendasNormais = 0;
	int quantidadeEncomendasRelampagos = 0;

    Encomenda encomendas[] = {
        EncomendaNormal(5, 12, clientes[0], clientes[1]),
        EncomendaNormal(10, 12, clientes[1], clientes[2]),
        EncomendaNormal(7, 12, clientes[2], clientes[3]),
        EncomendaNormal(2, 12, clientes[3], clientes[4]),
        EncomendaNormal(3, 12, clientes[4], clientes[5]),
        EncomendaRelampago(13, 18, clientes[5], clientes[6]),
        EncomendaRelampago(6, 18, clientes[6], clientes[7]),
        EncomendaRelampago(8, 18, clientes[7], clientes[0])
    };

	double custoTotalEncomendasNormais = 0;
	double custoTotalEncomendasRelampago = 0;
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	encomendas[0].calculaPrecoTotal();
	encomendas[0].printEncomenda();
	custoTotalEncomendasNormais += encomendas[0].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[1].calculaPrecoTotal();
	encomendas[1].printEncomenda();
	custoTotalEncomendasNormais += encomendas[1].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[2].calculaPrecoTotal();
	encomendas[2].printEncomenda();
	custoTotalEncomendasNormais += encomendas[2].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[3].calculaPrecoTotal();
	encomendas[3].printEncomenda();
	custoTotalEncomendasNormais += encomendas[3].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[4].calculaPrecoTotal();
	encomendas[4].printEncomenda();
	custoTotalEncomendasNormais += encomendas[4].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[5].calculaPrecoTotal();
	encomendas[5].printEncomenda();
	custoTotalEncomendasNormais += encomendas[5].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[6].calculaPrecoTotal();
	encomendas[6].printEncomenda();
	custoTotalEncomendasRelampago += encomendas[6].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[7].calculaPrecoTotal();
	encomendas[7].printEncomenda();
	custoTotalEncomendasRelampago += encomendas[7].calculaPrecoTotal();
	std::cout << std::endl;

    encomendas[8].calculaPrecoTotal();
	encomendas[8].printEncomenda();
	custoTotalEncomendasRelampago += encomendas[8].calculaPrecoTotal();
	std::cout << std::endl;

	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantidadeEncomendasNormais
		 << "\nValor Total: " << custoTotalEncomendasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantidadeEncomendasRelampagos
		 << "\nValor Total: " << custoTotalEncomendasRelampago
		 << std::endl;
	
}