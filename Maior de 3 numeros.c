//maior de 3 números

#include <stdio.h>

main(){
    int a, b,c, maior;
    printf("Digite 3 numeros com espaço entre eles\n");
    scanf("%d %d %d", &a, &b, &c);

    maior=a;
    if(b>a){
    maior=b;}
    if(c>b){
    maior=c;}
    printf("O maior eh: %d", maior);

    return 0;}
