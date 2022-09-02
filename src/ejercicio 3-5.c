/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-5: Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
 int Restar1(int, int);
 int Restar2(void);
 void Restar3(int, int);
 void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int restar1(int numero1, int numero2);
int restar2(void);
void restar3(int numero3, int numero4);
void restar4(void);

int main(void)
{
	setbuf(stdout,NULL);

	int numero1;
	int numero2;
	numero1=10;
	numero2=20;

	int numero3;
	int numero4;
	numero3=200;
	numero4=500;
	int resultado;

	resultado=restar1(numero1, numero2);
	printf("el resultado de restar1 es %d\n",resultado);

	resultado=restar2();
	printf("el resultado de restar2 es %d\n",resultado);


	restar3(numero3, numero4);

	restar4();


	return 0;
}

int restar1(int numero1, int numero2)
{
	int retorno;

		retorno= numero1 - numero2;

	return retorno;
}
int restar2(void)
{
 int retorno;
 int numero1;
 int numero2;
 numero1=-6;
 numero2=-3;

 	 retorno=numero1-numero2;

 return retorno;

}

void restar3(int numero3, int numero4)
{
	int resultado;

	resultado= numero3- numero4;

	printf("el resultado de restar3 da %d \n",resultado);

}

void restar4(void)
{
	int numero5;
	int numero6;
	int resultado;

	printf("ingrese numero5");
	scanf("%d",&numero5);

	printf("ingrese numero6");
	scanf("%d",&numero6);

	resultado= numero5- numero6;

	printf("el resultado de restar4 da %d",resultado);

}

