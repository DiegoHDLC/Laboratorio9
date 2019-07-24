#include<stdlib.h>
#include<string.h>

typedef struct _tablaHash{
  char palabra[20];
  struct _tablaHash *siguiente;
}thash[27];

char *vaciarArreglo(char*);
void creaTablaHash(char *, int);
int convertirLetras(char);
thash *creaTabla();


void creaTablahash(char *nombre, int tamano){
  struct _tablaHash thash[27];
  //tabla = creaTabla();
  int contador = 0,pos = 0;
  FILE *p;
  char c, palabra[20];
  memset(palabra,'\0',20);
  vaciarArreglo(palabra);
  p = fopen(nombre, "r");
  while((c = fgetc(p)) != EOF){
    if(c == '\n'){
      contador = 0;
      pos = convertirLetras(palabra[0]);
      strcpy(thash[pos].palabra, palabra);
    }
    else{
    palabra[contador] = c;
    contador++;
    }
  }
}

int convertirLetras(char letra){
  char str[2] = {letra};
  int num = strtol(str, NULL, 36) - 10;
  return num;
}

/*THASH * creaTabla(){
  int i;
  while(i<27){
    THASH[i] *tabla = malloc(sizeof(THASH));
    i++;
  }
  return tabla;
}*/

char *vaciarArreglo(char *palabra){
  for(int i; i < 20; i++){
    palabra[i] = '\0';
  }
}
