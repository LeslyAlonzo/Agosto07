#include <stdio.h>
int main (){
    int n1;
    int n2;
    int suma,resta, multiplicacion,division;
    printf("Ingrese primer numero:");
    scanf("d%",&n1);
    printf("Ingrese segundo numero:");
    scanf("d%",&n2);
    suma=n1+n2;
    resta=n1-n2;
    multiplicacion=n1*n2;
    division=n1/n2;
    printf("El resultado de la suma es n\"",suma);
    printf("El resultado de la resta es n\"",resta);
    printf("El resultado de la multiplicacion es n\"",multiplicacion);
    printf("El resultado de la divison es n\"",division);
    return 0;
    



}