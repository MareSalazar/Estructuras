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
    struct Direccion direccion;
};

int main(){
    struct alumno p1;
    strcpy(p1.nombre, "Eddy\n");
    strcpy(p1.direccion.callePrincipal, "Av.Prensa" );
    p1.direccion.numCasa=123;
    strcpy(p1.direccion.calleSecundaria, "Florida");
    //a1.edad=30;
    printf ("Nombre:%s \n", p1.nombre);
    printf ("Direccion: %s", p1.direccion.callePrincipal);
    printf (" %d", p1.direccion.numCasa);
    printf (" %s", p1.direccion.calleSecundaria);


    return 0; 
}

