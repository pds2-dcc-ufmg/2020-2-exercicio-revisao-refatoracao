#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

using namespace std;

class Cliente {

  public:
  
    Cliente();
    Cliente(string nome, string endereco, string cidade, string estado, string cep);

    void setNome(string nome);
    void setEndereco(string endereco);
    void setCidade(string cidade);
    void setEstado(string estado);
    void setCep(string cep);

    string getNome();
    string getEndereco();
    string getCidade();
    string getEstado();
    string getCep();
	
    void print(); // imprime na tela os dados de um cliente cadastrado

  private:
    string nome;
    string endereco;
    string cidade;
    string estado;
    string cep;
};

#endif
