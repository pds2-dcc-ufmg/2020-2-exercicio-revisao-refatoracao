#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H
 
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;
 
class EncomendaRelampago: public Encomenda{
 
  public:
    double calcula(){
      double custoPeso = peso * custoKg;
      custoPeso += custoPeso * 0.25;      
      return custoPeso;
    }
 
    void print(){
      Encomenda::print();
      cout << "[Encomenda Relâmpago]" << endl;
      cout << "  Peso: " << peso << endl
        << "  Custo por kg: " << custoKg << endl
        << "  Taxa adicional: " << 0.25 << endl
        << "  Custo total: " << custoTotal << endl;
    }
 
};
 
#endif
