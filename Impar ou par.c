//numero impar ou par?
#include <stdio.h>

main(){
    int x;

    printf("Digite um numero ");
    scanf("%d", &x);
    if(x%2==0){
    printf("Eh par");}else{printf("Eh impar!");}
}
