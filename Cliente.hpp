#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente
{
private:
    string NOME;
    string endereco;
    string CIDADE;
    string ESTADO;
    string cep;

public:
    Cliente() {} // construtor padrão

    Cliente(string _nome, string _endereco, string _CIDADE, string _ESTADO, string _cep)
    {

        this->NOME = _nome;
        this->endereco = _endereco;
        this->CIDADE = _CIDADE;
        this->ESTADO = _ESTADO;
        this->cep = _cep;

    } // construtor

    string getNOME()
    {
        return NOME;
    }
    string getendereco()
    {
        return endereco;
    }
    string getCIDADE()
    {
        return CIDADE;
    }
    string getESTADO()
    {
        return ESTADO;
    }
    string getcep()
    {
        return cep;
    }

    void setNOME(string _nome)
    {
        this->NOME = _nome;
    }
    void setendereco(string _endereco)
    {
        this->endereco = _endereco;
    }
    void setCIDADE(string _CIDADE)
    {
        this->CIDADE = _CIDADE;
    }
    void setESTADO(string _ESTADO)
    {
        this->ESTADO = _ESTADO;
    }
    void setcep(string _cep)
    {
        this->cep = _cep;
    }

    void printCliente()
    {

        std::cout << "  Nome: " << NOME << endl
                  << "  Endereço: " << endereco << endl
                  << "  Cidade: " << CIDADE << endl
                  << "  Estado: " << ESTADO << endl
                  << "  CEP: " << cep << endl;

    }           // imprime na tela os dados de um cliente cadastrado
    
    ~Cliente(); // destrutor
};

#endif
