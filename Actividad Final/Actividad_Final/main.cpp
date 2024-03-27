#include <iostream>
#include <stdlib.h>
#include "clases.h"
#include "subrutinas.h"
#include "funciones.h"
#include "variablesGlobales.h"

enum {REGISTRA_VEHICULO=1,ELIMINAR_VEHICULO,LISTAR_VEHICULOS,EDITAR_VEHICULO,SALIR};

using namespace std;

int main()
{
    setlocale(LC_ALL,"");

    //Funci�n registrar cajones
    cout << "Estacionamiento" << endl;
    cout << "Ingrese el numero de cajones para autom�vil: "; cin >> cajonesCarro;
    cout << "Ingrese el numero de cajones para motocicleta: "; cin >> cajonesMoto;


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
        case REGISTRA_VEHICULO:
            cout <<"case1"<< endl;
            limpiarPantallaPausado();
            break;
        case ELIMINAR_VEHICULO:
            cout <<"case2"<< endl;
            limpiarPantallaPausado();
            break;
        case LISTAR_VEHICULOS:
            cout <<"case3"<< endl;
            limpiarPantallaPausado();
            break;
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

    return 0;
}
