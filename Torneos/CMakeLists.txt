cmake_minimum_required(VERSION 3.30)
project(Torneos)

set(CMAKE_CXX_STANDARD 20)

add_executable(Torneos main.cpp
        src/Jugador.cpp
        src/Jugador.h
        src/Videojuego.cpp
        src/Videojuego.h
        src/Torneo.cpp
        src/Torneo.h)
