/**********************************************************************************************************************
 // FileName:        strings2.cpp
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     CADENAS DE CARACTERES DE TAMANO INDEFINIDO
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  			RELACION ENTRE PUNTEROS Y STRINGS
****************************************************************************/
#include <stdio.h>
#include <string.h>
/************************************************
    PROTOTIPOS DE FUNCIONES
************************************************/
/***********FUNCION MAIN*******/
int main(){
	int a,b;										//Declaracion de variables locales a Main
	printf("Introduce el primer numero:");
	//fflush(stdin);
	scanf("%d",&a);
	printf("Introduce el segundo numero:");
	fflush(stdin);
	scanf("%d",&b);
	char A2[a];
	char A[]={"holaa"};
	//char A2[3];
	A2[0]='h';
	A2[1]='o';
	A2[2]='l';
	A2[3]='a';
	A2[4]='a';
	A2[5]='a';
	int len=strlen(A2);
	printf("A2 len= %d\n",len);
	len = sizeof(A2);
	printf("A2 size= %d\n",len);
	printf("%s\n",A2);
	
	len=strlen(A);
	printf("%d\n",len);
	len = sizeof(A);
	printf("%d\n",len);
	printf("%s\n",A);
	
	
	return 0;
}

