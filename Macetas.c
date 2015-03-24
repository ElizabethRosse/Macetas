#include <stdio.h>

/*
  UNAM, Facultad de Ciencias.
  Modelado y programación
  Muñiz Rivas Elizabeth
 */

int main(){
  int i = 0;
  char *cadena = (char*)malloc(sizeof(char)*1000);
  char *salida = (char*)malloc(sizeof(char)*1000);
  
  printf("Escribe la secuencia: ");
  scanf("%s", cadena);

  //la lampara quedará lo más a la derecha posible
  while (cadena[i] == 'X' || cadena[i] == '_'){
    if (cadena[i] == '_')
      salida[i] = '.';      
    else if (cadena[i] == 'X'){
      salida[i] = '.';
      salida[i+1] = 'L';
      if(cadena[i+2] != NULL)
	salida[i+2] = '.';
      i +=2;
    }
    if(cadena[i] != 'X' && cadena[i] != '_') // marcamos el final de la cadena
      salida[i] = '\0';
    else
      i += 1;
  }
  
  printf("resultado:  \n%s\n", salida);
  printf("%s\n", cadena);
  return 0;
}
