#include "../headers/Encomenda.hpp"
#include "../headers/EncomendaNormal.hpp"
#include "../headers/EncomendaRelampago.hpp"
#include "../headers/Cliente.hpp"
#include "../headers/Encomenda.hpp"
#include "../headers/Relatorio.hpp"

int main(){

  Relatorio relatorio = Relatorio();

  relatorio.makeCliente("Thales", "Rua dos Pré-Socráticos", "Miletus", "Ionia", "548 a.C.");
  relatorio.makeCliente("Aristóteles", "Avenida do Meio-Termo", "Atenas", "Ática", "384 a.C.");
  relatorio.makeCliente("Platão", "Praça das Formas", "Atenas", "Ática", "348 a.C");
  relatorio.makeCliente("Sócrates", "Rua do Elenchus", "Atenas", "Ática", "399 a.C.");
  relatorio.makeCliente("Pitágoras", "Praça dos Quadrados dos Catetos", "Samos", "Egeu", "571 a.C.");
  relatorio.makeCliente("Parmênides", "Rua do Não Ser", "Eleia", "Magna Grécia", "460 a.C.");
  relatorio.makeCliente("Empédocles", "Rua dos Quatro Elementos", "Agrigento", "Sicília", "495 a.C.");
  relatorio.makeCliente("Anaxágoras", "Avenida da Mente Cósmica", "Clazômenas", "Jónia", "499 a.C.");
	
  relatorio.makeEncomenda(5, 12, relatorio.getCliente(0), relatorio.getCliente(1), "Normal");
  relatorio.makeEncomenda(10, 12, relatorio.getCliente(1), relatorio.getCliente(2), "Normal");
  relatorio.makeEncomenda(7, 12, relatorio.getCliente(2), relatorio.getCliente(3), "Normal");
  relatorio.makeEncomenda(2, 12, relatorio.getCliente(3), relatorio.getCliente(4), "Normal");
  relatorio.makeEncomenda(3, 12, relatorio.getCliente(4), relatorio.getCliente(5), "Normal");
  relatorio.makeEncomenda(13, 18, relatorio.getCliente(5), relatorio.getCliente(6), "Relampago");
  relatorio.makeEncomenda(6, 18, relatorio.getCliente(6), relatorio.getCliente(7), "Relampago");
  relatorio.makeEncomenda(8, 18, relatorio.getCliente(7), relatorio.getCliente(0), "Relampago");
	
  relatorio.makeCalculo();
	
  relatorio.display();
}
