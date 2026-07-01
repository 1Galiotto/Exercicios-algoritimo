# Sistema de Cadastro de Alunos em C

## Descrição

Este projeto consiste em um programa desenvolvido na linguagem **C** que realiza o cadastro de até **5 alunos**, armazenando seus nomes e três notas. Após o cadastro, o programa calcula a média de cada aluno, informa sua situação (Aprovado ou Reprovado) e identifica o aluno com a maior média da turma.

O objetivo deste projeto é praticar conceitos fundamentais da programação estruturada, como vetores, funções, estruturas de repetição e estruturas condicionais.

## Funcionalidades

* Cadastro de até 5 alunos.
* Armazenamento do nome de cada aluno.
* Registro de três notas para cada aluno.
* Cálculo automático da média.
* Exibição de uma tabela contendo:

  * Nome do aluno;
  * Três notas;
  * Média final;
  * Situação (Aprovado ou Reprovado).
* Identificação do aluno com a maior média da turma.

## Estrutura do Código

### Biblioteca utilizada

```c
#include <stdio.h>
```

A biblioteca `stdio.h` é utilizada para permitir a entrada e saída de dados através das funções `scanf()` e `printf()`.

---

### Constante

```c
#define MAX_ALUNOS 5
```

Foi definida uma constante para representar a quantidade máxima de alunos cadastrados. Isso facilita futuras alterações no limite do programa.

---

### Função `calcularMedia()`

```c
float calcularMedia(float n1, float n2, float n3)
```

Essa função recebe três notas como parâmetros e retorna a média aritmética delas.

Separar esse cálculo em uma função torna o código mais organizado, reutilizável e fácil de entender.

---

### Declaração dos vetores

```c
char nomes[MAX_ALUNOS][50];
float notas[MAX_ALUNOS][3];
float medias[MAX_ALUNOS];
```

Os vetores são utilizados para armazenar as informações dos alunos:

* `nomes` guarda o nome de cada aluno.
* `notas` armazena as três notas de cada aluno.
* `medias` guarda a média calculada de cada aluno.

---

### Entrada de dados

Foi utilizado um laço `for` para realizar o cadastro dos cinco alunos.

Para cada aluno, o programa solicita:

* Nome;
* Primeira nota;
* Segunda nota;
* Terceira nota.

Após a leitura das notas, a média é calculada utilizando a função `calcularMedia()` e armazenada no vetor de médias.

---

### Identificação da maior média

Após calcular todas as médias, outro laço percorre o vetor procurando a maior média registrada.

Sempre que uma média maior é encontrada, seu índice é armazenado na variável:

```c
indiceMaior
```

Ao final da busca, essa variável indica qual aluno obteve o melhor desempenho.

---

### Exibição dos resultados

O programa imprime uma tabela contendo:

* Nome;
* Nota 1;
* Nota 2;
* Nota 3;
* Média;
* Situação.

A situação do aluno é determinada pela condição:

```c
media >= 7
```

* Média maior ou igual a 7 → **Aprovado**
* Média menor que 7 → **Reprovado**

Por fim, o programa exibe o nome do aluno com a maior média da turma juntamente com sua média.

## Conceitos de Programação Utilizados

Este projeto aplica diversos conceitos básicos da linguagem C, entre eles:

* Vetores (Arrays);
* Matrizes;
* Funções;
* Estruturas de repetição (`for`);
* Estruturas condicionais (`if` e operador ternário);
* Constantes (`#define`);
* Entrada e saída de dados (`scanf` e `printf`).

## Objetivo Educacional

Este exercício foi desenvolvido com o objetivo de praticar os principais fundamentos da programação em C, reforçando o uso de estruturas de dados simples, modularização por funções e manipulação de informações utilizando vetores.
