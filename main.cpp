//Iker Casillas | A01641047

#include<iostream>
#include"Video.h"
#include<stdlib.h>
using namespace std;

//PROTOTIPOS DE FUNCION
int eleccionVideo();
void filtrarPelis(int, Video *elementos[], int);
void filtrarSeries(int, Video *elementos[], int);
Video crearVideo(int, Video *elementos[], int);
void consultarVideos(Video *elementos[], int cont);

//Funcion principal
int main(){
    int opc = 0, calif = 0, cont = 4;
    //Objetos
    Video *elementos[20]; //Vector de elementos del programa con maximo de 20 elementos

    //Objetos predefinidos
     elementos[0]= new Pelicula ("Smile", "Terror", 2022, 115, 10, 0);
     elementos[1]= new Pelicula ("Masacre en Texas", "Terror", 1974, 83, 8, 2);
     elementos[2]= new Pelicula ("El Conjuro", "Terror", 2013, 112, 9, 4);
     elementos[3]= new Serie ("Black Mirror", "Drama", 2010, 1200, 9, 22);
     elementos[4]= new Serie ("Breaking Bad", "Drama", 2008, 1200, 10, 62);
    
     
    
    //Menu de programa
    do{
        
        cout<<"\n\n.......... Menu ...........\n\n";
        cout<<"1. Consultar videos disponibles.";
        cout<<"\n2. Calificar un video.";
        cout<<"\n3. Filtrar peliculas por calificacion.";
        cout<<"\n4. Filtrar series por calificacion.";
        cout<<"\n5. Salir.";
        cout<<"\nIngresa una opcion: "; cin>>opc;

        switch(opc){
            case 1: //Consultar videos
                consultarVideos(elementos, cont);
                break;

            case 2: //Calificar video
                opc = eleccionVideo();
                cont++;
                *elementos[cont] = crearVideo(opc, elementos, cont);
                elementos[cont]->pedirDatos();
                break;

            case 3: //Filtrar peliculas
                cout<<"Mostrar peliculas con calificacion mayor a: "; cin>>calif;
                filtrarPelis(calif, elementos, cont);
                break;

            case 4: //Filtrar series
                cout<<"Mostrar series con calificacion mayor a: "; cin>>calif;
                filtrarSeries(calif, elementos, cont);
            default:
                break;
        }
    }while(opc != 5);
    


    return 0;
}

//DEFINICION DE FUNCIONES

void consultarVideos(Video *elementos[], int cont){
    for(int i=0; i<cont+1; i++){
        elementos[i]->muestraDatos();
        cout<<"\n";
        system("pause");
    }
}

int eleccionVideo(){
    int opc;
    cout<<"\nTipo de video a calificar:"<<endl;
    cout<<"1. Video"<<endl;
    cout<<"2. Pelicula"<<endl;
    cout<<"3. Serie"<<endl;
    cout<<"Opcion: "; cin>>opc;
    cout<<"\n";

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
        elementos[cont]->setTipoVideo("Pelicula");
        break;
    case 3:
        elementos[cont] = new Serie();
        elementos[cont]->setTipoVideo("Serie");
    default:
        break;
    }

    return *elementos[cont];
}


void filtrarPelis(int calif, Video *elementos[], int cont){
    for(int i=0; i<cont+1; i++){
        if(elementos[i]->getTipoVideo() == "Pelicula" && elementos[i]->getCalif() > calif){
            elementos[i]->muestraDatos();
            cout<<"\n";
            system("pause");
        }
        
        
    }
}

void filtrarSeries(int calif, Video *elementos[], int cont){
    for(int i=0; i<cont+1; i++){
        if(elementos[i]->getTipoVideo() == "Serie" && elementos[i]->getCalif() > calif){
            elementos[i]->muestraDatos();
            cout<<"\n";
            system("pause");
        }
        
        
    }
}
