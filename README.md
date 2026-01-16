# Menor Distância entre Dois Arrays

## Descrição do Problema

João está participando de uma competição de programação onde precisa encontrar a menor distância entre dois números de dois arrays diferentes.

A distância entre dois números é o valor absoluto da diferença entre eles.

### Exemplo

```
Array 1: [-1, 5]
Array 2: [26, 6]
```

Possíveis combinações:
- -1 e 26: distância = |(-1) - 26| = 27
- -1 e 6: distância = |(-1) - 6| = 7
- 5 e 26: distância = |5 - 26| = 21
- 5 e 6: distância = |5 - 6| = 1

A menor distância é 1, entre os números 5 e 6.

## Solução

O algoritmo compara todos os pares possíveis entre os dois arrays e retorna a menor distância encontrada.

### Arrays Utilizados

```cpp
Array 1: -1, 5, 23, 45, 12, 67, 89, 34, 78, 90, 15, 28
Array 2: 26, 6, 14, 33, 88, 92, 11, 47, 25, 66, 71, 19
```

## Passo a Passo do Algoritmo

### 1. Inicialização

```cpp
int minDistance = INT_MAX;
int num1, num2;
```

Definimos a menor distância inicial como o maior valor possível de inteiro.

### 2. Comparação de Todos os Pares

```cpp
for (int i = 0; i < size1; i++) {
    for (int j = 0; j < size2; j++) {
        int distance = abs(array1[i] - array2[j]);
        
        if (distance < minDistance) {
            minDistance = distance;
            num1 = array1[i];
            num2 = array2[j];
        }
    }
}
```

Para cada elemento do array1, comparamos com todos os elementos do array2:
- Calculamos a distância usando valor absoluto
- Se a distância for menor que a menor distância encontrada até agora, atualizamos

### 3. Exemplo de Execução

Comparando alguns pares:

```
5 e 6:  |5 - 6| = 1   ← Menor distância encontrada
12 e 11: |12 - 11| = 1  ← Também é 1
15 e 14: |15 - 14| = 1  ← Também é 1
23 e 25: |23 - 25| = 2
34 e 33: |34 - 33| = 1  ← Também é 1
```

### 4. Resultado

O algoritmo encontra que a menor distância é 1.

Existem múltiplas combinações com distância 1:
- 5 e 6
- 12 e 11
- 15 e 14
- 34 e 33

O programa retorna a primeira combinação encontrada.

## Complexidade

- Tempo: O(n × m), onde n é o tamanho do array1 e m é o tamanho do array2
- Espaço: O(1), apenas variáveis auxiliares

## Como Executar

1. Acesse um compilador online:
   - https://www.onlinegdb.com/online_c++_compiler
   - https://www.programiz.com/cpp-programming/online-compiler/

2. Cole o código

3. Clique em "Run"

4. O programa exibirá a menor distância encontrada

## Conceitos Utilizados

- Arrays em C++
- Loops aninhados (nested loops)
- Função abs() para valor absoluto
- Comparação de valores
- INT_MAX da biblioteca climits
