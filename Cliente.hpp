#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

/*
 * Classe Cliente - Representa o cadastro de um cliente 
 */
class Cliente {

	public:

        // construtor padrao da classe Cliente
		Cliente() {}

        // construtor da classe Cliente
        Cliente( std::string nome,
		         std::string endereco,
		         std::string cidade,
		         std::string estado,
		         std::string cep	 ): _nome( nome ),
				                        _endereco( endereco ),
							    	    _cidade( cidade ),
								        _estado( estado ),
								        _cep( cep ) {}

        // imprime na tela os dados de um cliente cadastrado
		void print(); 

	private:

        // Dados do cadastro do cliente
		std::string _nome;
		std::string _endereco;
		std::string _cidade;
		std::string _estado;
		std::string _cep;			
};

#endif