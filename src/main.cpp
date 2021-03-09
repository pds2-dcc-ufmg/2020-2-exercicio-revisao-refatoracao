#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){

  //Leitura do arquivo de Clientes
  std::ifstream clientesFile("./data/Clientes.txt");
  std::vector<Cliente> clientes;
  string nome, endereco, cidade, estado, cep;
  while(getline(clientesFile, nome)){
    getline(clientesFile, endereco);
    getline(clientesFile, cidade);
    getline(clientesFile, estado);
    getline(clientesFile, cep);
    clientes.push_back(Cliente(nome, endereco, cidade, estado, cep));
  }
  clientesFile.close();

  //Leitura do arquivo de Encomendas
  std::ifstream encomendasFile("./data/Encomendas.txt");
  string tipo, peso, custoKg, remetente, destinatario;
  Encomenda* encomenda;
  while(encomendasFile >> tipo >> peso >> custoKg >> remetente >> destinatario){
    if(tipo == "Normal"){
      encomenda = new EncomendaNormal(stod(peso), stod(custoKg), &clientes.at(stoi(remetente)), &clientes.at(stoi(destinatario)));
    } else if(tipo == "Relampago"){
      encomenda = new EncomendaRelampago(stod(peso), stod(custoKg), &clientes.at(stoi(remetente)), &clientes.at(stoi(destinatario)));
    }
    encomenda->print();
  }
  encomendasFile.close();

  EncomendaNormal::relatorio();
  EncomendaRelampago::relatorio();

}