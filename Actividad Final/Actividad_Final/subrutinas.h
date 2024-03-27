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
#endif // SUBRUTINAS_H_INCLUDED
