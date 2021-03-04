Lucas Rios Bicalho - 2020006779

As alterações serão divididas em uma seção para cada classe e uma seção para o arquivo main.

Cliente:
1) Todos os atributos se tornaram private, para seguir o princípio do encapsulamento.
2) Foram criados métodos construtores: um sem parâmetro (para evitar problemas quando a classe encomenda cria um Cliente sem parâmetro) que preenche todos os atributos com strings vazias, e um que recebe cinco strings e preenche os atributos com elas. A declaração está no .hpp e a implementação no .cpp.

Encomenda:
1) Se tornou uma superclasse do tipo interface, ou seja, suas funções foram alteradas para o tipo virtual (sem implementação) e serão sobrescritas pelas suas subclasses.
2) Recebeu um construtor que não será utilizado na prática, mas evitará problemas ao implementar os construtores das subclasses.
3) Seus atributos se tornaram protected, para seguir o princípio do encapsulamento ao mesmo tempo que permite seu acesso pelas subclasses.

EncomendaNormal:
1) Recebeu um arquivo .cpp, para separar a declaração das funções de sua implementação, e facilitar a modularização. Todas as implementações já colocadas foram transferidas para esse arquivo.
2) A função "print" foi modificada para compensar pela falta de um print em Encomenda, que se tornou uma interface.
3) Recebeu um método construtor que, além de já preencher os atributos da mesma forma que o construtor anterior preenchia, também preenche o atributo T (total) usando a função "calcula".

EncomendaRelampago:
1) Recebeu um arquivo .cpp, para separar a declaração das funções de sua implementação, e facilitar a modularização. Todas as implementações já colocadas foram transferidas para esse arquivo.
2) A função "print" foi modificada para compensar pela falta de um print em Encomenda, que se tornou uma interface.
3) Recebeu um método construtor que, além de já preencher os atributos da mesma forma que o construtor anterior preenchia, também preenche o atributo T (total) usando a função "calcula".
4) O "0.25", que se referia à taxa adicional cobrada e aparecia repetidas vezes, foi substituido por um novo atributo chamado "taxa" (protected), o qual recebe 0.25 por padrão ao ser executado o método construtor.
5) Recebeu um novo método "setTaxa" que altera o valor de "taxa", caso deseje-se usar um valor diferente do padrão

Main:
1) Todas as declarações da classe "Cliente" foram alteradas para utilizar o novo método construtor implementado
2) Todas as declarações da classe "EncomendaNormal" foram alteradas para utilizar o novo método construtor implementado
3) Todas as declarações da classe "EncomendaRelampago" foram alteradas para utilizar o novo método construtor implementado