#include <iostream>
#include <fstream>
#include <string>
#include "Encomenda.hpp"
#include "EncomendaNormal.hpp"
#include "EncomendaRelampago.hpp"
#include "Cliente.hpp"
using namespace std;

int main(){
/////Leitura do arquivo dos Clientes///////  
    FILE *arq;
    arq = fopen("dadosCliente.txt", "rt");
    char Linha[100];
    Cliente cli[10];
    int i = 0;
    
    if (arq == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
    }else{
        while (!feof(arq)){
            cli[i].nome = fgets(Linha, 100, arq);
            cli[i].endereco = fgets(Linha, 100, arq);
            cli[i].cidade = fgets(Linha, 100, arq);
            cli[i].estado = fgets(Linha, 100, arq);
            cli[i].cep = fgets(Linha, 100, arq);
            i++;
        }        
    }
fclose(arq);

	int quantN = 0;
	int quantR = 0;
	
/////Leitura do arquivo das entregas normais/////// 	
    FILE *arqN;
    arq = fopen("EncomendaNormal.txt", "rt");
    char linhaN[100];
    EncomendaNormal normal[10];
    int j=0;
    
    if (arqN == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
    }else{
        while (!feof(arqN)){
            
            normal[j].peso = fgets(linhaN, 100, arqN);
            normal[j].custoKg = fgets(linhaN, 100, arqN);
            normal[j].remetente = cli[j];
            normal[j].dest = cli[j+1];
            j++;
        }        
    }
fclose(arqN);

/////Leitura do arquivo das entregas/////// 	
    FILE *arqR;
    arq = fopen("EncomendaNormal.txt", "rt");
    char linhaR[100];
    EncomendaRelampago relampago[10];
    int k=0;
    
    if (arqR == NULL)  // Se houve erro na abertura
    {
        printf("Problemas na abertura do arquivo\n");
    }else{
        while (!feof(arqR)){
            
            relampago[k].peso = fgets(linhaR, 100, arqR);;
            relampago[k].custoKg = fgets(linhaR, 100, arqR);
            relampago[j].remetente = cli[j];
            relampago[j].dest = cli[j+1];
            j++;
            k++;
        }        
    }
fclose(arqR);
	
	
	/*std::cout << "\n>> Relatório de encomendas <<" << endl;

	double custN = 0;
	double custR = 0;

	enc0.calcula();
	enc0.print();
	custN += enc0.calcula();
	std::cout << endl;

	enc1.calcula();
	enc1.print();
	custN += enc1.calcula();
	std::cout << endl;

	enc2.calcula();
	enc2.print();
	custN += enc2.calcula();
	std::cout << endl;

	enc3.calcula();
	enc3.print();
	custN += enc3.calcula();
	std::cout << endl;

	enc4.calcula();
	enc4.print();
	custN += enc4.calcula();
	std::cout << endl;

	enc5.calcula();
	enc5.print();
	custR += enc5.calcula();
	std::cout << endl;

	enc6.calcula();
	enc6.print();
	custR += enc6.calcula();
	std::cout << endl;

	enc7.calcula();
	enc7.print();
	custR += enc7.calcula();
	std::cout << endl;
	*/
	std::cout << "\n>> Encomendas Normais <<" 
		 << "\nQuantidade: " << quantN
		 << "\nValor Total: " << custN
		 << endl
		 << "\n>> Encomendas Relâmpago <<" 
		 << "\nQuantidade: " << quantR
		 << "\nValor Total: " << custR
		 << endl;
	
}
