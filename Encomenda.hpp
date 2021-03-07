#ifndef Encomenda_H
#define Encomenda_H

#include "Cliente.hpp"

class Encomenda{
  public:
    Encomenda();
    Encomenda(double peso, double custoKg, Cliente remetente, Cliente destinatario);
    
    double getPeso();
	  void setPeso(double peso);

    double getCustoKg();
	  void setCustoKg(double custoKg);

    double getCustoTotal();
	  void setCustoTotal(double custoTotal);

    Cliente getRemetente();
	  void setRemetente(Cliente remetente);

    Cliente getDestinatario();
	  void setDestinatario(Cliente destinatario);

    virtual ~Encomenda() {};

	private:
		double _peso = 0.0;
		double _custoKg = 0.0;
		double _custoTotal = 0.0;
		Cliente _remetente;
		Cliente _destinatario;
		
};
#endif