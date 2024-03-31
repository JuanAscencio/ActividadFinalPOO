#ifndef SUBRUTINAS_H_INCLUDED
#define SUBRUTINAS_H_INCLUDED
#include<string>
#include<cctype>
#include<cstdlib>
#include "funciones.h"
#include "variablesGlobales.h"

using namespace std;

//------------------------------- Prototipos

void pausar();
void limpiarPantalla();
void limpiarPantallaPausado();
void ValidarMenuPrincipal();
void ValidarOpciones();
void crearArregloMotos(int cajonesMoto);
void agregarMoto();
void mostrarArregloMotos();
void crearArregloCoches(int cajonesCarro);
void agregarCarro();
void mostrarArregloCoches();


//------------------------------- Subrutinas

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

    if(EsNumero(s)){
        opcionMenuPrincipal = ConvertirStringNumero(s);
    }
}
void ValidarOpciones(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s)){
        opcion = ConvertirStringNumero(s);
    }
}
//-------------------------------------------ARREGLO OBJETO MOTOCICLETA-----------------------------------------------//
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
        cout << "Espacios disponibles: " << cajonesMoto-contadorArregloMotos << " de " << contadorArregloMotos << endl;
        cout << "Ingrese el dato que se le pide (moto)" << endl << endl;

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
    }else{
        cout << "Estacionamiento" << endl;
        cout << "Cajones de motos llenos" << endl << endl;
    }

}

void mostrarArregloMotos(){
    for(int i=0;i<cajonesMoto;i++){
        cout << "Estacionamiento" << endl;
        cout << "Cajón de moto número [" << i+1 << "] de ["<< cajonesMoto <<"]." << endl;
        Motos[i].mostrarDatos();
        limpiarPantallaPausado();
    }
}

//--------------------------------------------ARREGLO OBJETO AUTOMOVIL------------------------------------------------//
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
        cout << "Espacios disponibles: " <<cajonesCarro-contadorArregloCoches<< " de " << contadorArregloCoches << endl;
        cout << "Ingrese el dato que se le pide (coche)" << endl << endl;

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
    }else{
        cout << "Estacionamiento" << endl;
        cout << "Cajones de coche llenos" << endl << endl;
    }
}
void mostrarArregloCoches(){
    for(int i=0;i<cajonesCarro;i++){
        cout << "Estacionamiento" << endl;
        cout << "Cajón de carro número [" << i+1 << "] de ["<< cajonesCarro <<"]." << endl;
        Coches[i].mostrarDatos();
        limpiarPantallaPausado();
    }
}


#endif // SUBRUTINAS_H_INCLUDED
