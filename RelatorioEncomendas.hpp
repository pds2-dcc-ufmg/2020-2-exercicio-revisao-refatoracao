#ifndef RelatorioEncomendas_H
#define RelatorioEncomendas_H

#include <list>

#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"


class RelatorioEncomendas{

	public:
		
        void cadastra_encomenda_normal(double peso, Cliente remetente, Cliente destinario);
        void cadastra_encomenda_relampago(double peso, Cliente remetente, Cliente destinario);
        void calcula_custo_encomendas_normais();
        void calcula_custo_encomendas_relampago();
		void print();
        void gera_relatorio();

    private:
        std::list<EncomendaNormal> encomendas_normais;
        std::list<EncomendaRelampago> encomendas_relampago;
        double custo_encomendas_normais = 0;
	    double custo_encomendas_relampago = 0;
        int quantidade_encomendas_normais = 0;
	    int quantidade_encomendas_relampago = 0;
};

#endif