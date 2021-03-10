#ifndef CLIENTE_H
#define CLIENTE_H
 
#include <string>
using namespace std;
 
class Cliente{
 
  public:
    string nome, endereco, cidade, estado, cep;
 
    void print();   
};
 
#endif
