Mudanças que fiz:

    Renomeado variáveis para terem a mesma formatação (agora todas são escitas em letra minúscula);
    Variáveis dos headers foram setadas como privadas e métodos get e set foram implementados em seus respectivos arquivos cpp. (ou seja, métodos que existiam nos .hpp agora foram implementados em .cpp separados)
    Adicionado std:: ao comeco de variaveis que usam-os.
    Arrumada indentação em lugares onde percebi irregularidades.
    Arrumada chamada de variáveis por causa da mudança de getters e setters.
    Adicionados comentários para esclarecimentos.

- Cliente.cpp:
    * Adicionada a implementação dos getters e setters;
    * Adicionado std:: ao começo dos endl

- Cliente.hpp:
    * Variáveis renomeadas;
    * Declaração dos getters e setters;

- Encomenda.hpp:
    * Variáveis renomeadas;
    * Método print() implementado em Encomenda.cpp;
    * Declaração dos getters e setters;
    * Removido declaração de namespace.

- Encomenda.cpp:
    * Agora existe;
    * Implementação dos getters e setters;
    * Adicionado std:: ao começo dos endl

- EncomendaNormal.hpp:
    * Método calcula() renomeado para calcula_custo_total();
    * Métodos implementados em EncomendaNormal.cpp;
    * Removido declaração de namespace.

- EncomendaNormal.cpp:
    * Agora existe;
    * Implementação dos métodos de EncomendaNormal.hpp;
    * Adicionado std:: ao começo dos endl

- EncomendaRelampago.hpp:
    * Método calcula() renomeado para calcula_custo_total();
    * Métodos implementados em EncomendaRelampago.cpp;
    * Removido declaração de namespace;
    * Nova variável para taxa.
    * Novos getters e setters para a taxa;

- EncomendaNormal.cpp:
    * Agora existe;
    * Implementação dos métodos de EncomendaRelampago.hpp;
    * Adicionado std:: ao começo dos endl

- main.cpp:
    * Renomeação de todas as atribuições de valores para setters;
    * Método calcula() renomeado para calcula_custo_total();
    * Adicionado std:: ao começo dos endl