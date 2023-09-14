#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//•Faça um programa que solicite ao usuário para digitar valores numéricos inteiros positivos. Encerre a entrada de dados quando for digitado a palavra S para sair.
//–Calcule
//a média dos números positivos digitados.
//–Informe
//quantos valores foram digitados.
//–Informe
//qual foi o maior valor.
//–Informe
//qual foi o menor valor.

int main(){

    int num, maior, menor, cont=0;
    char entrada[20];
    float media=0;
    int k=0;
    while(1){
        puts("Digite um valor positivo ou digite s para sair:");
        scanf("%s", &entrada);
        if(entrada[0]== 's') break;
        num = atoi(entrada);
        media=media+num;
        if(num>maior||k==0){maior=num;}
        if(num<menor||k==0){menor=num;}
        k++;
        cont++;
            
    }
    media=media/cont;
    
    printf("====================================\n");
    printf("Maior valor=%d\n", maior);
    printf("Menor valor=%d\n", menor);
    printf("Media total dos valores=%.2f\n", media);
    printf("Quantidade de numeros digitados foram=%d\n", cont);
    printf("====================================\n");

    return 0;
}