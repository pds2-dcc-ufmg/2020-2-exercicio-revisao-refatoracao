#include "../incl/RelatorioEncomendas.hpp"

RelatorioEncomendas::RelatorioEncomendas(EncomendaNormal *encNormal,
                                         unsigned qtdeEncNormal,
                                         EncomendaRelampago *encRelampago,
                                         unsigned qtdeEncRelampago) {
    double custoEncNormal = 0, custoEncRelampago = 0;
    std::cout << "\n>> Relatório de encomendas <<" << std::endl;

    for (unsigned i = 0; i < qtdeEncNormal; ++i) {
        encNormal[i].print();
        custoEncNormal += encNormal[i].calcularCustoTotal();
        std::cout << std::endl;
    }

    for (unsigned i = 0; i < qtdeEncRelampago; ++i) {
        encRelampago[i].print();
        custoEncRelampago += encRelampago[i].calcularCustoTotal();
        std::cout << std::endl;
    }

    std::cout << "\n>> Encomendas Normais <<"
              << "\nqtde: " << qtdeEncNormal
              << "\nValor Total: " << custoEncNormal
              << std::endl
              << "\n>> Encomendas Relâmpago <<"
              << "\nqtde: " << qtdeEncRelampago
              << "\nValor Total: " << custoEncRelampago
              << std::endl;
}
