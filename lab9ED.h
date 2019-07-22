

typedef struct _tablaHash{
  char palabra[20];
  struct _tablaHash *siguiente;
}THASH[27];

void creatablahash(char *nombre, int tamano){
  tabla = creaTabla();
  int contador = 0;
  FILE *p;
  char c, palabra[20];
  palabra = creaArreglo(palabra);
  p = fopen(nombre, "r");
  while((c = fgetc(p)) != EOF){
    if(c == '\n'){
      contador = 0;
      pos = convertirLetras(palabra[0]);
      THASH[pos] =

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

THASH * creaTabla(){

}

char *vaciarArreglo(char *palabra){
  for(int i; i < 20; i++){
    palabra[i] = '\0';
  }
  return palabra;
}
