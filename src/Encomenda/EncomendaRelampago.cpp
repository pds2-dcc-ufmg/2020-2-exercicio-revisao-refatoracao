#include <iostream>
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

Encomenda::EncomendaRelampago::EncomendaRelampago(double peso, double custo_kg, Cliente::Cliente remetente, Cliente::Cliente destinatario)
{
  this->custo_kg = custo_kg;
  this->peso = peso;
  this->remetente = remetente;
  this->destinatario = destinatario;
}

double Encomenda::EncomendaRelampago::getCustoTotal()
{
  this->custo_total = this->peso * this->custo_kg;
  this->custo_total += custo_total * this->taxa_adicional;
  return this->custo_total;
}

void Encomenda::EncomendaRelampago::print()
{
  Encomenda::print();
  std::cout << "[Encomenda Relâmpago]" << std::endl;
  std::cout << "  Peso: " << this->peso << std::endl
            << "  Custo por kg: " << this->custo_kg << std::endl
            << "  Taxa adicional: " << this->taxa_adicional << std::endl
            << "  Custo total: " << this->custo_total << std::endl;
}