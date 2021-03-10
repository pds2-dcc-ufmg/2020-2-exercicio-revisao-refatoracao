#include <iostream>
#include "EncomendaNormal.hpp"
#include "Cliente.hpp"

Encomenda::EncomendaNormal::EncomendaNormal(double peso, double custo_kg, Cliente::Cliente remetente, Cliente::Cliente destinatario)
{
  this->custo_kg = custo_kg;
  this->peso = peso;
  this->remetente = remetente;
  this->destinatario = destinatario;
}

double Encomenda::EncomendaNormal::EncomendaNormal::getCustoTotal()
{
  double custo_total = this->peso * this->custo_kg;
  return custo_total;
}

void Encomenda::EncomendaNormal::EncomendaNormal::print()
{
  Encomenda::print();
  std::cout << "[Encomenda Normal]" << std::endl;
  std::cout << "  Peso: " << this->peso << std::endl
            << "  Custo por kg: " << this->custo_kg << std::endl
            << "  Custo total: " << this->custo_total << std::endl;
}
