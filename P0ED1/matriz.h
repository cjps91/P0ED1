#ifndef MATRIZ_H_INCLUDED
#define MATRIZ_H_INCLUDED

#include "quebrado.h"
#include "complejo.h"

#define M 5
typedef quebrado tipoelemento;
class matriz {
tipoelemento celda[M][M];
int fila,col;
public:
matriz(int f=0, int c=0);
int getfila() { return fila; }
int getcol() { return col; }
bool operator==(matriz m);
matriz operator*(matriz m);
matriz operator+(matriz m);
matriz operator-(matriz m);
matriz operator-();
void mostrar();
void cargar(); //carga una matriz desde teclado
void cargar(char cad[]);//carga una matriz desde fichero
};

#endif // MATRIZ_H_INCLUDED
