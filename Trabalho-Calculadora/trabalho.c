#include <stdio.h>
#include <stdlib.h>
    float verificar(float n2) {
    if(n2==0){
        printf("Erro, divisão por 0\n");
        return 1;
    } else{
        return 0;
    }
    }
    float soma(float n1, float n2) {
        printf("%.2f", n1+n2);
        return 0;
    }

    float subtracao(float n1, float n2) {
        printf("%.2f", n1-n2);
        return 0;
    }

    float divisao(float n1, float n2) {
        float a;
        a = verificar(n2);
        if(a==1){
            return 0;
        } else{
            printf("%.2f", n1/n2);
        }
        return 0;
    }

    float multiplicacao(float n1, float n2) {
        printf("%.2f", n1*n2);
        return 0;
    }
    

    int main () {
        float  n1, n2,operacao;
        int op;
        do{
            printf("\nBem vindo a calculadora, informe o primeiro numero\n");
            scanf("%f", &n1);
            printf("Informe o segundo numero\n");
            scanf("%f", &n2);
            printf("Escolha a operação que deseja realizar\n");
            printf("1.Soma\n");
            printf("2.Subtração\n");
            printf("3.Multiplicação\n");
            printf("4.Divisão\n");
            printf("5.Sair\n");
    
            scanf("%d", &op);
    
            switch (op)
            {
            case 1:
            operacao = soma(n1, n2);
                break;
            case 2:
            operacao = subtracao(n1, n2);
                break;
            case 3:
            operacao = multiplicacao(n1, n2);
                break;
            case 4:
            operacao = divisao(n1, n2);
                break;
            default:
            printf("Opção inválida");
                break;
            }
            
        } while (op < 5);
    }