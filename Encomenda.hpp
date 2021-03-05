#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

	public:
		/*  Construtor  */
		Encomenda(double p, double custo, Cliente rem, Cliente des):
			peso(p), custoKg(custo), remetente(rem), dest(des){}

		/*  Retornam as variáveis da classe  */
		virtual double getPeso();
		virtual double getCusto();
		virtual double getTotal();
		virtual Cliente getRem();
		virtual Cliente getDest();


		/*  Imprime na tela o remetente e o destinatário da encomenda  */
		virtual void print();

		/*  Atribui o valor total da encomenda à variavel "total"  */
		virtual void setTotal(double total);

		/*  Calcula o preço total da encomenda  */
		virtual double calculaTotal();
		

	private:

		double peso = 0.0;
		double custoKg = 0.0;
		double total = 0.0;
		Cliente remetente;
		Cliente dest;

		

};

#endif