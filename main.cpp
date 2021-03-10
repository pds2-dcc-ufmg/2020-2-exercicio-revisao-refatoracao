#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;
 
int main() {  
  Cliente cli0;
  cli0.nome = "Thales";
  cli0.endereco = "Rua dos Pré-Socráticos";
  cli0.cidade = "Miletus";
  cli0.estado = "Ionia";
  cli0.cep = "548 a.C.";
 
  Cliente cli1;
  cli1.nome = "Aristóteles";
  cli1.endereco = "Avenida do Meio-Termo";
  cli1.cidade = "Atenas";
  cli1.estado = "Ática";
  cli1.cep = "384 a.C.";
 
  Cliente cli2;
  cli2.nome = "Platão";
  cli2.endereco = "Praça das Formas";
  cli2.cidade = "Atenas";
  cli2.estado = "Ática";
  cli2.cep = "348 a.C";
 
  Cliente cli3;
  cli3.nome = "Sócrates";
  cli3.endereco = "Rua do Elenchus";
  cli3.cidade = "Atenas";
  cli3.estado = "Ática";
  cli3.cep = "399 a.C.";
 
  Cliente cli4;
  cli4.nome = "Pitágoras";
  cli4.endereco = "Praça dos Quadrados dos Catetos";
  cli4.cidade = "Samos";
  cli4.estado = "Egeu";
  cli4.cep = "571 a.C.";
 
  Cliente cli5;
  cli5.nome = "Parmênides";
  cli5.endereco = "Rua do Não Ser";
  cli5.cidade = "Eleia";
  cli5.estado = "Magna Grécia";
  cli5.cep = "460 a.C.";
 
  Cliente cli6;
  cli6.nome = "Empédocles";
  cli6.endereco = "Rua dos Quatro Elementos";
  cli6.cidade = "Agrigento";
  cli6.estado = "Sicília";
  cli6.cep = "495 a.C.";
 
  Cliente cli7;
  cli7.nome = "Anaxágoras";
  cli7.endereco = "Avenida da Mente Cósmica";
  cli7.cidade = "Clazômenas";
  cli7.estado = "Jónia";
  cli7.cep = "499 a.C.";
 
  int quantidadeEncomendaNormal = 0;
  int quantiadeEncomendaRelampago = 0;
 
  EncomendaNormal enc0;
  enc0.peso = 5;
  enc0.custoKg = 12;
  enc0.remetente = cli0;
  enc0.destinatario = cli1;
  quantidadeEncomendaNormal++;
 
  EncomendaNormal enc1;
  enc1.peso = 10;
  enc1.custoKg = 12;
  enc1.remetente = cli1;
  enc1.destinatario = cli2;
  quantidadeEncomendaNormal++;
 
  EncomendaNormal enc2;
  enc2.peso = 7;
  enc2.custoKg = 12;
  enc2.remetente = cli2;
  enc2.destinatario = cli3;
  quantidadeEncomendaNormal++;
 
  EncomendaNormal enc3;
  enc3.peso = 2;
  enc3.custoKg = 12;
  enc3.remetente = cli3;
  enc3.destinatario = cli4;
  quantidadeEncomendaNormal++;
 
  EncomendaNormal enc4;
  enc4.peso = 3;
  enc4.custoKg = 12;
  enc4.remetente = cli4;
  enc4.destinatario = cli5;
  quantidadeEncomendaNormal++;
 
  EncomendaRelampago enc5;
  enc5.peso = 13;
  enc5.custoKg = 18;
  enc5.remetente = cli5;
  enc5.destinatario = cli6;
  quantiadeEncomendaRelampago++;
 
  EncomendaRelampago enc6;
  enc6.peso = 6;
  enc6.custoKg = 18;
  enc6.remetente = cli6;
  enc6.destinatario = cli7;
  quantiadeEncomendaRelampago++;
 
  EncomendaRelampago enc7;
  enc7.peso = 8;
  enc7.custoKg = 18;
  enc7.remetente = cli7;
  enc7.destinatario = cli0;
  quantiadeEncomendaRelampago++;
  
  cout << "\n>> Relatório de encomendas <<" << endl;
 
  double custoEncomendaNormal = 0;
  double custoEncomendaRelampago = 0;
 
  enc0.calcula();
  enc0.print();
  custoEncomendaNormal += enc0.calcula();
  cout << endl;
 
  enc1.calcula();
  enc1.print();
  custoEncomendaNormal += enc1.calcula();
  cout << endl;
 
  enc2.calcula();
  enc2.print();
  custoEncomendaNormal += enc2.calcula();
  cout << endl;
 
  enc3.calcula();
  enc3.print();
  custoEncomendaNormal += enc3.calcula();
  cout << endl;
 
  enc4.calcula();
  enc4.print();
  custoEncomendaNormal += enc4.calcula();
  cout << endl;
 
  enc5.calcula();
  enc5.print();
  custoEncomendaRelampago += enc5.calcula();
  cout << endl;
 
  enc6.calcula();
  enc6.print();
  custoEncomendaRelampago += enc6.calcula();
  cout << endl;
 
  enc7.calcula();
  enc7.print();
  custoEncomendaRelampago += enc7.calcula();
  cout << endl;
  
  cout << "\n>> Encomendas Normais <<" 
     << "\nQuantidade: " << quantidadeEncomendaNormal
     << "\nValor Total: " << custoEncomendaNormal
     << endl
     << "\n>> Encomendas Relâmpago <<" 
     << "\nQuantidade: " << quantiadeEncomendaRelampago
     << "\nValor Total: " << custoEncomendaRelampago
     << endl;
  
}
