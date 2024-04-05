#include <iostream>
#include "clases.h"
#include "subrutinas.h"
#include "arregloCoches.h"
#include "arregloMotos.h"
#include "funciones.h"
#include "variablesGlobales.h"
#include <stdlib.h>

enum {REGISTRAR_VEHICULOS=UNO,ELIMINAR_VEHICULO,LISTAR_VEHICULOS,SALIR};
enum {AUTOMOVIL=UNO,MOTOCICLETA};

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    cout << "Estacionamiento" << endl;
    ValidarCajonesAutomovil();
    ValidarCajonesMotocicleta();

    crearArregloMotos(cajonesMoto);
    crearArregloCoches(cajonesCarro);


    //Funcion men� principal
    do{
        limpiarPantalla();
        cout << "Estacionamiento" << endl;
        cout << "1. Registrar veh�culo" << endl;
        cout << "2. Eliminar veh�culo" << endl;
        cout << "3. Listar veh�culos" << endl;
        cout << "4. Salir" << endl;
        ValidarMenuPrincipal();
        limpiarPantalla();

        switch(opcionMenuPrincipal){

        case REGISTRAR_VEHICULOS:{

            cout <<"Estacionamiento"<< endl;
            cout <<"�Desea ingresar un autom�vil o una motocicleta?"<< endl;
            cout <<"1.- Autom�vil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            switch(opcion){
            case AUTOMOVIL:
                validarRegistrarAutomovil();
                break;

            case MOTOCICLETA:
                validarRegistrarMotocicleta();
                break;

            default:
                cout << "Formato no v�lido, intentelo de nuevo." << endl;
                }

        limpiarPantallaPausado();
        break;
        }

        case ELIMINAR_VEHICULO:{
            cout <<"Estacionamiento"<< endl;
            cout <<"�Qu� clase de veh�culo desea eliminar?"<< endl;
            cout <<"1.- Autom�vil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            if(opcion==AUTOMOVIL){
                validarEliminarAutomovil();
            }else if(opcion==MOTOCICLETA){
                        validarEliminarMotocicleta();
                    }else{
                        cout << "Formato no v�lido, intentelo de nuevo." << endl;
                    }

            limpiarPantallaPausado();
            break;
        }

        case LISTAR_VEHICULOS:{
            cout <<"Estacionamiento"<< endl;
            cout <<"�Qu� veh�culos desea mostrar?"<< endl;
            cout <<"1.- Autom�vil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            if(opcion == AUTOMOVIL ){
                mostrarArregloCoches();
            }else if(opcion == MOTOCICLETA){
                    mostrarArregloMotos();
                    }else{
                        cout << "Formato no v�lido, intentelo de nuevo." << endl;
                    }

            break;
            }

        case SALIR:
            cout <<"case5, adio"<< endl;
            break;

        default:
            cout <<"Formato no v�lido"<< endl;
            cout <<"Intentelo de nuevo"<< endl<<endl;
            limpiarPantallaPausado();
        }

    }while(opcionMenuPrincipal!=SALIR);

    delete[] Motos;
    delete[] Coches;

    return 0;
}
