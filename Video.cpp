//Iker Casillas | A01641047

#include<iostream>
#include"Video.h"
using namespace std;


//Constructor 1
Video::Video(string _nombreVideo, string _genero, int _year, int _duracion, int _calificacion){
    tipoVideo = "Video";
    nombreVideo = _nombreVideo;
    genero = _genero;
    year = _year;
    duracion = _duracion;
    calificacion = _calificacion;
}

//Constructor 2
Video::Video(string _nombreVideo, string _genero, int _year, int _duracion){
    tipoVideo = "Video";
    nombreVideo = _nombreVideo;
    genero = _genero;
    year = _year;
    duracion = _duracion;
}

//Constructor 3
Video::Video(){
    tipoVideo = "Video";
}

//Setters
void Video::setCalif(int _calificacion){
    calificacion = _calificacion;
}

void Video::setNombre(string _nombreVideo){
    nombreVideo = _nombreVideo;
}

void Video::setGenero(string _genero){
    genero = _genero;
}

void Video::setYear(int _year){
    year = _year;
}

void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

void Video::setTipoVideo(string _tipo){
    tipoVideo = _tipo;
}

//Getters
string Video::getNombre(){
    return nombreVideo;
}

string Video::getTipoVideo(){
    return tipoVideo;
}

int Video::getCalif(){
    return calificacion;
}

//Metodos Video
void Video::calificaVideo(int _calificacion){
    calificacion = _calificacion;
}

void Video::pedirDatos(){
    cin.ignore();
    cout<<"\nNombre: "; cin>>nombreVideo;
    cout<<"\nGenero: "; cin>>genero;
    cout<<"\nYear: "; cin>>year;
    cout<<"\nDuracion: "; cin>>duracion;
    do{
        cout<<"\nCalificacion (0-10): "; cin>>calificacion;
        
    }while(calificacion>10 || calificacion<0);
    
}

void Video::muestraDatos(){
    cout<<"\n\n----Mostrando datos---- \n";
    cout<<"\nNombre: "<<nombreVideo;
    cout<<"\nGenero: "<<genero;
    cout<<"\nYear: "<<year;
    cout<<"\nDuracion: "<<duracion;
    cout<<"\nCalificacion: ";
    if(calificacion>10 || calificacion<0){
        cout<<"No definida"<<endl;
    }
    else{
        cout<<calificacion<<endl;
    }
    

}



//Constructores
Pelicula::Pelicula(string _nombreVideo, string _genero, int _year, int _duracion, int _calificacion, int _nominaciones): Video(_nombreVideo, _genero, _year, _duracion, _calificacion){
    tipoVideo = "Pelicula";
    nominaciones = _nominaciones;
}

Pelicula::Pelicula(string _nombreVideo, string _genero, int _year, int _duracion, int _nominaciones): Video(_nombreVideo, _genero, _year, _duracion){
    tipoVideo = "Pelicula";
    nominaciones = _nominaciones;
}

Pelicula::Pelicula(){
    tipoVideo = "Pelicula";
}

//Metodos Pelicula

void Pelicula::muestraDatos(){ //Polimorfismo
    Video::muestraDatos();
    cout<<"Nominaciones: "<<nominaciones<<endl;
}

void Pelicula::pedirDatos(){ //Polimorfismo
    Video::pedirDatos();
    cout<<"\nNominaciones: "; cin>>nominaciones;
    
}

//
//Constructores
Serie::Serie(string _nombreVideo, string _genero, int _year, int _duracion, int _calificacion, int _cantEpisodios): Video(_nombreVideo, _genero, _year, _duracion, _calificacion){
    tipoVideo= "Serie";
    cantEpisodios = _cantEpisodios;
}

Serie::Serie(string _nombreVideo, string _genero, int _year, int _duracion, int _cantEpisodios): Video(_nombreVideo, _genero, _year, _duracion){
    tipoVideo= "Serie";
    cantEpisodios = _cantEpisodios;
}

Serie::Serie(){
    tipoVideo= "Serie";
}

//Metodos Serie
void Serie::pedirDatos(){ //Polimorfismo
    Video::pedirDatos();
    cout<<"\nCantidad de episodios: "; cin>>cantEpisodios;
}

void Serie::muestraDatos(){ //Polimorfismo
    Video::muestraDatos();
    cout<<"Cantidad de episodios: "<<cantEpisodios<<endl;
}; 

