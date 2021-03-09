#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>;

class Cliente{

	private:

		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado; 
		std::string cep;
    
    public:
		void print(); // imprime na tela os dados de um cliente cadastrado
        void getNome();
        void setNome(std::string n);
        void getEndereco();
        void setEndereco(std::string e);
        void getCidade();
        void setCidade(std::string c);
        void getEstado();
        void setEstado(std::string s);
        void getCep();
        void setCep(std::string cp);
    
		
};

#endif
