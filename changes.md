Mudanças extensivas

    Substituição de using namespace std pelo prefixo std:: nos locais que o demandam, para que possamos reduzir a chance de conflitos entre funções;
    Remoção de bibliotecas incluídas que não possuíam efeitos quaisquer sobre o arquivo, devido a redudância;
    Inicialização de atributos e das demais variáveis com um valor particular, dificultando acessos à posições indevidas da memória;
    Padronização dos formatos de nomes de variáveis e funções conforme o estilo CamelCase, além da utilização de palavras que facilitam a compreensão dos objetivos das mesmas;
    No momento de criação dos atributos private das classes, utilizou-se o símbolo "_" (underline), com o intuito de evitar acessos inesperados a atributos específicos;
    Nas classes, teve-se a alteração do privilégio de acesso aos atributos, os quais estavam definidos como public , e, agora, são private, garantindo uma maior segurança para o programa;
    Em cada classe, foram adicionados construtores a fim da atribuição das características aos objetos;
    Inserção prática do princípio de getters & setters nas classes, o que aperfeiçou o encapsulamento geral.

Mudanças mais restritivas
Cliente.cpp

    Acesso dos atributos da class Cliente (presente em Cliente.hpp) a partir de métodos getters definidos na classe.

Cliente.hpp

Nenhum comentário adicional
Encomenda.hpp

    Na superclasse, percebe-se a existência de métodos cujo tipo corresponde ao virtual, fato que outrora não era perceptível. O motivo para tal modificação trata-se de que as classes filhas – detalhadas logo abaixo – podem, neste instante, sobrescrever os métodos anteriores da classe pai (Encomenda) que são virtuais de acordo com a implementação demandada em cada contexto.

EncomendaNormal.hpp

    Remoção do método calcula, posto que a funcionalidade desejada é vista na classe da qual class EncomendaNormal foi herdada;
    Aplicação de override sobre o método virtual print como supracitado no tópico a respeito do arquivo Encomenda.hpp, assim, assumindo uma função distinta da prévia.

EncomendaRelampago.hpp

    Adição de um atributo estático em private responsável por armazenar a taxa adicional que assume o valor constante de 0.25;
    Inclusão do método getTaxa o qual está interrelacionado com a taxa precedente, retornando-a;
    A ideia do segundo item, mencionada no tópico EncomendaNormal.hpp sobre override, repete-se.

main.cpp

    Remoção das inúmeras linhas de código prolixas, as quais foram substituídas pelas aplicabilidades de vector como estrutura de dados, esta, extremamente versátil e eficiente, também, a utilização de templates que permitem generalizar os tipos de tais vectors, evento que aumenta a escala de produção quando manuseia uma mesma sequência de comandos, contudo, para tipos diferentes – neste cenário, EncomendaNormal e EncomendaRelampago.
