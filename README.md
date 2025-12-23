# Jogo da Velha em C 🕹️

Este projeto é uma implementação clássica do **Jogo da Velha** (Tic-Tac-Toe) desenvolvida em **Linguagem C**. 

## 📝 Descrição do Projeto

O sistema permite que dois jogadores humanos se enfrentem em um tabuleiro $3 \times 3$. O programa gerencia toda a lógica de turnos, validação de entradas e condições de encerramento, garantindo que as regras clássicas do jogo sejam respeitadas.

## 🛠️ Tecnologias e Conceitos Utilizados

A implementação explora os pilares da programação estruturada:

* **Matrizes:** Uso de um array bidimensional para representar as posições do tabuleiro.
* **Funções:** Modularização do código para facilitar a manutenção e leitura.
* **Estruturas de Repetição:** Controle de turnos e loops de verificação.
* **Estruturas Condicionais:** Lógica para validar jogadas e determinar o vencedor.

## 🚀 Funcionalidades

- **Interação entre dois jogadores:** Alternância automática entre 'X' e 'O'.
- **Validação de Jogadas:** O sistema impede jogadas em posições já ocupadas ou fora dos limites do tabuleiro.
- **Verificação Automática:** Checagem de vitória (linhas, colunas e diagonais) ou empate (velha) a cada rodada.
- **Interface via Console:** Layout simples e organizado para facilitar a visualização do estado do jogo.

## 🎮 Como Executar

   Utilize um compilador como o GCC:
   ```bash
   gcc jogo_da_velha.c -o jogo_da_velha