
#include "Encomenda.hpp"

void Compra::Encomenda::print()
{
    std::cout << "[Remetente]" << endl;
    remetente.print();
    std::cout << "[Destinatário]" << endl;
    destinatario.print();
}

double Compra::Encomenda::getCustokg()
{
    return CUSTOkg;
}

double Compra::Encomenda::getPeso()
{
    return PESO;
}

void Compra::EncomendaNormal::print()
{

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << endl;
    std::cout << "  Peso: " << PESO << endl
              << "  Custo por kg: " << CUSTOkg << endl
              << "  Custo total: " << T << endl;
}

double Compra::EncomendaNormal::calcula()
{
    double x = PESO * CUSTOkg;

    return x;
}

double Compra::EncomendaRelampago::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << endl;
    std::cout << "  Peso: " << PESO << endl
              << "  Custo por kg: " << CUSTOkg << endl
              << "  Taxa adicional: " << taxa << endl
              << "  Custo total: " << T << endl;
}

double Compra::EncomendaRelampago::calcula()
{
    double x = PESO * CUSTOkg;
    x += x * taxa;

    return x;
}
