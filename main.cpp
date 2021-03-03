#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main()
{
    /**Array dinâmico de clientes**/
    Cliente *clio = new Cliente[8];

    clio[0].NOME = "Thales";
    clio[0].endereco = "Rua dos Pré-Socráticos";
    clio[0].CIDADE = "Miletus";
    clio[0].ESTADO = "Ionia";
    clio[0].cep = "548 a.C.";

    clio[1].NOME = "Aristóteles";
    clio[1].endereco = "Avenida do Meio-Termo";
    clio[1].CIDADE = "Atenas";
    clio[1].ESTADO = "Ática";
    clio[1].cep = "384 a.C.";

    clio[2].NOME = "Platão";
    clio[2].endereco = "Praça das Formas";
    clio[2].CIDADE = "Atenas";
    clio[2].ESTADO = "Ática";
    clio[2].cep = "348 a.C";

    clio[3].NOME = "Sócrates";
    clio[3].endereco = "Rua do Elenchus";
    clio[3].CIDADE = "Atenas";
    clio[3].ESTADO = "Ática";
    clio[3].cep = "399 a.C.";

    clio[4].NOME = "Pitágoras";
    clio[4].endereco = "Praça dos Quadrados dos Catetos";
    clio[4].CIDADE = "Samos";
    clio[4].ESTADO = "Egeu";
    clio[4].cep = "571 a.C.";

    clio[5].NOME = "Parmênides";
    clio[5].endereco = "Rua do Não Ser";
    clio[5].CIDADE = "Eleia";
    clio[5].ESTADO = "Magna Grécia";
    clio[5].cep = "460 a.C.";

    clio[6].NOME = "Empédocles";
    clio[6].endereco = "Rua dos Quatro Elementos";
    clio[6].CIDADE = "Agrigento";
    clio[6].ESTADO = "Sicília";
    clio[6].cep = "495 a.C.";

    clio[7].NOME = "Anaxágoras";
    clio[7].endereco = "Avenida da Mente Cósmica";
    clio[7].CIDADE = "Clazômenas";
    clio[7].ESTADO = "Jónia";
    clio[7].cep = "499 a.C.";

    /**Variáveis com o número de encomendas Normais e Relâmpago respectivamente**/
    int quantN = 0;
    int quantR = 0;

    /**Arrays de encomendas, separados por Normais e Relâmpago**/
    EncomendaNormal *encN = new EncomendaNormal[5];
    EncomendaRelampago *encR = new EncomendaRelampago[3];

    encN[0].setPESO(5);
    encN[0].setCUSTOkg(12);
    encN[0].remetente = clio[0];
    encN[0].dest = clio[1];
    quantN++;

    encN[1].setPESO(10);
    encN[1].setCUSTOkg(12);
    encN[1].remetente = clio[1];
    encN[1].dest = clio[2];
    quantN++;

    encN[2].setPESO(7);
    encN[2].setCUSTOkg(12);
    encN[2].remetente = clio[2];
    encN[2].dest = clio[3];
    quantN++;

    encN[3].setPESO(2);
    encN[3].setCUSTOkg(12);
    encN[3].remetente = clio[3];
    encN[3].dest = clio[4];
    quantN++;

    encN[4].setPESO(3);
    encN[4].setCUSTOkg(12);
    encN[4].remetente = clio[4];
    encN[4].dest = clio[5];
    quantN++;

    encR[0].setPESO(13);
    encR[0].setCUSTOkg(18);
    encR[0].remetente = clio[5];
    encR[0].dest = clio[6];
    quantR++;

    encR[1].setPESO(6);
    encR[1].setCUSTOkg(18);
    encR[1].remetente = clio[6];
    encR[1].dest = clio[7];
    quantR++;

    encR[2].setPESO(8);
    encR[2].setCUSTOkg(18);
    encR[2].remetente = clio[7];
    encR[2].dest = clio[0];
    quantR++;

    std::cout << "\n>> Relatório de encomendas <<" << endl;

    /**Variáveis que contém a quantidade de encomendas**/
    double custN = 0;
    double custR = 0;

    /**Prenchimento da quantidade de encomendas e imprime as encomendas**/
    for (int n = 0; n < 5; n++)
    {
        encN[n].printNormal();
        custN += encN[n].calcula();
        std::cout << endl;
    }

    for (int r = 0; r < 3; r++)
    {
        encR[r].printRelampago();
        custR += encR[r].calcula();
        std::cout << endl;
    }

    std::cout << "\n>> Encomendas Normais <<"
              << "\nQuantidade: " << quantN
              << "\nValor Total: " << custN
              << endl
              << "\n>> Encomendas Relâmpago <<"
              << "\nQuantidade: " << quantR
              << "\nValor Total: " << custR
              << endl;

    /**Desalocação da memória alocada dinamicamente**/
    delete clio;
    delete encN;
    delete encR;
}
