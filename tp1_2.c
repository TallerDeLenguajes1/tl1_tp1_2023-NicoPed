#include <stdio.h>
#include <stdlib.h>

int cuadrado(int num);

void cuadradoVoid(int *num);

void mostrar(int vble);

void invertir( char *a, char *b);

void orden(int *a, int *b);

int main(){

    int numero = 7, cuadra;
    printf("\nIngrese un número: ");
    scanf("%d",&numero);
    printf("\n ----------- Punto a -----------");
    cuadra = cuadrado(numero);
    printf("\nCuadrado del numero devuelto: %d", cuadra);

    printf("\n ----------- Punto b -----------");
    cuadradoVoid(&numero);
    printf("\nCuadrado del void: %d ",numero);

    printf("\n ----------- Punto c -----------");
    mostrar(numero);

    printf("\n ----------- Punto d -----------");
    char a = 'N' , b = 'P';
    fflush(stdin);
    printf("\nIngrese un caracter: ");
    scanf("%c",&a);
    fflush(stdin);
    printf("\nIngrese otro caracter: ");
    scanf("%c",&b);
    printf("\nOriginal: %c ; %c", a, b);
    invertir(&a, &b);
    printf("\nInvertido: %c ; %c", a, b);

    printf("\n ----------- Punto e -----------");
    printf("\nIngrese dos numeros: ");
    int num1 = 13, num2 = 7;
    scanf("%d %d",&num1,&num2);
    orden (&num1, &num2);
    printf("\nMenor: %d ; Mayor: %d",num1,num2);
    return 0;
}

int cuadrado(int num){

    return num*num;
}

void cuadradoVoid(int *num){
    (*num) = (*num) * (*num);
}

void mostrar(int vble){
    printf("\nDirección de la vble: %d\nContenido: %d", &vble, vble);
}

void invertir(char *a, char *b){
    char aux;
    aux = *a;
    (*a) = (*b);
    *b = aux;
}

void orden(int *a, int *b){
    int aux;
    if (*b < *a)
    {
        aux = *a;  
        *a = *b;
        *b = aux;
    }
    //si hubiera estado mejor hacerlo con la función de invertir pero por hacerme el interesante lo hice de Char y no se puede usar aquí :)
}
