#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"

class EncomendaRelampago: public Encomenda{

	public:
		/**
		 * @brief Construtor para a classe EncomendaRelampago
		 * 
		 * @param _peso 
		 * @param _custoKg 
		 * @param _remetente 
		 * @param _destinatario 
		 */
		EncomendaRelampago(double _peso , double _custoKg , Cliente * _remetente , Cliente * _destinatario) 
		: Encomenda( _peso, _custoKg, _remetente, _destinatario) {};
		
		/* Calcula o valor total adicionando a taxa */
		double calcularTotal() override;
		const double getTaxaAdicional(){ return TAXA_ADICIONAL; };

		/* Mostra as informações dos clientes envolvidos e as informações da encomenda */
		void print() override;

		private :
		const double TAXA_ADICIONAL = 0.25 ;

};

#endif