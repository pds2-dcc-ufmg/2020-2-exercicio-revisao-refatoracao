#include <iostream>
#include "Cliente.hpp"
#include "Encomenda.hpp"
#include "EncomendaEconomica.hpp"

  double EncomendaEconomica::getTaxaDesconto(){
    return this->_taxaDesconto;
  }
  
  void EncomendaEconomica::setTaxaDesconto(double taxa){
    this->_taxaDesconto = taxa;
  }

  double EncomendaEconomica::calcularPrecoEnvio(){
		double precoFinal = this->getPeso() * this->getCustoKg();
		precoFinal -= precoFinal * this->getTaxaDesconto();
    
		return precoFinal;
  }

 void EncomendaEconomica::printDados(){
	std::cout << "[Remetente]" << std::endl; 
  this->getRemetente().printDadosCliente();
	std::cout << "[Destinatário]" << std::endl;
	this->getDestinatario().printDadosCliente();
	std::cout << "[Encomenda Economica]" << std::endl;
	std::cout << "  Peso: " << this->getPeso() << std::endl
		<< "  Custo por kg: " << this->getCustoKg() << std::endl
		<< "  Desconto da Encomenda Economica: " << this->getTaxaDesconto() << std::endl
		<< "  Custo total: " << this->getCustoTotal() << std::endl;
 }