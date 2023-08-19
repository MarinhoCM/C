#include <stdio.h>
int main(){
    float x=0, y=0, resul=0;
    int op=0;
    do{
        printf("\n\t1 - SOMA\n\t2 - SUBTRACAO\n\t3 - MULTIPLICACAO\n\t4 - DIVISAO\n\t---> ");
        scanf("%i", &op);
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &x);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &y);
        switch (op){
            case 1:
                resul = x + y;
                break;
            case 2:
                resul = x - y;
                break;
            case 3:
                resul = x * y;
                break;
            case 4:
                if (y != 0 || x != 0){
                    resul = x / y;
                    break;
                } else {
                    printf("\nNão é possivel realizar uma divisão por Zero!");
                    break;
                };
            default:
                printf("\nOpção invalida!\n");
                break;
        }
        printf("\n\tO resultado e: %0.2f\n", resul);
        printf("\n Digite 1 para continuar: ");
        scanf("%i", &op);
    }while (op==1);
    return 0;
}
