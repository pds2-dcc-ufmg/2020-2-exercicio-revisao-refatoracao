#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include <iostream>

int main() {
    Cliente cli0("Thales",
                 "Rua dos Pré-Socráticos",
                 "Miletus",
                 "Ionia",
                 "548 a.C.");

    Cliente cli1("Aristóteles",
                 "Avenida do Meio-Termo",
                 "Atenas",
                 "Ática",
                 "384 a.C.");

    Cliente cli2("Platão",
                 "Praça das Formas",
                 "Atenas",
                 "Ática",
                 "348 a.C");

    Cliente cli3("Sócrates",
                 "Rua do Elenchus",
                 "Atenas",
                 "Ática",
                 "399 a.C.");

    Cliente cli4("Pitágoras",
                 "Praça dos Quadrados dos Catetos",
                 "Samos",
                 "Egeu",
                 "571 a.C.");

    Cliente cli5("Parmênides",
                 "Rua do Não Ser",
                 "Eleia",
                 "Magna Grécia",
                 "460 a.C.");

    Cliente cli6("Empédocles",
                 "Rua dos Quatro Elementos",
                 "Agrigento",
                 "Sicília",
                 "495 a.C.");

    Cliente cli7("Anaxágoras",
                 "Avenida da Mente Cósmica",
                 "Clazômenas",
                 "Jónia",
                 "499 a.C.");

    int quantN = 0;
    int quantR = 0;

    EncomendaNormal enc0(5, 12, cli0, cli1);
    quantN++;

    EncomendaNormal enc1(10, 12, cli1, cli2);
    quantN++;

    EncomendaNormal enc2(7, 12, cli2, cli3);
    quantN++;

    EncomendaNormal enc3(2, 12, cli3, cli4);
    quantN++;

    EncomendaNormal enc4(3, 12, cli4, cli5);
    quantN++;

    EncomendaRelampago enc5(13, 18, cli5, cli6);
    quantR++;

    EncomendaRelampago enc6(6, 18, cli6, cli7);
    quantR++;

    EncomendaRelampago enc7(8, 18, cli7, cli0);
    quantR++;

    std::cout << "\n>> Relatório de encomendas <<" << std::endl;

    double custN = 0;
    double custR = 0;

    enc0.calculaPreco();
    enc0.imprimeEncomenda();
    custN += enc0.calculaPreco();
    std::cout << std::endl;

    enc1.calculaPreco();
    enc1.imprimeEncomenda();
    custN += enc1.calculaPreco();
    std::cout << std::endl;

    enc2.calculaPreco();
    enc2.imprimeEncomenda();
    custN += enc2.calculaPreco();
    std::cout << std::endl;

    enc3.calculaPreco();
    enc3.imprimeEncomenda();
    custN += enc3.calculaPreco();
    std::cout << std::endl;

    enc4.calculaPreco();
    enc4.imprimeEncomenda();
    custN += enc4.calculaPreco();
    std::cout << std::endl;

    enc5.calculaPreco();
    enc5.imprimeEncomenda();
    custR += enc5.calculaPreco();
    std::cout << std::endl;

    enc6.calculaPreco();
    enc6.imprimeEncomenda();
    custR += enc6.calculaPreco();
    std::cout << std::endl;

    enc7.calculaPreco();
    enc7.imprimeEncomenda();
    custR += enc7.calculaPreco();
    std::cout << std::endl;

    std::cout << "\n>> Encomendas Normais <<"
              << "\nQuantidade: " << quantN
              << "\nValor Total: " << custN
              << std::endl
              << "\n>> Encomendas Relâmpago <<"
              << "\nQuantidade: " << quantR
              << "\nValor Total: " << custR
              << std::endl;
}