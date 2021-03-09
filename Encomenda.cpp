#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"

Encomenda::Encomenda()
{
  this->peso = 0.0;
  this->custoKg = 0.0;
  this->total = 0.0;
}

Encomenda::Encomenda(double peso, double custoKg, double total, Cliente remetente, Cliente destinatario)
{
  this->peso = peso;
  this->custoKg = custoKg;
  this->total = total;
  this->remetente = remetente;
  this->destinatario = destinatario;
}

double Encomenda::getPeso()
{
  return this->peso;
}

void Encomenda::setPeso(double peso)
{
  this->peso = peso;
}

double Encomenda::getCustoKg()
{
  return this->custoKg;
}

void Encomenda::setCustoKg(double custoKg)
{
  this->custoKg = custoKg;
}

double Encomenda::getTotal()
{
  return this->total;
}

void Encomenda::setTotal(double total)
{
  this->total = total;
}

Cliente Encomenda::getRemetente()
{
  return this->remetente;
}

void Encomenda::setRemetente(Cliente remetente)
{
  this->remetente = remetente;
}

Cliente Encomenda::getDestinatario()
{
  return this->destinatario;
}

void Encomenda::setDestinatario(Cliente destinatario)
{
  this->destinatario = destinatario;
}

void Encomenda::print()
{

  std::cout << "[Remetente]" << std::endl;
  this->remetente.print();
  std::cout << "[Destinatário]" << std::endl;
  this->destinatario.print();
}