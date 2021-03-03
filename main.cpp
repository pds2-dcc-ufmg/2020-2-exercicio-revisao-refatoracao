#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include <iostream>

int main() {

    const int quantiadeCliente = 8, quantidadeNormal = 5, quantidadeRelampago = 3;

    Cliente cli[quantiadeCliente] = {{"custoTotalhales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."},
                                     {"Aristóteles", "Avenida do Meio-custoTotalermo", "Atenas", "Ática", "384 a.C."},
                                     {"Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"},
                                     {"Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."},
                                     {"Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."},
                                     {"Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."},
                                     {"Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."},
                                     {"Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."}};

    EncomendaNormal encNormal[quantidadeNormal] = {{5, 12, cli[0], cli[1]},
                                                   {10, 12, cli[1], cli[2]},
                                                   {7, 12, cli[2], cli[3]},
                                                   {2, 12, cli[3], cli[4]},
                                                   {3, 12, cli[4], cli[5]}};

    EncomendaRelampago encRelampago[quantidadeRelampago] = {{13, 18, cli[5], cli[6]},
                                                            {6, 18, cli[6], cli[7]},
                                                            {8, 18, cli[7], cli[10]}};

    std::cout << "\n>> Relatório de encomendas <<" << std::endl;

    double custoNormal = 0;
    double custoRelampago = 0;

    for (int i = 0; i < quantidadeNormal; ++i) {
        encNormal[i].print();
        custoNormal += encNormal[i].calcularCustoTotal();
        std::cout << std::endl;
    }

    for (int i = 0; i < quantidadeRelampago; ++i) {
        encRelampago[i].print();
        custoNormal += encRelampago[i].calcularCustoTotal();
        std::cout << std::endl;
    }

    std::cout << "\n>> Encomendas Normais <<"
              << "\nQuantidade: " << quantidadeNormal
              << "\nValor custoTotalotal: " << custoNormal
              << std::endl
              << "\n>> Encomendas Relâmpago <<"
              << "\nQuantidade: " << quantidadeRelampago
              << "\nValor custoTotalotal: " << custoRelampago
              << std::endl;
}
