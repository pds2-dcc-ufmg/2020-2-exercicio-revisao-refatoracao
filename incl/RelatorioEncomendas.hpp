#include "../incl/Cliente.hpp"
#include "../incl/Encomenda.hpp"
#include "../incl/EncomendaNormal.hpp"
#include "../incl/EncomendaRelampago.hpp"
#include <iostream>

class RelatorioEncomendas {
public:
    RelatorioEncomendas(EncomendaNormal *encNormal,
                        unsigned qtdeEncNormal,
                        EncomendaRelampago *encRelampago,
                        unsigned qtdeEncRelampago);
};
