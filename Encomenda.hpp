#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
#include "Show.hpp"


class Encomenda : public Show{

	public:
		/**
		 * @brief Construtor para a classe Encomenda
		 * 
		 * @param _peso 
		 * @param _custoKg 
		 * @param _remetente 
		 * @param _destinatario 
		 */
		Encomenda(double _peso , double _custoKg , Cliente * _remetente , Cliente * _destinatario) : 
		peso(_peso), custoKg(_custoKg), remetente(_remetente) , destinatario(_destinatario) {};
			
		/* imprime o remetente e o destinatário da encomenda*/	
		void print() override;
		double getPeso(){ return peso; };
		double getCustoKg(){ return custoKg; };

		/* Calcula o valor total da encomenda */
		double getCustoTotal(){ return custoTotal; };
		Cliente * getRemetente(){ return remetente; };
		Cliente * getDestinatario(){ return destinatario; };

		/*Realiza a montagem o relatório das encomendas contidas na lista*/
		virtual double calcularTotal();

	private :
		double peso = 0.0;
		double custoKg = 0.0;
		double custoTotal = 0.0;
		Cliente * remetente;
		Cliente * destinatario;
};

#endif