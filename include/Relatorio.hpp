#ifndef RELATORIO_H
#define RELATORIO_H

#include <vector>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"

class Relatorio{
    public: 
        void gerarRelatorio (std::vector<Cliente> Clientes, std::vector<EncomendaNormal> EncomendasNormais, std::vector<EncomendaRelampago> EncomendasRelampagos);
};

#endif
