#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

private:
    std::string NOME;
    std::string ENDERECO;
    std::string CIDADE;
    std::string ESTADO;
    std::string CEP;

public:
    Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep) : NOME(nome), ENDERECO(endereco), CIDADE(cidade), ESTADO(estado), CEP(cep){};
    Cliente(){};
    void print();
};

#endif
