#include <iostream>
#include <stdlib.h>
#include "clases.h"
#include "subrutinas.h"
#include "funciones.h"
#include "variablesGlobales.h"

enum {REGISTRA_VEHICULO=1,ELIMINAR_VEHICULO,LISTAR_VEHICULOS,EDITAR_VEHICULO,SALIR};
enum {AUTOMOVIL=1,MOTOCICLETA};

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    //Función registrar cajones
    cout << "Estacionamiento" << endl;
    cout << "Ingrese el numero de cajones para automóvil:    "; cin >> cajonesCarro;
    cout << "Ingrese el numero de cajones para motocicleta:  "; cin >> cajonesMoto;
    crearArregloMotos(cajonesMoto);
    crearArregloCoches(cajonesCarro);


    //Funcion menú principal
    do{
        limpiarPantalla();
        cout << "Estacionamiento" << endl;
        cout << "1. Registrar vehículo" << endl;
        cout << "2. Eliminar vehículo" << endl;
        cout << "3. Listar vehículos" << endl;
        cout << "4. Editar vehículo" << endl;
        cout << "5. Salir" << endl;
        ValidarMenuPrincipal();
        limpiarPantalla();

        switch(opcionMenuPrincipal){
        case REGISTRA_VEHICULO:{
            cout <<"Estacionamiento"<< endl;
            cout <<"¿Desea ingresar un automóvil o una motocicleta?"<< endl;
            cout <<"1.- Automóvil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            if(opcion == AUTOMOVIL ){
                agregarCarro();
            }else if(opcion == MOTOCICLETA){
                    agregarMoto();
                    }else{
                        cout << "Formato no válido, intentelo de nuevo." << endl;
                    }

            limpiarPantallaPausado();
            break;
            }

        case ELIMINAR_VEHICULO:
            cout <<"case2"<< endl;
            limpiarPantallaPausado();
            break;

        case LISTAR_VEHICULOS:{
            cout <<"Estacionamiento"<< endl;
            cout <<"¿Qué vehículos desea mostrar?"<< endl;
            cout <<"1.- Automóvil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            if(opcion == AUTOMOVIL ){
                mostrarArregloCoches();
            }else if(opcion == MOTOCICLETA){
                    mostrarArregloMotos();
                    }else{
                        cout << "Formato no válido, intentelo de nuevo." << endl;
                    }

            break;
            }

        case EDITAR_VEHICULO:
            cout <<"case4"<< endl;
            limpiarPantallaPausado();
            break;
        case SALIR:
            cout <<"case5, adio"<< endl;
            pausar();
            break;
        default:
            cout <<"Formato no válido"<< endl;
            cout <<"Intentelo de nuevo"<< endl<<endl;
            limpiarPantallaPausado();
        }
    }while(opcionMenuPrincipal!=SALIR);

    delete[] Motos;
    delete[] Coches;

    return 0;
}
