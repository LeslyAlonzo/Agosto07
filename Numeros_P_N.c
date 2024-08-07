// Codigo hecho por Johan Tzul
#include <stdio.h>
int main(){
    int numero;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("%d es un numero negativo\n", numero);
    }else if (numero >= 1)
    {
        printf("%d es un numero positivo\n", numero);
    }else {
        printf("%d el numero es cero \n", numero);
    }
    
    return 0;
}
// Este es un codigo simple que calcula los numeros que son positivos y negativos