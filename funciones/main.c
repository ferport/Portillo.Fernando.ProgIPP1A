#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct{
int id;
char procesador[20];
char marca[20];
float precio;
int isEmpty;
}eNotebook;

float aplicarDescuentos(float precio);
int contarCaracteres(char cadena[], char caracter);

int main()
{

float precio;
float precioDescuento;
char cadena[100];
char caracter;
int totalCaracter;

printf("Ingrese un precio: ");
scanf("%f", &precio);

precioDescuento = aplicarDescuentos(precio);

printf("El precio con descuento es de %.2f\n\n", precioDescuento);

printf("-------------------------------------------------\n\n");

printf("Ingrese una cadena de texto: ");
fflush(stdin);
gets(cadena);

printf("Ingrese el caracter que quiere buscar: ");
fflush(stdin);
scanf("%c", &caracter);

totalCaracter = contarCaracteres(cadena, caracter);

printf("El caracter %c se encuentra %d veces en la cadena. \n\n", caracter, totalCaracter);

    return 0;
}


float aplicarDescuentos(float precio){
    float descuento;

    descuento = precio * 0.05;
    precio = precio - descuento;

    return precio;
}


int contarCaracteres(char cadena[], char caracter){
    int cont = 0;
    int largo;

    largo = strlen(cadena);

    for(int i = 0; i < largo; i++){
        if(cadena[i] == caracter){
            cont ++;
        }
    }
    return cont;
}
