/**********************************************************************************************************************
 // FileName:        strings1.cpp
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     CADENAS DE CARACTERES
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

	char A[5];
	char A2[]={"holaa"};
	
	A[0]='h';
	A[1]='o';
	A[2]='l';
	A[3]='a';
   A[4]='\0';
		
  int len=strlen(A);	
	printf("%s\n",A);
	printf("A len= %d\n",len);
	len = sizeof(A);
	printf("A size= %d\n",len);
	
  len=strlen(A2);
  printf("%s\n",A2);
	printf("A2 len= %d\n",len);
	len = sizeof(A2);
	printf("A2 size= %d\n",len);
	
	
	return 0;
}

