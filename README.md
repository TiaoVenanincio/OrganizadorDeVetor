# OrganizadorDeVetor
Algoritmo feito durante a disciplina de Algoritmos e Estrutura de Dados 1, em 2021. O objetivo foi implementar um algoritmo que organiza um vetor de inteiros em ordem crescente.

O algoritmo pega um vetor de tamanho 10 e ordena em ordem crescente em estágios, lendo o vetor várias vezes e analisando duas posições de cada vez.
Caso o numero da posição analisada é maior que o próximo, é feita a troca. Assim, percorre o vetor até que esteja todo em ordem crescente.

Pela análise feita na época, o pior caso seria o menor número do vetor estar na ultima posição. É nesse caso onde são necessários mais estágios de ordenação.
Considerando o estágio 0 o momento em que o vetor é lido pela primeira vez e os próximos estágios representam o vetor após cada estágio de ordenação (cada vez
que é lido e ordenado), pode-se apotar que no pior caso leva 9 estágios, desconsiderando o estágio 0.
