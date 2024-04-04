#ifndef ARREGLOCOCHES_H_INCLUDED
#define ARREGLOCOCHES_H_INCLUDED
#include "funciones.h"
#include "subrutinas.h"
#include "variablesGlobales.h"

using namespace std;

//-------------------------------------------------PROTOTIPOS---------------------------------------------------------//
void limpiarPantallaPausado();

void crearArregloCoches(int cajonesCarro);
void agregarCarro();
void mostrarArregloCoches();
void eliminarElementoCoche(int posicion);
void sobrescribirElementoCoche(int posicion);


//--------------------------------------------------SUBRUTINAS--------------------------------------------------------//

void crearArregloCoches(int cajonesCarro){
    Coches = new Automovil[cajonesCarro];
}

void agregarCarro(){
    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;
    short numeroVentanas;
    short numeroPuertas;

    if(contadorArregloCoches<cajonesCarro){
        cin.ignore();
        cout << "Estacionamiento" << endl;
        cout << "Espacios disponibles: " <<cajonesCarro-contadorArregloCoches<< " de " << cajonesCarro << endl;
        cout << "Ingrese el dato que se le pide (coche)" << endl << endl;

        cout << "Marca:                                ";
        getline(cin,marca);
        cout << "Modelo:                               ";
        getline(cin,modelo);
        cout << "Color:                                ";
        getline(cin,color);
        cout << "Transmición:                          ";
        getline(cin,transmicion);
        cout << "Placas:                               ";
        getline(cin,placas);
        cout << "Numero de ventanas sin detalles:      ";
        cin >> numeroVentanas;
        cout << "Numero de puertas sin detalles:       ";
        cin >> numeroPuertas;
        cin.get();
        cout << "Nota:                                 ";
        getline(cin,nota);
        cout << endl;

        Coches[contadorArregloCoches].setMarca(marca);
        Coches[contadorArregloCoches].setModelo(modelo);
        Coches[contadorArregloCoches].setNota(nota);
        Coches[contadorArregloCoches].setTransmision(transmicion);
        Coches[contadorArregloCoches].setPlacas(placas);
        Coches[contadorArregloCoches].setColor(color);
        Coches[contadorArregloCoches].setNumeroPuertas(numeroPuertas);
        Coches[contadorArregloCoches].setNumeroVentanas(numeroVentanas);

        contadorArregloCoches++;
    }else{
        cout << "Estacionamiento" << endl;
        cout << "Cajones de coche llenos" << endl << endl;
    }
}

void mostrarArregloCoches(){
    for(int i=0;i<cajonesCarro;i++){
    cout << "Estacionamiento" << endl;
    cout << "Cajón de carro número [" << i+UNO << "] de ["<< cajonesCarro <<"]." << endl;
    Coches[i].mostrarDatos();
    limpiarPantallaPausado();
    }
}

void eliminarElementoCoche(int posicion){
    posicion--;
    Coches[posicion].setMarca(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setModelo(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setNota(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setTransmision(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setPlacas(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setColor(DATO_POR_DEFECTO_TEXTUAL);
    Coches[posicion].setNumeroPuertas(DATO_POR_DEFECTO_NUMERICO);
    Coches[posicion].setNumeroVentanas(DATO_POR_DEFECTO_NUMERICO);
}

void sobrescribirElementoCoche(int posicion){
    posicion--;

    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;
    short numeroVentanas;
    short numeroPuertas;

    cin.ignore();
    cout << "Estacionamiento" << endl;
    cout << "Ingrese el dato que se le pide (coche)" << endl << endl;

    cout << "Marca:                                ";
    getline(cin,marca);
    cout << "Modelo:                               ";
    getline(cin,modelo);
    cout << "Color:                                ";
    getline(cin,color);
    cout << "Transmición:                          ";
    getline(cin,transmicion);
    cout << "Placas:                               ";
    getline(cin,placas);
    cout << "Numero de ventanas sin detalles:      ";
    cin >> numeroVentanas;
    cout << "Numero de puertas sin detalles:       ";
    cin >> numeroPuertas;
    cin.get();
    cout << "Nota:                                 ";
    getline(cin,nota);
    cout << endl;

    Coches[posicion].setMarca(marca);
    Coches[posicion].setModelo(modelo);
    Coches[posicion].setNota(nota);
    Coches[posicion].setTransmision(transmicion);
    Coches[posicion].setPlacas(placas);
    Coches[posicion].setColor(color);
    Coches[posicion].setNumeroPuertas(numeroPuertas);
    Coches[posicion].setNumeroVentanas(numeroVentanas);
}

#endif // ARREGLOCOCHES_H_INCLUDED
