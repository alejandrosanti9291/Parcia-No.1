#include<stdlib.h>
#include<stdio.h>

/* Primer Parcial
*  Fecha: 30/02/2017
*  Presentado por: Steven Florez y Alejandro Santiba?ez
*  Primer Punto	
*/
struct productos{
	float cant;
	float precio;
	float importe;
}producto_p;

struct proveedores{
	char nombre[30];
	char tel[10];
	char dir[20];
	productos producto_p;
}p;

int main () {
	proveedores *pprov = &p;
	productos *pprod = &producto_p;
	int cant_prov;
	int vproductos[100];
	int *pvp = vproductos;
	
	printf("Ingrese el numero de proveedores: ");
	scanf("%d", &cant_prov);
	
	for(int i=0; i<cant_prov; i++){
		fflush(stdin);
		printf("Nombre del proveedor: ");
		scanf("%s", &pprov->nombre);
		printf("Telefono del proveedor: ");
		scanf("%s", &pprov->tel);
		printf("Direccion: ");
		scanf("%s", &pprov->dir);
		printf("Cantidad vendida: ");
		scanf("%d", &pprod->cant);
		printf("Ingrese el precio unitario: ");
		scanf("%f", &pprod->precio);
		//*pprod->importe= *pprod->cant * *pprod->precio;
		fflush(stdin);
		printf("\n");
	}
	
	return 0;
}
