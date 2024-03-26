#include <iostream>
#include <stdlib.h>
#include "clases.h"
#include "subrutinas.h"

enum {REGISTRA_VEHICULO=1,ELIMINAR_VEHICULO,LISTAR_VEHICULOS,EDITAR_VEHICULO,SALIR};

using namespace std;

int main()
{
    int /*cajonesDefecto=5,*/cajonesCarro,cajonesMoto,opcionMenuPrincipal;
    setlocale(LC_ALL,"");

    //Función registrar cajones
    cout << "Estacionamiento" << endl;
    cout << "Ingrese el numero de cajones para automóvil: "; cin >> cajonesCarro;
    cout << "Ingrese el numero de cajones para motocicleta: "; cin >> cajonesMoto;

    //Funcion menú principal
    do{
        limpiarPantalla();
        cout << "Estacionamiento" << endl;
        cout << "1. Registrar vehículo" << endl;
        cout << "2. Eliminar vehículo" << endl;
        cout << "3. Listar vehículos" << endl;
        cout << "4. Editar vehículo" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: " ; cin >> opcionMenuPrincipal;

        limpiarPantalla();
        switch(opcionMenuPrincipal){
        case REGISTRA_VEHICULO:
            cout <<"case1";
            limpiarPantallaPausado();
            break;
        case ELIMINAR_VEHICULO:
            cout <<"case2";
            limpiarPantallaPausado();
            break;
        case LISTAR_VEHICULOS:
            cout <<"case3";
            limpiarPantallaPausado();
            break;
        case EDITAR_VEHICULO:
            cout <<"case4";
            limpiarPantallaPausado();
            break;
        case SALIR:
            cout <<"case5, adio";
            pausar();
            break;
        default:
            cout <<"ingrese un Valor válido";
            limpiarPantallaPausado();
        }
    }while(opcionMenuPrincipal!=SALIR);

    return 0;
}
