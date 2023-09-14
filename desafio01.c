#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

//if(scanf("%c", &sair)==1){
//            if(sair=='s'){
//               break;}