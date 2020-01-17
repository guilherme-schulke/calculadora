#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){

setlocale(LC_ALL, "portuguese");

char escolha;
float numero1, numero2, adicao, subtracao, divisao, multiplicacao;
label:
printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("°\n°\t bem-vindo a calculadora         °\n");
printf("°\n°\t tecle 1 para Adição             °\n");
printf("°\n°\t tecle 2 para Subtração          °\n");
printf("°\n°\t tecle 3 para divisão            °\n");
printf("°\n°\t tecle 4 para Multiplicação      °\n");
printf("°\n°\t tecle 0 para sair               °\n");
printf("\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
printf("\n\nescolha:\t\n"); scanf("%c", &escolha);

system("cls");


switch(escolha)
{

case '1':
    printf("\nescolha um numero\n");
    scanf("%f", &numero1);
    printf("\nescolha outro numero\n");
    scanf("%f", &numero2);

    adicao=numero1+numero2;

    system("cls");

    printf("o resultado da soma é: %1.f", adicao);

 break;

case '2':

    printf("\nescolha um numero\n");
    scanf("%f", &numero1);
    printf("\nescolha outro numero\n");
    scanf("%f", &numero2);

    subtracao=numero1-numero2;

    system("cls");

    printf("o resultado da subtração é: %1.f", subtracao);

;break;

case '3':

    printf("\nescolha um numero\n");
    scanf("%f", &numero1);
    printf("\nescolha outro numero\n");
    scanf("%f", &numero2);

    divisao=numero1/numero2;

    system("cls");

    printf("o resultado da divisão é: %1.f", divisao);

;break;

case '4':

    printf("\nescolha um numero\n");
    scanf("%f", &numero1);
    printf("\nescolha outro numero\n");
    scanf("%f", &numero2);

    multiplicacao=numero1*numero2;

    system("cls");

    printf("o resultado da multiplicação é: %1.f", multiplicacao);

;break;

case '0': exit(0); break;

default:printf("\nSYNTAX ERROR\n"); system("pause"); system("cls"); goto label;
}



    system("pause>nul");
    return 0;
}
