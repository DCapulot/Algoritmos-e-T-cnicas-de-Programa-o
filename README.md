# Algoritmos e Técnicas de Programação

Repositório com os exercícios que resolvi na disciplina de **Algoritmos e Técnicas de Programação**, todos em **linguagem C**. Os programas foram organizados por aula e mostram a evolução dos conceitos básicos até funções, matrizes e strings.

![Linguagem](https://img.shields.io/badge/linguagem-C-blue)
![Exercícios](https://img.shields.io/badge/aulas-8-green)

## O que este repositório demonstra

- Lógica de programação e resolução de problemas passo a passo
- Entrada e saída de dados (`printf`, `scanf`, `fgets`)
- Estruturas de decisão (`if / else if`, `switch-case`)
- Estruturas de repetição (`for`, `while`, `do-while`)
- Vetores, matrizes e strings
- Modularização com funções e retorno de valores

## Conteúdo por aula

| Aula | Tema | Exercícios |
|------|------|------------|
| [Aula 1](./Aula%201) | Fundamentos e operações | Peso ideal a partir da altura, conversão de Celsius para Fahrenheit, cálculo de comissão e salário final, pseudocódigo de bônus salarial (30%) |
| [Aula 2](./Aula%202) | Estruturas de decisão | Soma condicional (maior que 10 e maior que 15), contagem de números positivos, maior entre dois números, par/ímpar, ano bissexto, correção de um gabarito de 3 questões |
| [Aula 3](./Aula%203) | Decisão com `switch` e `else if` | Calculadora com as quatro operações, categorias de nadadores por idade, média de notas e cálculo de frequência |
| [Aula 4](./Aula%204) | Estruturas de repetição | Múltiplos de 4 menores que 200, soma e produto em uma sequência de 15 números, fatorial, média de alunos com `do-while`, `while` com código de parada e `for` com quantidade de alunos definida pelo usuário |
| [Aula 5](./Aula%205) | Vetores | Contagem de ocorrências do número 5, substituição de elementos, soma de vetores em um terceiro vetor, busca de um valor e das posições onde ele aparece |
| [Aula 6](./Aula%206) | Matrizes e funções | Soma de matrizes 4x6, montagem de matriz a partir de dois vetores, diagonal principal, matriz transposta, calculadora e conceito final com funções |
| [Aula 7](./Aula%207) | Funções | Operação matemática com função que retorna o resultado, média e conceito de aluno |
| [Aula 8](./Aula%208) | Strings | Leitura com `fgets` e `scanf`, vetor de nomes, substituição de caracteres com contagem de trocas |

## Estrutura do projeto

```
Algoritmos-e-Tecnicas-de-Programacao/
├── Aula 1/
├── Aula 2/
│   ├── 1º lista de exercicio/
│   └── 2 lista de exercicio/
├── Aula 3/
├── Aula 4/
│   ├── Lista 1/
│   └── Lista 2/
├── Aula 5/
├── Aula 6/
│   ├── LISTA 1/
│   └── LISTA 2/
├── Aula 7/
├── Aula 8/
└── README.md
```

## Como executar

Você precisa de um compilador C, como o **GCC**. Para instalar:

- **Windows:** instale o [MinGW-w64](https://www.mingw-w64.org/) ou use o Code::Blocks
- **Linux (Debian/Ubuntu):** `sudo apt install build-essential`
- **macOS:** `xcode-select --install`

Depois é só compilar e rodar qualquer exercício:

```bash
# Exemplo com a calculadora da Aula 3
gcc "Aula 3/Exercicio1.c" -o calculadora
./calculadora        # no Windows: calculadora.exe
```

> Os nomes de pastas e arquivos têm espaços, então use aspas nos caminhos.

## Exemplo de código

Trecho da calculadora com `switch-case` (Aula 3):

```c
switch (operacao) {
    case '+': resultado = num1 + num2; break;
    case '-': resultado = num1 - num2; break;
    case '*': resultado = num1 * num2; break;
    case '/': /* trata divisão por zero */ break;
    default:  printf("Operação inválida\n");
}
```

## Tecnologias

- Linguagem **C**
- Compilador **GCC**

## Autor

**DCapulot**

[GitHub](https://github.com/DCapulot)
