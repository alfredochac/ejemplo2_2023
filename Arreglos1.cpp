/**********************************************************************************************************************
 // FileName:        Arreglos1.cpp
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     Arreglos y punteros
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  			RELACION ENTRE PUNTEROS Y ARREGLOS
****************************************************************************/
#include <stdio.h>
#define GIT 1

/************************************************
    PROTOTIPOS DE FUNCIONES
************************************************/
/***********FUNCION MAIN*******/
int main(){
	int A[]={2,5,6,8,1};
	printf("%d\n",A);
	printf("%d\n",&A[0]);
	printf("%d\n",A[0]);
	printf("%d\n",*A);
	return 0;
}

