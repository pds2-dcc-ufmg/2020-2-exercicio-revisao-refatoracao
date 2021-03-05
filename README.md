# Exercício Pull Request

##### Aluno: Erlan Araújo Sousa
##### Matrícula: 2020026036

# Relatório de Mudanças:

## Geral:
- O namespace std foi retirado para evitar conflitos, e com ele foram adicionados os "std" nos locais necessários;
- As saídas de texto foram padronizadas em "std::cout << **texto** << std::endl";
- Todas as funções tiveram o nome mudado para explicar o que faz e padronizado em separação de palavras por maiuscula sem espaços, ___ex: printCliente___;
- Todas as variáveis protegidas e privadas foram padronizadas para minúscula e com início e separação de palavras por underline, ___ex: _custo_total___; 
- Todas as variáveis foram padronizadas para minúscula e separação de palavras por underline, ___ex: custo_total___; 
- Foram adicionados comentários á todas as funções para facilitar o entendimento;

## Cliente.hpp:
- Foi criado um modificador de acesso private para acoplar as informações do cliente e protegê-las;
- Foi adicionado um construtor cliente tanto vazio - para auxiliar na contrução de encomendas- quando por parâmetros - para resumir as linhas de codigo necessárias na main;

## Cliente.cpp:
- Foi adicionado o **this->** antes das variáveis para acessar os dados privados e protegidos;
- Foi implementado o construtor de clientes atribuindo os valores recebidos as variaveis internas;
 
## Encomenda.hpp:
- Foi criado um modificador de acesso protected para acoplar as informações da encomenda e protegê-las, mas ainda permitindo que as classes agregadas as acessassem;
- A função _calcula_ foi renomeada para _calculaCustoTotal_ e ministrada como virtual, assim, as duas classes encomenda seguintes poderiam usá-la e modificá-la se necessário;

## EncomendaNormal.hpp:
- Criado um construtor de encomenda normal para facilitar a main;

## EncomendaRelampago.hpp:
- Criada uma constante para taxa de entrega;
- Criado um construtor de encomenda relampago para facilitar a main;
- A função _custo_total_ foi modificada para acoplar a taxa de entrega;

## main.cpp:
- Todas as entradas de clientes e entregas foram colocadas nos construtores;
