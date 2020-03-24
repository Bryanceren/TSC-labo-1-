#include <iostream>
#include<stdlib.h>
#include "main_tools.h"
#include "display_tools.h"

int main(void){
  

    Matrix matricita;
    Matrix respuesta;
    
    zeroes(matricita,3);
    //fila 1
    matricita.at(0).at(0)=2;
    matricita.at(0).at(1)=2;
    matricita.at(0).at(2)=3;
    //fila 2
    matricita.at(1).at(0)=4;
    matricita.at(1).at(1)=5;
    matricita.at(1).at(2)=6;
    //fila 3
    matricita.at(2).at(0)=7;
    matricita.at(2).at(1)=8;
    matricita.at(2).at(2)=9;

    showMatrix(matricita);

    inverse(matricita,respuesta);
    printf("\nMatriz inversa\n");
    showMatrix(respuesta);
    

    return 0;    

}