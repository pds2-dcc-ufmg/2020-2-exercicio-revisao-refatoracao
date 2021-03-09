#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

  private:
		string nome;
		string endereco;
		string cidade;
		string estado;
		string cep;

	public:
    void setNome(string n) {  nome = n; }
    string getNome() { return this->nome; }
				
    void setEndereco(string end) {  endereco = end; }
    string getEndereco() { return this->endereco; }
				
    void setCidade(string ci) {  cidade = ci; }
    string getCidade() { return cidade; }
				
    void setEstado(string es) {  estado = es; }
    string getEstado() { return estado; }
				
    void setCep(string c) {  cep = c; }
    string getCep() { return cep; }
				
		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif