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

    //Funci�n registrar cajones
    cout << "Estacionamiento" << endl;
    cout << "Ingrese el numero de cajones para autom�vil:    "; cin >> cajonesCarro;
    cout << "Ingrese el numero de cajones para motocicleta:  "; cin >> cajonesMoto;
    crearArregloMotos(cajonesMoto);
    crearArregloCoches(cajonesCarro);


    //Funcion men� principal
    do{
        limpiarPantalla();
        cout << "Estacionamiento" << endl;
        cout << "1. Registrar veh�culo" << endl;
        cout << "2. Eliminar veh�culo" << endl;
        cout << "3. Listar veh�culos" << endl;
        cout << "4. Editar veh�culo" << endl;
        cout << "5. Salir" << endl;
        ValidarMenuPrincipal();
        limpiarPantalla();

        switch(opcionMenuPrincipal){
        case REGISTRA_VEHICULO:{
            cout <<"Estacionamiento"<< endl;
            cout <<"�Desea ingresar un autom�vil o una motocicleta?"<< endl;
            cout <<"1.- Autom�vil "<< endl;
            cout <<"2.- Motocicleta "<< endl;
            ValidarOpciones();
            limpiarPantalla();

            if(opcion == AUTOMOVIL ){
                agregarCarro();
            }else if(opcion == MOTOCICLETA){
                    agregarMoto();
                    }else{
                        cout << "Formato no v�lido, intentelo de nuevo." << endl;
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

        case EDITAR_VEHICULO:
            cout <<"case4"<< endl;
            limpiarPantallaPausado();
            break;
        case SALIR:
            cout <<"case5, adio"<< endl;
            pausar();
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
