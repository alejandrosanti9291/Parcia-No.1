/*
*	Programa: Matriz fibonacci
*	Fecha: 30/08/2017
*	Elaborado por: Alejandro Santibanez y Steven Florez
*/

//Librerias
#include <stdio.h>
#include <stdlib.h>

void fibonacci();

//Funcion principal
int main(){
	int filas, columnas,x = 0,y = 1, i;
	int matriz[100][100];
	int *pmatriz = &matriz[0][0];
	
	printf("Ingrese el numero de filas: ");
	scanf("%d", &filas);
	printf("Ingrese el numero de columnas: ");
	scanf("%d", &columnas);
	
	for(int f = 0; f < filas; f++){
		for(int c = 0; c < columnas; c++){
			if(f == 0 || f == 1 ){	
				*(pmatriz + c + f * columnas) = f;
			}else{
				*(pmatriz + c + f * columnas) = x + y;
				x = y;
				y = *(pmatriz + c + f * columnas);
			}	
		}		
	}
	
	for(int f = 0; f < filas; f++){
		for(int c = 0; c < columnas; c++){
			printf("%d ", *(pmatriz + c + f * columnas));		
		}
		printf("\n");	
	}
	
	return 0;
}


