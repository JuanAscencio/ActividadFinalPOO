#ifndef SUBRUTINAS_H_INCLUDED
#define SUBRUTINAS_H_INCLUDED
using namespace std;
void pausar();
void limpiarPantalla();
void limpiarPantallaPausado();


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
#endif // SUBRUTINAS_H_INCLUDED
