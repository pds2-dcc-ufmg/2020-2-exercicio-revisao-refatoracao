#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"
using namespace std;

class Encomenda{

private:

		double PESO = 0.0;
		double CUSTOkg = 0.0;
		double T = 0.0;
		Cliente remetente;
		Cliente dest;


public:
	Encomenda (double peso, double kg, Cliente remet, Cliente destinatario):  // Construtor
		PESO(peso), CUSTOkg(kg), remetente(remet), dest(destinatario) {}

//Get e Set para Peso
double getPeso();
void setPeso(double peso);

//Get e Set para KG
double getKg();
void setKg(double kg);

//Get e Set para Remetente
Cliente getRemetente();
void setRemetente(Cliente remet);

//Get e Set para Destinatario
Cliente getDestinatario();
void setDestinatario(Cliente destinatario);

//Get para Total
double getTotal();


void print();

};

#endif
