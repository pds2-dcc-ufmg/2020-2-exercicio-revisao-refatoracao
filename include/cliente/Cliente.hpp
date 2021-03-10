#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
   public:
    Cliente(){};
    Cliente(std::string _nome,
            std::string _endereco,
            std::string _cidade,
            std::string _estado,
            std::string _cep) : nome(_nome), endereco(_endereco), cidade(_cidade), estado(_estado), cep(_cep) {}
    ~Cliente(){};

    void imprimeDados();

   private:
    std::string nome;
    std::string endereco;
    std::string cidade;
    std::string estado;
    std::string cep;
};

#endif