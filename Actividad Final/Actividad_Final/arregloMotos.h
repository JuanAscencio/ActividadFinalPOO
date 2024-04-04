#ifndef ARREGLOMOTOS_H_INCLUDED
#define ARREGLOMOTOS_H_INCLUDED
#include "funciones.h"
#include "subrutinas.h"
#include "variablesGlobales.h"

using namespace std;

//-------------------------------------------------PROTOTIPOS---------------------------------------------------------//
void limpiarPantallaPausado();

void crearArregloMotos(int cajonesMoto);
void agregarMoto();
void mostrarArregloMotos();
void eliminarElementoMoto(int posicion);
void sobrescribirElementoMoto(int posicion);


//--------------------------------------------------SUBRUTINAS--------------------------------------------------------//

void crearArregloMotos(int cajonesMoto){
    Motos = new Motocicleta[cajonesMoto];
}

void agregarMoto(){
    if(contadorArregloMotos<cajonesMoto){
        short numeroCascos;
        string marca;
        string modelo;
        string nota;
        string transmicion;
        string placas;
        string color;

        cin.ignore();
        cout << "Estacionamiento" << endl;
        cout << "Espacios disponibles: " << cajonesMoto-contadorArregloMotos << " de " << cajonesMoto << endl;
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

        Motos[contadorArregloMotos].setMarca(marca);
        Motos[contadorArregloMotos].setModelo(modelo);
        Motos[contadorArregloMotos].setNota(nota);
        Motos[contadorArregloMotos].setTransmision(transmicion);
        Motos[contadorArregloMotos].setPlacas(placas);
        Motos[contadorArregloMotos].setColor(color);
        Motos[contadorArregloMotos].setNumeroCascos(numeroCascos);

        contadorArregloMotos++;
    }else{
        cout << "Estacionamiento" << endl;
        cout << "Cajones de motos llenos" << endl << endl;
    }

}

void mostrarArregloMotos(){
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
}

void sobrescribirElementoMoto(int posicion){
    short numeroCascos;
    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;

    cin.ignore();
    cout << "Estacionamiento" << endl;
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

    Motos[posicion].setMarca(marca);
    Motos[posicion].setModelo(modelo);
    Motos[posicion].setNota(nota);
    Motos[posicion].setTransmision(transmicion);
    Motos[posicion].setPlacas(placas);
    Motos[posicion].setColor(color);
    Motos[posicion].setNumeroCascos(numeroCascos);
}


#endif // ARREGLOMOTOS_H_INCLUDED
