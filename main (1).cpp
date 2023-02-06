#include <iostream>

using namespace std;

//variavel global 
#define TAMANHO 10

//inicia o programa
int main() {
  //define o array (vetor) com o tamanho 10
  //e ja inicia os valores de cada posicao
  int v[TAMANHO] = {10, 5, 8, 2, 6, 4, 3, 9, 7, 1};

  //variavel auxiliar para organizar o vetor
  int aux;

  //variavel booleana
  bool passou = false;
  bool stop = false;

  //contador de estágios
  int contador = 0;

  //loop para ordenação
  while(stop == false){

    //estágio atual
    cout << "Estágio " << contador <<": \n";
    //imprime os valores no estagio atual
    for(int j = 0; j < TAMANHO; j++){
      cout << v[j] << ", ";
    }
    cout << "\n\n";
    
    //incrementa o contador
    contador ++;
    
    //aqui de fato ocorre a ordenação
    for(int i = 0; i < TAMANHO-1; i++){

      //verifica se o valor atual é maior que o proximo
      if (v[i] > v[i+1]){
        //caso seja maior, inverte as posições atravez do aux
        aux = v[i];
        v[i] = v[i+1];
        v[i+1] = aux; 

        //verifica que houve ordenação nesse estágio
        passou = true;
      }
    }

    //aqui é verificado se precisa ou não de mais um estágio
    if (passou == false)
      //caso tenha ocorrido nenhuma ordenação significa
      //que o vetor já está ordenado e o programa pode encerrar
      stop = true;

    else
      //caso tenha ocorrido ordenação, a variavel passou
      //é definida para false e volta pro loop
      passou = false;
  }
  return 0;
}