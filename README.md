# MatrizViraProxPrimo
Um
programa que, dado o tamanho de uma matriz e seus valores, que
nunca são iguais, transforma seus valores no próximo número primo
maior que o próprio valor se o valor é positivo e menor que o próprio
valor se o valor é negativo. Caso o valor já seja primo ou se o primo
transformado extrapolar os intervalos de entrada possível, o programa
não deve fazer nenhuma mudança.
a) O programa tem a função int verificaPrimo(int n) que
retorna 1 se o número n passado como parâmetro for primo ou 0 caso
contrário.,
b) O programa tem a função int transformaPrimo(int n)
que transforma o número n passado como parâmetro no próximo maior
ou menor primo retornando o número transformado.
c) O programa tem a função int verificaNegativo(int n) que
retorna 1 se o número for negativo ou 0 caso contrário.
Entrada: uma linha com os valores L (1 <= L <= 100) e C (1 <= C <=
100), representando o tamanho da matriz em linhas e colunas,
respectivamente. Depois, L linhas com C valores V (-32000 <= V <=
32000) cada.
