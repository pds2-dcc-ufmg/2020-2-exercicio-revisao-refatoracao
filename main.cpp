#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
#include <vector>

using std::string;

const int tamanho = 8;

int i = 0;
int quantNormal = 0;
int quantRelampago = 0;
double custNormal = 0;
double custRelampago = 0;

std::vector<Cliente> clientes;
std::vector<Compra::Encomenda *> encomendas;

Compra::Encomenda *NovaEncomenda(double peso, double custo, Cliente remetente, Cliente destinatario, bool relampago)
{
    if (relampago == true)
    {
        quantRelampago++;
        return new Compra::EncomendaRelampago(peso, custo, remetente, destinatario);
    }
    else
    {
        quantNormal++;
        return new Compra::EncomendaNormal(peso, custo, remetente, destinatario);
    }
}
int main()
{
    std::cout << "teste de pullrequest proprio" << std::endl;
    clientes.push_back(Cliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C."));
    clientes.push_back(Cliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C."));
    clientes.push_back(Cliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C"));
    clientes.push_back(Cliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C."));
    clientes.push_back(Cliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C."));
    clientes.push_back(Cliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C."));
    clientes.push_back(Cliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C."));
    clientes.push_back(Cliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C."));
    encomendas.push_back(NovaEncomenda(5, 12, clientes[0], clientes[1], false));
    encomendas.push_back(NovaEncomenda(10, 12, clientes[1], clientes[2], false));
    encomendas.push_back(NovaEncomenda(7, 12, clientes[2], clientes[3], false));
    encomendas.push_back(NovaEncomenda(2, 12, clientes[3], clientes[4], false));
    encomendas.push_back(NovaEncomenda(3, 12, clientes[4], clientes[5], false));
    encomendas.push_back(NovaEncomenda(13, 18, clientes[5], clientes[6], true));
    encomendas.push_back(NovaEncomenda(6, 18, clientes[6], clientes[7], true));
    encomendas.push_back(NovaEncomenda(8, 18, clientes[7], clientes[0], true));

    std::cout << "\n>> Relatório de encomendas <<" << std::endl;

    for (i = 0; i < encomendas.size(); i++)
    {
        encomendas[i]->print();
        if (encomendas[i]->getTipo() == "normal")
        {
            custNormal += encomendas[i]->calcula();
        }
        if (encomendas[i]->getTipo() == "relampago")
        {
            custRelampago += encomendas[i]->calcula();
        }
        std::cout << std::endl;
    }

    std::cout << "\n>> Encomendas Normais <<"
              << "\nQuantidade: " << quantNormal
              << "\nValor Total: " << custNormal
              << std::endl
              << "\n>> Encomendas Relâmpago <<"
              << "\nQuantidade: " << quantRelampago
              << "\nValor Total: " << custRelampago
              << std::endl;
}

/*
Cliente Novoclientesente(string nome, string endereco, string cidade, string estado, string cep)
{
    Cliente a.nome = nome ... //construtor eh uma solucao melhor
    return Cliente(nome, endereco, cidade, estado, cep);
}

private:
//std::string tipo = "relampago";
*/
