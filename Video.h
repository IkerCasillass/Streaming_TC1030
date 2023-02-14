//Iker Casillas | A01641047

#include<iostream>
using namespace std;

class Video{
    public:
    Video(string, string, int, int, int); //Constructor completo
    Video(string, string, int, int); //Constructor sin calificacion
    Video();

    string getNombre();
    string getTipoVideo();
    int getCalif();

    void setCalif(int);
    void setTipoVideo(string);
    void setNombre(string);
    void setGenero(string);
    void setYear(int);
    void setDuracion(int);

    void calificaVideo(int);
    virtual void pedirDatos();
    virtual void muestraDatos();
    

    
    

    protected:
        string nombreVideo;
        string genero;
        string tipoVideo;
        int year;
        int duracion;
        int calificacion;

};

class Pelicula: public Video{
    public:

        Pelicula(string, string, int, int, int, int);
        Pelicula(string, string, int, int, int);
        Pelicula();
        void pedirDatos();
        void muestraDatos();

    private:
        
        int nominaciones;
};

class Serie: public Video{
    public:

        Serie(string, string, int, int, int, int);
        Serie(string, string, int, int, int);
        Serie();

        void muestraDatos();
        void pedirDatos();

    private:

        int cantEpisodios;
        
};