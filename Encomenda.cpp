#include <iostream>
#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

//Get e Set para Peso
double Encomenda::getPeso() {
	return PESO;}
void Encomenda::setPeso(double peso) {
	PESO = peso;}

//Get e Set para KG
double Encomenda::getKg() {
	return CUSTOkg;}
void Encomenda::setKg(double kg) {
	CUSTOkg = kg;}

//Get para Total
double Encomenda::getTotal() {
	return T;}

//Get e Set para Remetente
Cliente Encomenda::getRemetente() {
	return remetente;}
void Encomenda::setRemetente(Cliente remet) {
	remetente = remet;}

//Get e Set para Destinatário
Cliente Encomenda::getDestinatario() {
	return dest;}
void Encomenda::setDestinatario(Cliente destinatario) {
	dest = destinatario;}

//Método print()
void Encomenda::print(){

  std::cout << "[Remetente]" << endl;
  getRemetente().print();
  std::cout << "[Destinatário]" << endl;
  getDestinatario().print();
}
