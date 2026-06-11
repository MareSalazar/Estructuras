#include<stdio.h>
#include<string.h>

struct Direccion {
    char callePrincipal[50];
    int numCasa;
    char calleSecundaria[50];
};
struct alumno{
    char nombre[50];
    int edad;
};

int main(){
    struct alumno a1, a2, a3, an;
    strcpy(a1.nombre, "Juan");
    a1.edad=30;
    printf ("Nombre:%s \n", a1.nombre);
    printf ("Edad: %d", a1.edad);
    return 0; 
}

