 #include <iostream>
 #include <string>
 #include "Encomenda.hpp"
using namespace std;

 double Encomenda::getPeso(){return peso;}
 double Encomenda::getCusto(){return custoKg;}
 Cliente Encomenda::getRem(){return remetente;}
 Cliente Encomenda::getDest(){return dest;}
 double Encomenda::getTotal(){return total;}

 double Encomenda::calculaTotal(){

     double custo = getPeso() * getCusto();
     this->setTotal(custo);
     return custo;
 }

 void Encomenda::print(){
     cout << "[Remetente]" << endl;
     remetente.print();
     cout << "[Destinatário]" << endl;
     dest.print();
 }

 void Encomenda::setTotal(double total){
     this->total=total;
 }
