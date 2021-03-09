#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;
class Cliente{
	public:
   Cliente(string NOME, string endereco, string CIDADE, string ESTADO, string cep){
         this ->_nomeCliente = NOME;
  this->_enderecoCliente = endereco;
  this->_CIDADECliente = CIDADE;
  this ->_ESTADOCliente = ESTADO;
  this->_cepCliente = cep; 
      };

		string NOME;
		string endereco;
		string CIDADE;
		string ESTADO;
		string cep;
				
		void print(){
  // imprime na tela os dados de um cliente cadastrado
    }

#endif
