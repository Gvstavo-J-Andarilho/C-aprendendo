//switch para saber as propriedades das vitaminas

#include <stdio.h>
#include <locale.h>

int main()
{   setlocale(LC_ALL, "");
    char vitamina;
    printf("Qual vitamina voce quer saber as propriedades? ");
    scanf("%c", &vitamina);

    switch(vitamina){
    case 'a':
    case 'A':
        printf("Apresenta importante papel na vis�o, atua na manuten��o de tecidos epiteliais e imunidade.");
        break;
    case 'd':
    case 'D':
        printf("Participa da absor��o e utiliza��o de dois sais importantes: o c�lcio e o f�sforo.");
        break;
    case 'e':
    case 'E':
        printf("�leos vegetais; nozes; e sementes. Atua como antioxidante. Problemas no sistema nervoso");
        break;
    case 'k':
    case 'K':
        printf("Hortali�as verdes; tamb�m � produzida por bact�rias presentes no intestino. Possui importante papel na coagula��o sangu�nea. Altera��es na coagula��o sangu�nea");
        break;
    default:
        printf("Op��o invalida");}

    return 0;
}
