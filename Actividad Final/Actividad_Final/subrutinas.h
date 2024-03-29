#ifndef SUBRUTINAS_H_INCLUDED
#define SUBRUTINAS_H_INCLUDED
#include<string>
#include<cctype>
#include<cstdlib>
#include "funciones.h"
#include "variablesGlobales.h"
using namespace std;
void pausar();
void limpiarPantalla();
void limpiarPantallaPausado();
void ValidarMenuPrincipal();
void ValidarOpciones();
void crearArregloMotos();
void mostrarArregloMotos();
void crearArregloCoches();
void mostrarArregloCoches();

//-------------------------------

void pausar(){
    system("pause");
}
void limpiarPantalla(){
    system("cls");
}
void limpiarPantallaPausado(){
    system("pause");
    system("cls");
}
void ValidarMenuPrincipal(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s))
        opcionMenuPrincipal = ConvertirStringNumero(s);

}
void ValidarOpciones(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s))
        opcion = ConvertirStringNumero(s);

}
//-------------------------------------------ARREGLO OBJETO MOTOCICLETA-----------------------------------------------//
void crearArregloMotos(){
    short numeroCascos;
    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;

    Motos = new Motocicleta[cajonesMoto];

    if(contadorArregloMotos<cajonesMoto){
        cin.get();
        cout << "Estacionamiento" << endl;
        cout << "Ingrese el dato que se le pide" << endl << endl;

        cout << "Marca:              ";
        getline(cin,marca);
        cout << "Modelo:             ";
        getline(cin,modelo);
        cout << "Nota:               ";
        getline(cin,nota);
        cout << "Transmición:        ";
        getline(cin,transmicion);
        cout << "Placas:             ";
        getline(cin,placas);
        cout << "Color:              ";
        getline(cin,color);
        cout << "Numero de cascos:   ";
        cin >> numeroCascos;
        cout << endl;

        Motos[contadorArregloMotos].setMarca(marca);
        Motos[contadorArregloMotos].setModelo(modelo);
        Motos[contadorArregloMotos].setNota(nota);
        Motos[contadorArregloMotos].setTransmision(transmicion);
        Motos[contadorArregloMotos].setPlacas(placas);
        Motos[contadorArregloMotos].setColor(color);
        Motos[contadorArregloMotos].setNumeroCascos(numeroCascos);

        contadorArregloMotos++;
    }
}
void mostrarArregloMotos(){
    for(int i=0;i<cajonesMoto;i++){
        Motos[i].mostrarDatos();
    }
}

//--------------------------------------------ARREGLO OBJETO AUTOMOVIL------------------------------------------------//
void crearArregloCoches(){
    string marca;
    string modelo;
    string nota;
    string transmicion;
    string placas;
    string color;
    short numeroVentanas;
    short numeroPuertas;

    Coches = new Automovil[cajonesCarro];

    if(contadorArregloCoches<cajonesCarro){
        cin.get();
        cout << "Estacionamiento" << endl;
        cout << "Ingrese el dato que se le pide" << endl << endl;

        cout << "Marca:                ";
        getline(cin,marca);
        cout << "Modelo:               ";
        getline(cin,modelo);
        cout << "Nota:                 ";
        getline(cin,nota);
        cout << "Transmición:          ";
        getline(cin,transmicion);
        cout << "Placas:               ";
        getline(cin,placas);
        cout << "Color:                ";
        getline(cin,color);
        cout << "Numero de ventanas:   ";
        cin >> numeroVentanas;
        cout << "Numero de puertas:    ";
        cin >> numeroPuertas;
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
    }
}
void mostrarArregloCoches(){
    for(int i=0;i<cajonesCarro;i++){
        cout << "Estacionamiento" << endl;
        cout << "Los datos del vehículo son:" << endl;
        cout << "Marca:                 " << Coches[i].getMarca() << endl;
        cout << "Modelo:                " << Coches[i].getModelo() << endl;
        cout << "Transmisión:           " << Coches[i].getTranmision()<< endl;
        cout << "Placas:                " << Coches[i].getPlacas() << endl;
        cout << "Color:                 " << Coches[i].getColor()<< endl;
        cout << "Numero de ventanas:    " << Coches[i].getNumeroVentanas()<< endl;
        cout << "Numero de puertas:     " << Coches[i].getNumeroPuertas()<< endl;
        cout << "Nota:                  " << Coches[i].getNota() << endl;
    }
}


#endif // SUBRUTINAS_H_INCLUDED
