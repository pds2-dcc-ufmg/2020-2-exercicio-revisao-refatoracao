# Análise das Soluções

De modo geral busquei diminuir a repetição de informações e funções, facilitar a compreensão do programa e deixá-lo mais otimizado.

-> Em todos os casos utilizei as letras minúsculas para declaração das variáveis e o underline como primeiro carácter para se referir aos elementos da própria classe.

**Cliente.cpp**

-> Implementação da função construtora de cliente;

-> Utilização do this para referenciar melhor o código.

**Cliente.hpp**

-> Criação de um construtor para a classe;

-> Separação correta dos dados em private e funções em public.

**Encomenda.cpp**

-> Criação do módulo encomenda cpp para separar a implementação da realização;

-> Implementação da função construtora de encomenda com quatro parâmetros para ser utilizada na função main;

-> Utilização da referência this para melhor entendimento;

-> A implementação de print também passa a ser localizada em Encomenda.cpp.

**Encomenda.hpp**

-> Criação da função construtora para a classe;

-> Separação correta dos dados em private e funções em public;

-> Melhora na organização dos nomes, por meio do underline e a utilização das palavras completas, sem abreviações.

**---->** Como EncomendaNormal e EncomendaRelampago são subclasses de Encomenda e por não implementarem muitos métodos, não acho que seja necessário implementar seus módulos cpp;

**EncomendaNormal.hpp**

-> Utilização do this como referência;

-> Melhor utilização da função calcula, por meio da atribuição do valor do custo total;  

**EncomendaRelampago.hpp**

-> Utilização do this como referência;

-> Melhor utilização da função calcula, por meio da atribuição do valor do custo total; 

-> Utilização da constante taxa_adicional para evitar a presença de números "aleatórios" no programa.

**main.cpp**

-> Criação de um vetor de clientes para melhor organização e caso seja preciso, por exemplo, imprimir os dados dos clientes no futuro de forma mais rápida e fácil;

-> Separação dos índices de cada cliente pelo underline(_);

-> Utilização de palavras completas ao invés de abreviações para melhorar o entendimento;

-> Utilização de um método mais compacto para criação das classes;

-> Criação de vetores para as encomendas normais e relâmpago, de modo a facilitar a organização, a sua impressão e o cálculo do custo total.
