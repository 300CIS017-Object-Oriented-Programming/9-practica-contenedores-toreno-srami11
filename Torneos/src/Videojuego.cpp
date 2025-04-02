//
// Created by serag on 4/1/2025.
//

#include "Videojuego.h"
Videojuego::Videojuego(int codigo, string nombre, string genero, int dificultad){
    this->codigo = codigo;
    this->nombre = nombre;
    this->genero = genero;
    this->dificultad = dificultad;
}
void Videojuego::mostrarInfo(){
    cout <<"Informacion del videojuego\n";
    cout << "Nombre del juego: " << getNombre();
    cout << "Codigo: " << getCodigo();
    cout << "Genero: "<< getGenero();
    cout << "Dificultad: " << getDificultad();
    cout << endl;
}

int Videojuego::getCodigo(){
    return codigo;
}
void Videojuego::setCodigo(int codigo){
    this->codigo = codigo;
}

string Videojuego:: getNombre(){
    return nombre;
}
void Videojuego::setNombre(string nombre){
    this->nombre = nombre;
}

string Videojuego :: getGenero(){
    return genero;
}
void Videojuego::setGenero(string genero){
    this->genero = genero;
}
int Videojuego::getDificultad(){
    return dificultad;
}

void Videojuego::setDificultad(int dificultad){
    this->dificultad = dificultad;
}