/**********************************************************************************************************************
 // FileName:        Arreglos2.cpp
 // Program version: Dev-C++ 5.11
 // Company:         TECNM - ITCH
 // Description:     Arreglos y punteros
 // Authors:         ALFREDO CHACON
 // Updated:         03/2021
 //Nota:  			RELACION ENTRE PUNTEROS Y ARREGLOS
****************************************************************************/
#include <stdio.h>

/************************************************
    PROTOTIPOS DE FUNCIONES
************************************************/
/***********FUNCION MAIN*******/
int main(){
	int A[]={2,5,6,8,1};
	int i;
	for(i=0 ; i<5 ;i++){
		printf("Direccion = %d\n",&A[i]);
		printf("Direccion = %d\n",A+i);
		printf("Valor = %d\n",A[i]);
		printf("Valor = %d\n",*(A+i));
	}
	return 0;
}


