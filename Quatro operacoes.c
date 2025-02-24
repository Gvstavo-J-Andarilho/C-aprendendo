#include <stdio.h>
#include <stdlib.h>

//Quatro operações
void main()
    {
        int a = 5, b = 3;
        
        printf("Soma de %d e %d é = %d \n", a, b, a + b);
        printf("Subtração de %d e %d é = %d \n", a, b, a - b);
        printf("Multiplicacão %d e %d é = %d \n", a, b, a * b);
        printf("Divisão de %d e %d é = %d \n", a, b, a / b);
        printf("O resto da divisão de %d e %d é = %d \n", a, b, a % b);
        printf("Soma de %d e %d é = %d \n", a, b, a + b);
        printf("O valor absoluto é %d e %d é = %d \n", a, b, abs(a + b));
        system("pause");
    }