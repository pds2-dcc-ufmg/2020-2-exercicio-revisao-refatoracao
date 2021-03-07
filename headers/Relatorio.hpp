#ifndef Relatorio_H
#define Relatorio_H

#include <vector>
#include <string>
#include "./EncomendaNormal.hpp"
#include "./EncomendaRelampago.hpp"
#include "./Cliente.hpp"

class Relatorio {
  public:
    void makeCliente(string nome, string endereco, string cidade, string estado, string cep);
    void makeEncomenda(double peso, double custoKg, Cliente remetente, Cliente dest, std::string tipo);
    void makeCalculo();
    void display();
    Cliente getCliente(int index);

  private:
    vector<EncomendaNormal> encomendasNormais;
    vector<EncomendaRelampago> encomendasRelampago;
    vector<Cliente> clientes;
    double custoNormal = 0.0;
    double custoRelampago = 0.0;
    double total = 0.0;
};

#endif