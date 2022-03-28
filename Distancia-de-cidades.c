#include <stdio.h>

int main()
{

    double primeiroQuilometro = 0.0;
    double segundoQuilometro = 1.0;
    double espaco = 0.0;
    double velocidade = 20.0;
    double tempo = 0.0;
    int contador = 0;
  
    while ( contador ==! 1)
    {
        printf("Digite o primeiro quilometro em ordem crescente");
        scanf("%lf", &primeiroQuilometro);
        printf("Digite o segudno Quilometro em ordem crescente");
        scanf("%lf", &segundoQuilometro);
       
       if (primeiroQuilometro == segundoQuilometro ){
           contador =1;
       }
       if (primeiroQuilometro > segundoQuilometro){
           espaco = primeiroQuilometro-segundoQuilometro;

       }
       espaco = segundoQuilometro-primeiroQuilometro;

       while(velocidade <= 80){
           tempo = espaco/velocidade;

            printf("A distancia entre a cidade %.2f e a cidade %.2f/n", primeiroQuilometro, segundoQuilometro);
            printf( " A velocidade de %.2f Km/h durou %.2f", velocidade, tempo);

           /* printf("A distancia entre a cidade %.2f", primeiroQuilometro);
           printf( "e a cidade %.2f", segundoQuilometro);
           printf( " A velocidade de %.2f", velocidade);
           printf("Km/h durou ", tempo); */

           velocidade = velocidade + 10; 
       }

    }



   
}