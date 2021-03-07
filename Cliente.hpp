#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
  public:		
    Cliente();

    Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);

    void printDadosCliente(); 

    std::string getNomeCliente();
    void setNomeCliente(std::string nome);

    std::string getEndereco();
    void setEndereco(std::string endereco);

    std::string getCidade();
    void setCidade(std::string cidade);

    std::string getEstado();
    void setEstado(std::string estado);

    std::string getCep();
    void setCep(std::string cep);

	private:
		std::string _nomeCliente;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _cep;
};

#endif