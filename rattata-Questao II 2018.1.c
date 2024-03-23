#include <stdio.h>

main(){
    int ataque, buff, ataquedois, vitoria;

    printf("Partida iniciou! Rattata tem o primeiro turno usando: Focus Energy\n");
    printf("Digite um numero para teu ataque:\n");
    scanf("%d %d %d", &ataque, &buff, &ataquedois);
vitoria=ataque+buff+ataquedois;
    if(vitoria%2==0){
        printf("vitoria do Jigglypuff");
    }else{
        printf("vitoria do Rattata");
    }
}
