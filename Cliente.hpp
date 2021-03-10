#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		std::string nome;
		std::string endereco;
		std::string cidade;
		std::string estado;
		std::string cep;
				
		void print(); // imprime na tela os dados de um cliente cadastrado

        //funções que definem atributos ('sets')
        void setNome(std::string nome);
        void setEndereco(std::string endereco);
        void setCidade(std::string cidade);
        void setEstado(std::string estado);
        void setCEP(std::string cep);

        //funções que retornam atributos ('gets')
        std::string getNome();
        std::string getEndereco();
        std::string getCidade();
        std::string getEstado();
        std::string getCEP();

};

#endif