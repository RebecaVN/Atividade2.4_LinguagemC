//4) Criar um algoritmo que mostre o menu de op��es a seguir, receba a op��o do usu�rio e os dados necess�rios para executar cada opera��o.         
//Menu de op��es: 
//1- Somar dois n�meros. 
//2- Multiplicar dois n�meros 
//3- Subtrair dois n�meros 
//4- Dividir dois n�meros 

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu de opcoes:\n");
    printf("1- Somar dois numeros.\n");
    printf("2- Multiplicar dois numeros.\n");
    printf("3- Subtrair dois numeros.\n");
    printf("4- Dividir dois numeros.\n");

    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 + num2;
            printf("O resultado da soma eh: %.2f", resultado);
            break;
        case 2:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 * num2;
            printf("O resultado da multiplicacao eh: %.2f", resultado);
            break;
        case 3:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            resultado = num1 - num2;
            printf("O resultado da subtracao eh: %.2f", resultado);
            break;
        case 4:
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("O resultado da divisao eh: %.2f", resultado);
            } else {
                printf("Nao eh possivel dividir por zero.");
            }
            break;
        default:
            printf("Opcao invalida.");
            break;
    }

    return 0;
}

