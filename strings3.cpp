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
void print(char* c);
void print2(char* c);


/***********FUNCION print*******/
void print(char* c){
	int i=0;
	while(c[i] != '\0'){
		printf("%c",c[i]);
		i++;
	}
	printf("\n");
}
/***********FUNCION print2*******/
void print2(char* c){
	int i=0;
	while(*c != '\0'){
		printf("%c",*c);
		c++;
	}
	printf("\n");
}

/***********FUNCION MAIN*******/
int main(){
	char c[20]="hola";			//Declaracion de variables locales a Main
    char *c2 = c;
	print2(c);
	
	int len=strlen(c);
	printf("c len= %d\n",len);
	len = sizeof(c);
	printf("c size= %d\n",len);
	
	printf("%s\n",c);
	return 0;
}

