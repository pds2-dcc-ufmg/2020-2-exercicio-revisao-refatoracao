#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaRelampago.hpp"

  double EncomendaRelampago::getTaxaEncomendaRelampago(){
    return this->_taxaEncomendaRelampago;
  }
  void EncomendaRelampago::setTaxaEncomendaRelampago(double taxa){
    this->_taxaEncomendaRelampago = taxa;
  }

  double EncomendaRelampago::calcularPrecoEnvio(){
		double precoFinal = this->getPeso() * this->getCustoKg();
		precoFinal += precoFinal * this->getTaxaEncomendaRelampago();
    
		return precoFinal;
  }

 void EncomendaRelampago::printDados(){
	std::cout << "[Remetente]" << std::endl;
	this->getRemetente().printDadosCliente();
	std::cout << "[Destinatário]" << std::endl;
	this->getDestinatario().printDadosCliente();
	std::cout << "[Encomenda Relâmpago]" << std::endl;
	std::cout << "  Peso: " << this->getPeso() << std::endl
		<< "  Custo por kg: " << this->getCustoKg() << std::endl
		<< "  Taxa adicional: " << this->getTaxaEncomendaRelampago() << std::endl
			<< "  Custo total: " << this->getCustoTotal() << std::endl;
 }