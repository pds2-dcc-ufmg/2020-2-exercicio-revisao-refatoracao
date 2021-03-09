#include <iostream>
#include "EncomendaRelampago.hpp"

double EncomendaRelampago::calcula()
{
  double x = peso * custoKg;
  x += x * 0.25;
  return x;
}

void EncomendaRelampago::print()
{

  Encomenda::print();
  cout << "[Encomenda Relâmpago]" << endl;
  cout << "  Peso: " << peso << endl
            << "  Custo por kg: " << custoKg << endl
            << "  Taxa adicional: " << 0.25 << endl
            << "  Custo total: " << t << endl;
}
