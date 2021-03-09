#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
  
	/*********************************************************************************************************************/
  /*************************************         Criando os clientes          ******************************************/
  
  int qtdClientes = 0;

  string nomes[] = {"Thales","Aristóteles","Platão","Sócrates","Pitágoras","Parmênides","Empédocles","Anaxágoras"};
  string enderecos[] = {"Rua dos Pré-Socráticos","Avenida do Meio-Termo","Praça das Formas","Rua do Elenchus","Praça dos Quadrados dos Catetos","Rua do Não Ser","Rua dos Quatro Elementos","Avenida da Mente Cósmica"};
  string cidades[] = {"Miletus","Atenas","Atenas","Atenas","Samos","Eleia","Agrigento","Clazômenas"};
  string estados[] = {"Ionia","Ática","Ática","Ática","Egeu","Magna Grécia","Sicília","Jónia"};
  string ceps[] = {"548 a.C.","384 a.C.","348 a.C","399 a.C.","571 a.C.","460 a.C.","495 a.C.","499 a.C."};


  for (string pessoa : nomes) {
    qtdClientes++;
  }

  Cliente clientes[qtdClientes];

  for (int i = 0; i < qtdClientes; i++) {
    clientes[i].setNome(nomes[i]);
    clientes[i].setEndereco(enderecos[i]);
    clientes[i].setCidade(cidades[i]);
    clientes[i].setEstado(estados[i]);
    clientes[i].setCep(ceps[i]);
  }

  /*********************************************************************************************************************/
  /*************************************         Gerando encomendas          *******************************************/

	int qtdEncomendasNormal = 5;
	int qtdEncomendasRelampago = 3;
  int qtdEncomendasTotais = qtdEncomendasNormal + qtdEncomendasRelampago;

  double pesosEncomendas[qtdEncomendasNormal+qtdEncomendasRelampago] = {5,10,7,2,3,13,6,8};
  double custoKgEncomendas[qtdEncomendasNormal+qtdEncomendasRelampago] = {12,12,12,12,12,18,18,18};

  double custN = 0;
	double custR = 0;
  
	cout << "\n>> Relatório de encomendas <<" << endl;

  EncomendaNormal encomendasNormal[qtdEncomendasNormal];
  EncomendaRelampago encomendasRelampago[qtdEncomendasRelampago];

  /*********************************************************************************************************************/
  /*************    Loop para criar as encomendas normais e relampago nos array dos respectivos tipos   ****************/

  for (int i = 0; i < qtdEncomendasTotais; i++) {
    int indiceDestinatario = ((i + 1) % 8);
    if (i < qtdEncomendasNormal) {
      encomendasNormal[i].setPeso(pesosEncomendas[i]);
      encomendasNormal[i].setCustoKg(custoKgEncomendas[i]);
      encomendasNormal[i].setRemerente(clientes[i]);
      encomendasNormal[i].setDestinatario(clientes[i + 1]);
      encomendasNormal[i].realizaEncomenda(encomendasNormal[i], &custN);
    }
    else {
      encomendasRelampago[i - qtdEncomendasNormal].setPeso(pesosEncomendas[i]);
      encomendasRelampago[i - qtdEncomendasNormal].setCustoKg(custoKgEncomendas[i]);
      encomendasRelampago[i - qtdEncomendasNormal].setRemerente(clientes[i]);
      encomendasRelampago[i - qtdEncomendasNormal].setDestinatario(clientes[indiceDestinatario]);
      encomendasRelampago[i - qtdEncomendasNormal].realizaEncomenda(encomendasRelampago[i - qtdEncomendasNormal], &custR);
    }
  }



	cout << "\n>> Encomendas Normais <<" 
	<< "\nQuantidade: " << qtdEncomendasNormal
	<< "\nValor Total: " << custN
	<< endl
	<< "\n>> Encomendas Relâmpago <<" 
	<< "\nQuantidade: " << qtdEncomendasRelampago
	<< "\nValor Total: " << custR
	<< endl;
}