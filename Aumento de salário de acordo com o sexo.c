/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    double salarioAntigo, salarioAtual, resultado;
    int sexo;
    printf("Digite seu antigo salário para o aumento:");
    scanf("%lf",&salarioAntigo);
    printf("Digite 0 para Masculino e 1 para feminino:");
    scanf("%d",&sexo);
  
  
 
    if (sexo==1){
    resultado=(1.10*salarioAntigo);
     }else{
    resultado=(1.09*salarioAntigo);
    };
    
    printf("%s" "%f","Seu salário atual é de: ", resultado);

    return 0;
}
