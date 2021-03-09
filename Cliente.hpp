#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {

	public:

        Cliente(std::string nome, std::string endereco, std::string cidade, std::string estado, std::string cep);
	    
        // imprime na tela os dados de um cliente cadastrado
		void imprimeDados();

    private:

        std::string nome;
        std::string endereco;
        std::string cidade;
        std::string estado;
        std::string cep;
};

#endif
