#include<iostream>
#include"Video.h"
using namespace std;

Video crearVideo(int, Video *, int);
int eleccionVideo();

int main(){
    int opc, calif, cont = 4;
    //Objetos
    Video *elementos[20]; //Vector de elementos del programa con maximo de 20 elementos
    Video Nuevovid;
     elementos[0]= new Pelicula ("Smile", "Terror", 2000, 130, 10, 0);
     elementos[1]= new Pelicula ("Masacre en Texas", "Terror", 2000, 130, 10, 2);
     elementos[2]= new Pelicula ("El Conjuro", "Terror", 2000, 130, 10, 4);
     elementos[3]= new Serie ("Black Mirror", "Drama", 2010, 120, 10, 24);
     elementos[4]= new Serie ("Breaking Bad", "Drama", 2010, 120, 10, 120);

     opc = eleccionVideo();
     cont++;
     *elementos[cont] = crearVideo(opc, elementos, cont);
    



    return 0;
}

int eleccionVideo(){
    int opc;
    cout<<"Tipo de video a claificar:"<<endl;
    cout<<"1. Video"<<endl;
    cout<<"2. Pelicula"<<endl;
    cout<<"3. Serie"<<endl;
    cout<<"Opcion: "; cin>>opc;

    return opc;
}
Video crearVideo(int opc, Video *elementos[], int cont){
    switch (opc)
    {
    case 1:
        elementos[cont] = new Video();
        break;
    case 2:
        elementos[cont] = new Pelicula();
        break;
    case 3:
        elementos[cont] = new Serie();
    default:
        break;
    }

    return *elementos[cont];
}