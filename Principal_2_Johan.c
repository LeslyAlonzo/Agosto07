// Codigo hecho por Johan Tzul
#include <stdio.h>
int main(){
    int numero;
    
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("%d es un numero par\n", numero);
    } else {
        printf("%d es un numero impar\n", numero);
    }
    
    return 0;
}
// Este es un codigo simple que calcula los numeros que son pares y los que son impares en C