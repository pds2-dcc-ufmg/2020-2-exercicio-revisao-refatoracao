#ifndef EncomendaNormal_H
#define EncomendaNormal_H

#include "Encomenda.hpp"
#include "Cliente.hpp"


class EncomendaNormal : public Encomenda
{

public:
	/**
	 * @brief Construtor para a classe EncomendaNormal
	 * 
	 * @param _peso 
	 * @param _custoKg 
	 * @param _remetente 
	 * @param _destinatario 
	 */
	EncomendaNormal(double _peso, double _custoKg, Cliente *_remetente, Cliente *_destinatario)
		: Encomenda(_peso, _custoKg, _remetente, _destinatario){};

	/* Mostra as informações dos clientes envolvidos e as informações da encomenda */	
	void print() override;
};

#endif