#include <iostream>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"

int main(){
	
	//Inicio do cadastro dos clientes

	Cliente cli0;
	cli0.set_nome( "Thales" );
	cli0.set_endereco( "Rua dos Pré-Socráticos" );
	cli0.set_cidade( "Miletus" );
	cli0.set_estado( "Ionia" );
	cli0.set_cep( "548 a.C." );

	Cliente cli1;
	cli1.set_nome( "Aristóteles" );
	cli1.set_endereco( "Avenida do Meio-Termo" );
	cli1.set_cidade( "Atenas" );
	cli1.set_estado( "Ática" );
	cli1.set_cep( "384 a.C." );

	Cliente cli2;
	cli2.set_nome( "Platão" );
	cli2.set_endereco( "Praça das Formas" );
	cli2.set_cidade( "Atenas" );
	cli2.set_estado( "Ática" );
	cli2.set_cep( "348 a.C" );

	Cliente cli3;
	cli3.set_nome( "Sócrates" );
	cli3.set_endereco( "Rua do Elenchus" );
	cli3.set_cidade( "Atenas" );
	cli3.set_estado( "Ática" );
	cli3.set_cep( "399 a.C." );

	Cliente cli4;
	cli4.set_nome( "Pitágoras" );
	cli4.set_endereco( "Praça dos Quadrados dos Catetos" );
	cli4.set_cidade( "Samos" );
	cli4.set_estado( "Egeu" );
	cli4.set_cep( "571 a.C." );

	Cliente cli5;
	cli5.set_nome( "Parmênides" );
	cli5.set_endereco( "Rua do Não Ser" );
	cli5.set_cidade( "Eleia" );
	cli5.set_estado( "Magna Grécia" );
	cli5.set_cep( "460 a.C." );

	Cliente cli6;
	cli6.set_nome( "Empédocles" );
	cli6.set_endereco( "Rua dos Quatro Elementos" );
	cli6.set_cidade( "Agrigento" );
	cli6.set_estado( "Sicília" );
	cli6.set_cep( "495 a.C." );

	Cliente cli7;
	cli7.set_nome( "Anaxágoras" );
	cli7.set_endereco( "Avenida da Mente Cósmica" );
	cli7.set_cidade( "Clazômenas" );
	cli7.set_estado( "Jónia" );
	cli7.set_cep( "499 a.C." );

	//Fim do cadastro dos clientes

	int quant_normal = 0; //Quantidade de encomendas normais
	int quant_relampago = 0; //Quantidade de encomendas relampago

	//Inicio do cadastro das encomendas

	EncomendaNormal enc0;
	enc0.set_peso( 5 );
	enc0.set_custoKG( 12 );
	enc0.set_remetente( cli0 );
	enc0.set_dest( cli1 );
	++quant_normal;

	EncomendaNormal enc1;
	enc1.set_peso( 10 );
	enc1.set_custoKG( 12 );
	enc1.set_remetente( cli1 );
	enc1.set_dest( cli2 );
	++quant_normal;

	EncomendaNormal enc2;
	enc2.set_peso( 7 );
	enc2.set_custoKG( 12 );
	enc2.set_remetente( cli2 );
	enc2.set_dest( cli3 );
	++quant_normal;

	EncomendaNormal enc3;
	enc3.set_peso( 2 );
	enc3.set_custoKG( 12 );
	enc3.set_remetente( cli3 );
	enc3.set_dest( cli4 );
	++quant_normal;

	EncomendaNormal enc4;
	enc4.set_peso( 3 );
	enc4.set_custoKG( 12 );
	enc4.set_remetente( cli4 );
	enc4.set_dest( cli5 );
	++quant_normal;

	EncomendaRelampago enc5;
	enc5.set_peso( 13 );
	enc5.set_custoKG( 18 );
	enc5.set_remetente( cli5 );
	enc5.set_dest( cli6 );
	++quant_relampago;

	EncomendaRelampago enc6;
	enc6.set_peso( 6 );
	enc6.set_custoKG( 18 );
	enc6.set_remetente( cli6 );
	enc6.set_dest( cli7 );
	++quant_relampago;

	EncomendaRelampago enc7;
	enc7.set_peso( 8 );
	enc7.set_custoKG( 18 );
	enc7.set_remetente( cli7 );
	enc7.set_dest( cli0 );
	++quant_relampago;

	//Fim do cadastro das encomendas
	//Imprimir relatório das encomendas
	
	std::cout << "\n>> Relatório de encomendas <<" << std::endl;

	double cust_normal = 0; //Custo das encomendas normais
	double cust_relampago = 0; //Custo das encomendas relampagos

	enc0.calcula();
	enc0.print();
	cust_normal += enc0.calcula();
	std::cout << std::endl;

	enc1.calcula();
	enc1.print();
	cust_normal += enc1.calcula();
	std::cout << std::endl;

	enc2.calcula();
	enc2.print();
	cust_normal += enc2.calcula();
	std::cout << std::endl;

	enc3.calcula();
	enc3.print();
	cust_normal += enc3.calcula();
	std::cout << std::endl;

	enc4.calcula();
	enc4.print();
	cust_normal += enc4.calcula();
	std::cout << std::endl;

	enc5.calcula();
	enc5.print();
	cust_relampago += enc5.calcula();
	std::cout << std::endl;

	enc6.calcula();
	enc6.print();
	cust_relampago += enc6.calcula();
	std::cout << std::endl;

	enc7.calcula();
	enc7.print();
	cust_relampago += enc7.calcula();
	std::cout << std::endl;
	
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quant_normal
		 << "\nValor Total: " << cust_normal
		 << std::endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quant_relampago
		 << "\nValor Total: " << cust_relampago
		 << std::endl;
	
}