# Sistema de Monitoramento de Temperatura

## 1. Identificação

**Nome do aluno:** Julia Rodrigues Bezerra
**Disciplina:** Algoritimos e Pensamento Computacional  
**Professora:** Profa. Karla Sartin  
**Título do projeto:** Sistema de Monitoramento de Temperatura

## 2. Objetivo

O objetivo deste projeto é desenvolver um programa em linguagem C para realizar o monitoramento de temperaturas informadas pelo usuário.

O programa recebe um limite de temperatura, registra várias temperaturas e identifica informações como a maior temperatura, a menor temperatura, a média e a quantidade de temperaturas acima do limite.

O monitoramento é encerrado automaticamente quando são registradas três temperaturas consecutivas acima do limite definido.

## 3. Funcionamento do programa

Primeiro, o usuário informa o limite de temperatura que será utilizado durante o monitoramento.

Depois, o programa solicita as temperaturas uma por uma.

Quando o usuário informa um valor que não é um número, o programa informa que a entrada é inválida e solicita uma nova temperatura.

Cada temperatura válida é utilizada para calcular a quantidade de temperaturas, a soma, a maior temperatura, a menor temperatura e a média.

O programa verifica se cada temperatura está acima do limite definido.

Quando uma temperatura está acima do limite, o contador de temperaturas consecutivas é aumentado.

Quando uma temperatura não está acima do limite, o contador de temperaturas consecutivas é zerado.

O monitoramento termina quando o contador chega a três temperaturas consecutivas acima do limite.

Ao final, o programa apresenta um relatório contendo a quantidade de temperaturas, a maior, a menor, a média, a quantidade de temperaturas acima do limite e a porcentagem de temperaturas acima do limite.

## 4. Estruturas de repetição utilizadas

Foi utilizada a estrutura `while` para repetir a leitura das temperaturas.

O `while` continua executando enquanto o contador de temperaturas consecutivas acima do limite for menor que três.

Também foi utilizado outro `while` dentro da validação da entrada para limpar caracteres inválidos digitados pelo usuário.

A escolha do `while` foi adequada porque a quantidade de temperaturas que serão informadas não é conhecida antecipadamente. O programa precisa continuar recebendo temperaturas até que aconteça a condição de encerramento.

## 5. Como executar

Para compilar o programa, utilizei:
gcc monitoramento.c -o monitoramento
e depois:
./monitoramento


## 6. Testes realizados

### Teste 1 — Validação de entrada inválida

Foi informado um texto no lugar de uma temperatura numérica.

O programa identificou a entrada como inválida, apresentou uma mensagem de erro e solicitou uma nova temperatura.

**Resultado:** teste realizado com sucesso.

### Teste 2 — Temperaturas acima do limite, mas não consecutivas

Foi utilizado o limite de 30°C e foram informadas temperaturas acima e abaixo do limite.

Quando uma temperatura ficou abaixo ou igual ao limite, o contador de temperaturas consecutivas foi zerado.

**Resultado:** o programa não encerrou enquanto não ocorreram três temperaturas acima do limite consecutivamente.

### Teste 3 — Três temperaturas consecutivas acima do limite

Foi utilizado o limite de 30°C e foram informadas as temperaturas 31°C, 32°C e 33°C.

As três temperaturas ficaram acima do limite e foram consecutivas.

**Resultado:** o programa encerrou automaticamente e apresentou o relatório final.

## 7. Evidências

As evidências dos testes realizados estão na pasta `evidencias`.

- `teste01.png` — validação de entrada inválida.
- `teste02.png` — temperaturas acima do limite, mas não consecutivas.
- `teste03.png` — três temperaturas consecutivas acima do limite.

## 8. Reflexão final

Eu escolhi usar o while porque eu não sabia quantas temperaturas seriam digitadas. Então, o programa continua pedindo as temperaturas até acontecer a condição de parar, que é quando aparecem três temperaturas acima do limite seguidas.

Também percebi que é importante verificar a condição antes de continuar o while, porque assim o programa consegue saber quando deve continuar ou parar. Durante os testes, pude ver que quando uma temperatura fica abaixo do limite, a contagem das temperaturas consecutivas volta para zero.
