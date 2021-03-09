#include <iostream>
#include <string>
#include "Cliente.hpp"
using namespace std;

//Get e Set para Nome
string Cliente::getNome() {
	return NOME;}
void Cliente::setNome(string nome) {
	NOME = nome;}

//Get e Set para Endereço
string Cliente::getEndereco() {
	return endereco;}
void Cliente::setEndereco(string ender) {
	 endereco = ender;}

//Get e Set para Cidade
string Cliente::getCidade() {
	return CIDADE;}
void Cliente::setCidade(string cidade) {
	CIDADE = cidade;}

//Get e Set para Estado
string Cliente::getEstado() {
	return ESTADO;}
void Cliente::setEstado(string estado) {
	ESTADO = estado;}

//Get e Set para Cep
string Cliente::getCep() {
	return cep;}
void Cliente::setCep(string Cep) {
	cep = Cep;}

//Método print()
void Cliente::print(){

		std::cout << "  Nome: " << getNome() << endl
			 << "  Endereço: " <<getEndereco() << endl
			 << "  Cidade: " << getCidade() << endl
			 << "  Estado: " << getEstado() << endl
			 << "  CEP: " << getCep() << endl;
	}
