#ifndef SUBRUTINAS_H_INCLUDED
#define SUBRUTINAS_H_INCLUDED
#include<string>
#include<cctype>
#include<cstdlib>
#include "funciones.h"
#include "variablesGlobales.h"
#include "arregloCoches.h"
#include "arregloMotos.h"

using namespace std;

//-------------------------------------------------PROTOTIPOS---------------------------------------------------------//

void limpiarPantalla();
void limpiarPantallaPausado();


void ValidarMenuPrincipal();
void ValidarOpciones();


void ValidarCajonesAutomovil();
void ValidarCajonesMotocicleta();


void validarEliminarAutomovil();
void validarEliminarMotocicleta();


void validarSobrescribirAutomovil();
void validarSobrescribirMotocicleta();

void validarRegistrarAutomovil();
void validarRegistrarMotocicleta();


//--------------------------------------------------SUBRUTINAS--------------------------------------------------------//

void limpiarPantalla(){
    system("cls");
}

void limpiarPantallaPausado(){
    system("pause");
    system("cls");
}

//-----------------------------------------------VALIDAR OPCIONES-----------------------------------------------------//

void ValidarMenuPrincipal(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s)){
        opcionMenuPrincipal = ConvertirStringNumero(s);
    }else{
        cout << "\nValor no válido. Inténtelo de nuevo" << endl;
    }
}

void ValidarOpciones(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s)){
        opcion = ConvertirStringNumero(s);
    }else{
        cout << "\nValor no válido. Inténtelo de nuevo" << endl;
    }
}

//------------------------------------------------VALIDAR CAJONES-----------------------------------------------------//
                                                //   AUTOMÓVIL   //
void ValidarCajonesAutomovil(){
    cout << "Ingrese el número de cajones para automóvil:      ";
    cin >> s;

    if(EsNumero(s)){
        cajonesCarro = ConvertirStringNumero(s);}
        else{
            cout << "\nValor no válido. Inténtelo de nuevo." << endl;
            cin.ignore();
            limpiarPantallaPausado();
            ValidarCajonesAutomovil();
        }
    }

                                                //   MOTOCICLETA   //
void ValidarCajonesMotocicleta(){
    cout << "Ingrese el número de cajones para motocicleta:    ";
    cin >> s;

if(EsNumero(s)){
    cajonesMoto = ConvertirStringNumero(s);}
    else{
        cout << "\nValor no válido. Inténtelo de nuevo." << endl;
        cin.ignore();
        limpiarPantallaPausado();
        ValidarCajonesMotocicleta();
    }
}

//-------------------------------------------VALIDAR ELIMINAR VEHÍCULO------------------------------------------------//
                                                //   AUTOMÓVIL   //
void validarEliminarAutomovil(){
    cin.ignore();
    if(contadorArregloCoches==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ningún coche. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"¿Qué posición desea eliminar? " << endl;
        cout << "Marca - Modelo" << endl;

        for(int i=0;i<cajonesCarro;i++){
            cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
        }

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesCarro){
            eliminarElementoCoche(opcion);
        }else{
            cout << "Formato no válido, intentelo de nuevo. " << endl;
        }

    }
}

                                                //   MOTOCICLETA   //
void validarEliminarMotocicleta(){
    cin.ignore();
    if(contadorArregloMotos==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ningúna moto. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"¿Qué posición desea eliminar? " << endl;

        for(int i=0;i<cajonesMoto;i++){
        cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() <<  endl;
        }

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesMoto){
            eliminarElementoMoto(opcion);
        }else{
            cout << "Formato no válido, intentelo de nuevo. " << endl;
        }
    }
}

//-------------------------------------------VALIDAR REGISTRAR VEHÍCULO-----------------------------------------------//
                                                //   AUTOMÓVIL   //
void validarRegistrarAutomovil(){
    cin.ignore();
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posición a ocupar/cambiar:" << endl;
    cout << "Espacios disponibles: [" <<cajonesCarro - contadorArregloCoches<< "] de [ " << cajonesCarro<< "]" <<  endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesCarro;i++){
        cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
    }
    cout << cajonesCarro + 1 <<". Salir" << endl << endl;

    ValidarOpciones();

    if(opcion>CERO && opcion<=cajonesCarro){
        agregarCarro(opcion);
    }else if(opcion==cajonesCarro+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no válido. Inténtelo de nuevo." << endl;
        }
}

                                                //   MOTOCICLETA   //
void validarRegistrarMotocicleta(){
    cin.ignore();
    cout << "Estacionamiento" << endl;
    cout << "Ingrese la posición a ocupar/cambiar:" << endl;
    cout << "Espacios disponibles: [" <<cajonesMoto - contadorArregloMotos<< "] de [ " << cajonesMoto<< "]" <<  endl;
    cout << "Marca - Modelo" << endl;
    for(int i=0;i<cajonesMoto;i++){
        cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() << endl;
    }
    cout << cajonesMoto + 1 <<". Salir" << endl << endl;

    ValidarOpciones();

    if(opcion>CERO && opcion<=cajonesMoto){
        agregarMoto(opcion);
    }else if(opcion==cajonesMoto+UNO){
        cout << "" << endl;
        }else{
            cout << "\nFormato no válido. Inténtelo de nuevo." << endl;
        }
}

#endif // SUBRUTINAS_H_INCLUDED
