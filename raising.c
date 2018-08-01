#include <stdio.h>

int main()
{
    int a, b,resultado,contadorMulti,guarda, contador,QtdDeSomas;
    scanf("%d", &a);
    scanf("%d", &b);

    contadorMulti = b;
    guarda = a;
    QtdDeSomas = a;
    
    while(contadorMulti - 1 > 0){

        contador=0;    
        while(contador < QtdDeSomas-1){
            a = a + guarda;
            contador++;
        }

        guarda = a;
        contadorMulti--;
    }
    resultado = a;
    
    printf("%d\n", resultado);
    return 0;
}
