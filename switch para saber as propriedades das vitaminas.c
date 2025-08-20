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
        printf("Apresenta importante papel na visão, atua na manutenção de tecidos epiteliais e imunidade.");
        break;
    case 'd':
    case 'D':
        printf("Participa da absorção e utilização de dois sais importantes: o cálcio e o fósforo.");
        break;
    case 'e':
    case 'E':
        printf("Óleos vegetais; nozes; e sementes. Atua como antioxidante. Problemas no sistema nervoso");
        break;
    case 'k':
    case 'K':
        printf("Hortaliças verdes; também é produzida por bactérias presentes no intestino. Possui importante papel na coagulação sanguínea. Alterações na coagulação sanguínea");
        break;
    default:
        printf("Opção invalida");}

    return 0;
}
