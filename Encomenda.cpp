#include "Encomenda.hpp"

void Compra::Encomenda::print()
{
    std::cout << "[Remetente]" << std::endl;
    REMETENTE.print();
    std::cout << "[Destinatário]" << std::endl;
    DESTINATARIO.print();
}

double Compra::Encomenda::getCustokg()
{
    return CUSTOkg;
}

double Compra::Encomenda::getPeso()
{
    return PESO;
}

std::string Compra::Encomenda::getTipo()
{
    return TIPO;
}
void Compra::EncomendaNormal::print()
{

    Encomenda::print();
    std::cout << "[Encomenda Normal]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustokg() << std::endl
              << "  Custo total: " << T << std::endl;
}

double Compra::EncomendaNormal::calcula()
{
    double x = getPeso() * getCustokg();

    return x;
}

void Compra::EncomendaRelampago::print()
{
    Encomenda::print();
    std::cout << "[Encomenda Relâmpago]" << std::endl;
    std::cout << "  Peso: " << getPeso() << std::endl
              << "  Custo por kg: " << getCustokg() << std::endl
              << "  Taxa adicional: " << TAXA << std::endl
              << "  Custo total: " << T << std::endl;
}

double Compra::EncomendaRelampago::calcula()
{
    double x = getPeso() * getCustokg();
    x += x * TAXA;

    return x;
}

