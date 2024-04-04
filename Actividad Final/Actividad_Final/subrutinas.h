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
    }
}

void ValidarOpciones(){
    cout << "Opción: ";
    cin >> s;

    if(EsNumero(s)){
        opcion = ConvertirStringNumero(s);
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
        limpiarPantallaPausado();
        ValidarCajonesAutomovil();
    }
}

//-------------------------------------------VALIDAR ELIMINAR VEHÍCULO------------------------------------------------//
                                                //   AUTOMÓVIL   //
void validarEliminarAutomovil(){
    if(contadorArregloCoches==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ningún coche. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"¿Qué posición desea eliminar? " << endl;

        for(int i=0;i<cajonesCarro;i++){
            cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Motos[i].getModelo() << endl;
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

//-----------------------------------------VALIDAR SOBRESCRIBIR VEHÍCULO----------------------------------------------//
                                                //   AUTOMÓVIL   //
void validarSobrescribirAutomovil(){
    if(contadorArregloCoches==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ningún coche. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"¿Qué posición desea sobrescribir? " << endl;

        for(int i=0;i<cajonesCarro;i++){
            cout << i+UNO << ". " << Coches[i].getMarca() << " - " << Coches[i].getModelo() << endl;
        }

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesCarro){
            sobrescribirElementoCoche(opcion);
        }else{
            cout << "Formato no válido, intentelo de nuevo. " << endl;
        }
    }
}
                                                //   MOTOCICLETA   //
void validarSobrescribirMotocicleta(){
    if(contadorArregloMotos==CERO){
        cout <<"Estacionamiento"<< endl;
        cout <<"No ha ingresado ninguna moto. " << endl;
    }else{
        cout <<"Estacionamiento"<< endl;
        cout <<"¿Qué posición desea sobrescribir? " << endl;

        for(int i=0;i<cajonesMoto;i++){
            cout << i+UNO << ". " << Motos[i].getMarca() << " - " << Motos[i].getModelo() << endl;
        }

        ValidarOpciones();

        if(opcion>CERO && opcion<=cajonesMoto){
            sobrescribirElementoMoto(opcion);
        }else{
            cout << "Formato no válido, intentelo de nuevo. " << endl;
        }
    }
}


#endif // SUBRUTINAS_H_INCLUDED
