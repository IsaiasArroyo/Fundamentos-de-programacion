//Codigo parap calcular tiempo de certificacion
//Isaias Arroyo
//19 de agosto 2022
//V1

//Bibliotecas
#include <stdio.h>


int main(void) {
  //Se declaran las variables que se utilizaran en la operacion
  int Tcert = 60;
  int Tdedicado;
  float Trequerido;
  
  //Se ingresan los valores que se van a utilizar en el programa
  printf("Ingresa el tiempo a estudiar en minutos\n");
  scanf("%d", &Tdedicado); //se guarda el valor ingresado 

  //Realiza la operacion con los valores previamente ingresados
  Trequerido = Tcert*60/Tdedicado;

  //Muestra el resultado de acuerdo a la operacion 
  printf("Se requieren %f dias para obtener el certificado", Trequerido);
  
  return 0;
}