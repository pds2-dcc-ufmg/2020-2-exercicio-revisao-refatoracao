#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {

private:
    std::string nome;
    std::string endereco;
    std::string cidade;
    std::string estado;
    std::string cep;

public:
    Cliente();
    Cliente(std::string _nome,
            std::string _endereco,
            std::string _cidade,
            std::string _estado,
            std::string _cep);

    std::string getNome();
    std::string getEndereco();
    std::string getCidade();
    std::string getEstado();
    std::string getCep();

    void setNome(std::string);
    void setEndereco(std::string);
    void setCidade(std::string);
    void setEstado(std::string);
    void setCep(std::string);

    void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
