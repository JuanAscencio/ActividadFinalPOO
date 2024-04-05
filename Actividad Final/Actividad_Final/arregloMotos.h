#ifndef ARREGLOMOTOS_H_INCLUDED
#define ARREGLOMOTOS_H_INCLUDED
#include "funciones.h"
#include "subrutinas.h"
#include "variablesGlobales.h"

using namespace std;

//-------------------------------------------------PROTOTIPOS---------------------------------------------------------//
void limpiarPantalla();
void limpiarPantallaPausado();
void ValidarOpciones();

void crearArregloMotos(int cajonesMoto);
void agregarMoto(int posicion);//
void mostrarArregloMotos();
void eliminarElementoMoto(int posicion);


//--------------------------------------------------SUBRUTINAS--------------------------------------------------------//

void crearArregloMotos(int cajonesMoto){
    Motos = new Motocicleta[cajonesMoto];
}

void agregarMoto(int posicion){
    cin.ignore();
    short numeroCascos;
    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;

    limpiarPantalla();
    cout << "Estacionamiento" << endl;
    cout << "Espacio a registrar: [" << posicion << "] de [" << cajonesMoto << "]" <<   endl;
    cout << "Ingrese el dato que se le pide (moto)" << endl << endl;
    cout << "Marca:                             ";
    getline(cin,marca);
    cout << "Modelo:                            ";
    getline(cin,modelo);
    cout << "Color:                             ";
    getline(cin,color);
    cout << "Transmición:                       ";
    getline(cin,transmicion);
    cout << "Placas:                            ";
    getline(cin,placas);
    cout << "Numero de cascos que entregó:      ";
    cin >> numeroCascos;
    cin.get();
    cout << "Nota:                              ";
    getline(cin,nota);
    cout << endl;

    posicion--;
    Motos[posicion].setMarca(marca);
    Motos[posicion].setModelo(modelo);
    Motos[posicion].setNota(nota);
    Motos[posicion].setTransmision(transmicion);
    Motos[posicion].setPlacas(placas);
    Motos[posicion].setColor(color);
    Motos[posicion].setNumeroCascos(numeroCascos);

    contadorArregloMotos++;
}

void mostrarArregloMotos(){
    cin.ignore();
    for(int i=0;i<cajonesMoto;i++){
        cout << "Estacionamiento" << endl;
        cout << "Cajón de moto número [" << i+UNO << "] de ["<< cajonesMoto <<"]." << endl;
        Motos[i].mostrarDatos();
        limpiarPantallaPausado();
    }
}

void eliminarElementoMoto(int posicion){
    posicion--;
    Motos[posicion].setMarca(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setModelo(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setNota(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setTransmision(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setPlacas(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setColor(DATO_POR_DEFECTO_TEXTUAL);
    Motos[posicion].setNumeroCascos(DATO_POR_DEFECTO_NUMERICO);

    contadorArregloMotos--;
}


#endif // ARREGLOMOTOS_H_INCLUDED
