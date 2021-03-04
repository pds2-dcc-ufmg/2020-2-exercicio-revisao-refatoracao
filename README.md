# Exercício Pull Request

O objetivo dessa atividade é praticar a parte de revisão e refatoração.

**Considere a seguinte descrição em alto nível da funcionalidade do código:**  
Os serviços de correio expresso oferecem várias opções de entrega, cada um com custos específicos. Um pacote apresenta um peso (em quilos), o custo por quilo para a entrega e os dados dos clientes: remetente e destinatário. Uma encomenda normal tem um peso, um custo por quilo e um custo total. Uma encomenda relâmpago tem além disso uma taxa adicional, referente a prioridade no processo de entrega.

Você deve criar um **Fork** desse repositório, fazer as alterações que julgar necessárias e então realizar um **Pull Request**. Você é livre para criar outros arquivos, classes, métodos, etc., desde que o main continue produzindo a mesma saída. Lembre-se que essa etapa não altera o comportamento funcional.

No **título** do Pull Request informe o seu **número de matrícula** e **nome**. Na **descrição** faça uma **lista/análise detalhada** das possíveis **soluções** que você utilizou. Submissões que não seguirem essas instruções serão penalizadas.

Lembre-se de analisar aspectos como: nomenclatura, formatação, organização, comentários, aplicação correta dos conceitos de OO, entre outros.
Dica: Utilize o catálogo para pensar em possíveis sugestões de refatoração (https://refactoring.com/catalog/).

######################################################################################################################################

Saída esperada:
>> Relatório de encomendas <<
[Remetente]
  Nome: Thales
  Endereço: Rua dos Pré-Socráticos
  Cidade: Miletus
  Estado: Ionia
  CEP: 548 a.C.
[Destinatário]
  Nome: Aristóteles
  Endereço: Avenida do Meio-Termo
  Cidade: Atenas
  Estado: Ática
  CEP: 384 a.C.
[Encomenda Normal]
  Peso: 5
  Custo por kg: 12
  Custo total: 0

[Remetente]
  Nome: Aristóteles
  Endereço: Avenida do Meio-Termo
  Cidade: Atenas
  Estado: Ática
  CEP: 384 a.C.
[Destinatário]
  Nome: Platão
  Endereço: Praça das Formas
  Cidade: Atenas
  Estado: Ática
  CEP: 348 a.C
[Encomenda Normal]
  Peso: 10
  Custo por kg: 12
  Custo total: 0

[Remetente]
  Nome: Platão
  Endereço: Praça das Formas
  Cidade: Atenas
  Estado: Ática
  CEP: 348 a.C
[Destinatário]
  Nome: Sócrates
  Endereço: Rua do Elenchus
  Cidade: Atenas
  Estado: Ática
  CEP: 399 a.C.
[Encomenda Normal]
  Peso: 7
  Custo por kg: 12
  Custo total: 0

[Remetente]
  Nome: Sócrates
  Endereço: Rua do Elenchus
  Cidade: Atenas
  Estado: Ática
  CEP: 399 a.C.
[Destinatário]
  Nome: Pitágoras
  Endereço: Praça dos Quadrados dos Catetos
  Cidade: Samos
  Estado: Egeu
  CEP: 571 a.C.
[Encomenda Normal]
  Peso: 2
  Custo por kg: 12
  Custo total: 0

[Remetente]
  Nome: Pitágoras
  Endereço: Praça dos Quadrados dos Catetos
  Cidade: Samos
  Estado: Egeu
  CEP: 571 a.C.
[Destinatário]
  Nome: Parmênides
  Endereço: Rua do Não Ser
  Cidade: Eleia
  Estado: Magna Grécia
  CEP: 460 a.C.
[Encomenda Normal]
  Peso: 3
  Custo por kg: 12
  Custo total: 0

[Remetente]
  Nome: Parmênides
  Endereço: Rua do Não Ser
  Cidade: Eleia
  Estado: Magna Grécia
  CEP: 460 a.C.
[Destinatário]
  Nome: Empédocles
  Endereço: Rua dos Quatro Elementos
  Cidade: Agrigento
  Estado: Sicília
  CEP: 495 a.C.
[Encomenda Relâmpago]
  Peso: 13
  Custo por kg: 18
  Taxa adicional: 0.25
  Custo total: 0

[Remetente]
  Nome: Empédocles
  Endereço: Rua dos Quatro Elementos
  Cidade: Agrigento
  Estado: Sicília
  CEP: 495 a.C.
[Destinatário]
  Nome: Anaxágoras
  Endereço: Avenida da Mente Cósmica
  Cidade: Clazômenas
  Estado: Jónia
  CEP: 499 a.C.
[Encomenda Relâmpago]
  Peso: 6
  Custo por kg: 18
  Taxa adicional: 0.25
  Custo total: 0

[Remetente]
  Nome: Anaxágoras
  Endereço: Avenida da Mente Cósmica
  Cidade: Clazômenas
  Estado: Jónia
  CEP: 499 a.C.
[Destinatário]
  Nome: Thales
  Endereço: Rua dos Pré-Socráticos
  Cidade: Miletus
  Estado: Ionia
  CEP: 548 a.C.
[Encomenda Relâmpago]
  Peso: 8
  Custo por kg: 18
  Taxa adicional: 0.25
  Custo total: 0


>> Encomendas Normais <<
Quantidade: 5
Valor Total: 324

>> Encomendas Relâmpago <<
Quantidade: 3
Valor Total: 607.5