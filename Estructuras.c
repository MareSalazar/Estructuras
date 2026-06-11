#include<stdio.h>
#include<string.h>

typedef struct  {
    char callePrincipal[50];
    int numCasa;
    char calleSecundaria[50];
}Direccion;
typedef struct {
    char nombre[50];
    int edad;
    Direccion direccion;
} Alumno;

void mostrarAlumno(Alumno *a);


int main(){
    Alumno p1;
    strcpy(p1.nombre, "Eddy\n");
    strcpy(p1.direccion.callePrincipal, "Av.Prensa" );
    p1.direccion.numCasa=123;
    strcpy(p1.direccion.calleSecundaria, "Florida");
    //a1.edad=30;
    printf ("Nombre:%s \n", p1.nombre);
    printf ("Direccion: %s", p1.direccion.callePrincipal);
    printf (" %d", p1.direccion.numCasa);
    printf (" %s", p1.direccion.calleSecundaria);
    mostrarAlumno(&p1);

    return 0; 
}
void mostrarAlumno(Alumno *a){
    printf ("Nombre:%s \n", a->nombre);
    printf ("Direccion: %s", a->direccion.callePrincipal);
    printf (" %d", a->direccion.numCasa);
    printf (" %s", a->direccion.calleSecundaria);

}

