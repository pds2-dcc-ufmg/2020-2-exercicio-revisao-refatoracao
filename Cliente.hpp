#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

class Cliente{

    private:

        std::string nome;
        std::string endereco;
        std::string cidade;
        std::string estado;
        std::string cep;
    
    public:
        Cliente(std::string nomex, std::string enderecox, std::string cidadex,std::string estadox, std::string cepx): nome(nomex), endereco(enderecox), cidade(cidadex), estado(estadox), cep(cepx){}
    
        void print(); // imprime na tela os dados de um cliente cadastrado
        std::string getNome();
        void setNome(std::string n);
        std::string getEndereco();
        void setEndereco(std::string e);
        std::string getCidade();
        void setCidade(std::string c);
        std::string getEstado();
        void setEstado(std::string s);
        std::string getCep();
        void setCep(std::string cp);
    
        
};

#endif
