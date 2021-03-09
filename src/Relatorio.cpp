#include <iostream>
#include "Relatorio.hpp"

void Relatorio::gerarRelatorio (std::vector<Cliente> Clientes, std::vector<EncomendaNormal> EncomendasNormais, std::vector<EncomendaRelampago> EncomendasRelampagos) {
    std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double custoEncomendasNormais = 0;
	double custoEncomendasRelampagos = 0;

    for (unsigned int i = 0; i < EncomendasNormais.size(); i++){
        EncomendasNormais[i].imprimirEncomenda();
        custoEncomendasNormais += EncomendasNormais[i].calcularCustoTotal();
        std::cout << std::endl;
    }

    for (unsigned int i = 0; i < EncomendasRelampagos.size(); i++){
        EncomendasRelampagos[i].imprimirEncomenda();
        custoEncomendasRelampagos += EncomendasRelampagos[i].calcularCustoTotal();
        std::cout << std::endl;
    }

	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << EncomendasNormais.size()
		 << "\nValor Total: " << custoEncomendasNormais
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << EncomendasRelampagos.size()
		 << "\nValor Total: " << custoEncomendasRelampagos
		 << std::endl;	
}